
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_18__ {int f; } ;
struct TYPE_17__ {int slice_count; int frame_number; TYPE_1__* priv_data; } ;
struct TYPE_16__ {int size; int * data; } ;
struct TYPE_15__ {scalar_t__ mb_y; scalar_t__ mb_height; scalar_t__ pict_type; TYPE_9__* current_picture_ptr; scalar_t__ low_delay; TYPE_9__* last_picture_ptr; int er; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (int,int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_3__*,int ,char*,int) ;
 int FUNC_3 (TYPE_3__*,char*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int *,TYPE_9__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_9__*,int *) ;
 unsigned int FUNC_8 (TYPE_3__*,int const*,int) ;
 int FUNC_9 (TYPE_3__*,int const*,int,int,int) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_4, void *VAR_5, int *VAR_6,
                             AVPacket *VAR_7)
{
    const uint8_t *VAR_8 = VAR_7->data;
    int VAR_9 = VAR_7->size;
    MpegEncContext *VAR_10 = VAR_4->priv_data;
    AVFrame *VAR_11 = VAR_5;
    int VAR_12, VAR_13;
    int VAR_14;
    const uint8_t *VAR_15 = ((void*)0);

    FUNC_3(VAR_4, "*****frame %d size=%d\n", VAR_4->frame_number, VAR_9);


    if (VAR_9 == 0) {
        return 0;
    }

    if (!VAR_4->slice_count) {
        VAR_14 = (*VAR_8++) + 1;
        VAR_9--;

        if (!VAR_14 || VAR_9 <= 8 * VAR_14) {
            FUNC_2(VAR_4, VAR_1, "Invalid slice count: %d.\n",
                   VAR_14);
            return VAR_0;
        }

        VAR_15 = VAR_8 + 4;
        VAR_8 += 8 * VAR_14;
        VAR_9 -= 8 * VAR_14;
    } else
        VAR_14 = VAR_4->slice_count;

    for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
        unsigned VAR_16 = FUNC_8(VAR_4, VAR_15, VAR_12);
        int VAR_17, VAR_18;

        if (VAR_16 >= VAR_9)
            return VAR_0;

        if (VAR_12 + 1 == VAR_14)
            VAR_17 = VAR_9 - VAR_16;
        else
            VAR_17 = FUNC_8(VAR_4, VAR_15, VAR_12 + 1) - VAR_16;

        if (VAR_12 + 2 >= VAR_14)
            VAR_18 = VAR_9 - VAR_16;
        else
            VAR_18 = FUNC_8(VAR_4, VAR_15, VAR_12 + 2) - VAR_16;

        if (VAR_17 <= 0 || VAR_18 <= 0 ||
            VAR_16 + FUNC_0(VAR_17, VAR_18) > VAR_9)
            return VAR_0;

        if ((VAR_13 = FUNC_9(VAR_4, VAR_8 + VAR_16, VAR_17, VAR_18, VAR_9)) < 0)
            return VAR_13;

        if (VAR_13 > 8 * VAR_17)
            VAR_12++;
    }

    if (VAR_10->current_picture_ptr && VAR_10->mb_y >= VAR_10->mb_height) {
        FUNC_4(&VAR_10->er);
        FUNC_6(VAR_10);

        if (VAR_10->pict_type == VAR_2 || VAR_10->low_delay) {
            if ((VAR_13 = FUNC_1(VAR_11, VAR_10->current_picture_ptr->f)) < 0)
                return VAR_13;
            FUNC_7(VAR_10, VAR_10->current_picture_ptr, VAR_11);
            FUNC_5(VAR_10, VAR_11, VAR_10->current_picture_ptr, VAR_3);
        } else if (VAR_10->last_picture_ptr) {
            if ((VAR_13 = FUNC_1(VAR_11, VAR_10->last_picture_ptr->f)) < 0)
                return VAR_13;
            FUNC_7(VAR_10, VAR_10->last_picture_ptr, VAR_11);
            FUNC_5(VAR_10, VAR_11,VAR_10->last_picture_ptr, VAR_3);
        }

        if (VAR_10->last_picture_ptr || VAR_10->low_delay) {
            *VAR_6 = 1;
        }


        VAR_10->current_picture_ptr = ((void*)0);
    }

    return VAR_7->size;
}
