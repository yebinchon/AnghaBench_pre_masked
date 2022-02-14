
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int avail_in; int* next_out; int avail_out; int next_in; } ;
typedef TYPE_1__ z_stream ;
typedef int uint8_t ;
struct TYPE_17__ {TYPE_4__* previous_frame; TYPE_1__ zstream; } ;
typedef TYPE_2__ ZeroCodecContext ;
struct TYPE_20__ {int height; int width; TYPE_2__* priv_data; } ;
struct TYPE_19__ {int** data; int key_frame; int* linesize; int pict_type; } ;
struct TYPE_18__ {int flags; int size; int data; } ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_5__*,int ,char*,...) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_9, void *VAR_10,
                                  int *VAR_11, AVPacket *VAR_12)
{
    ZeroCodecContext *VAR_13 = VAR_9->priv_data;
    AVFrame *VAR_14 = VAR_10;
    AVFrame *VAR_15 = VAR_13->previous_frame;
    z_stream *VAR_16 = &VAR_13->zstream;
    uint8_t *VAR_17 = VAR_15->data[0];
    uint8_t *VAR_18;
    int VAR_19, VAR_20, VAR_21, VAR_22;

    if (VAR_12->flags & VAR_5) {
        VAR_14->key_frame = 1;
        VAR_14->pict_type = VAR_3;
    } else {
        if (!VAR_17) {
            FUNC_2(VAR_9, VAR_2, "Missing reference frame.\n");
            return VAR_0;
        }

        VAR_17 += (VAR_9->height - 1) * VAR_15->linesize[0];

        VAR_14->key_frame = 0;
        VAR_14->pict_type = VAR_4;
    }

    VAR_21 = FUNC_5(VAR_16);
    if (VAR_21 != VAR_6) {
        FUNC_2(VAR_9, VAR_2, "Could not reset inflate: %d.\n", VAR_21);
        return VAR_0;
    }

    if ((VAR_22 = FUNC_3(VAR_9, VAR_14, VAR_1)) < 0)
        return VAR_22;

    VAR_16->next_in = VAR_12->data;
    VAR_16->avail_in = VAR_12->size;

    VAR_18 = VAR_14->data[0] + (VAR_9->height - 1) * VAR_14->linesize[0];






    for (VAR_19 = 0; VAR_19 < VAR_9->height; VAR_19++) {
        VAR_16->next_out = VAR_18;
        VAR_16->avail_out = VAR_9->width << 1;

        VAR_21 = FUNC_4(VAR_16, VAR_8);
        if (VAR_21 != VAR_6 && VAR_21 != VAR_7) {
            FUNC_2(VAR_9, VAR_2,
                   "Inflate failed with return code: %d.\n", VAR_21);
            return VAR_0;
        }

        if (!(VAR_12->flags & VAR_5))
            for (VAR_20 = 0; VAR_20 < VAR_9->width << 1; VAR_20++)
                VAR_18[VAR_20] += VAR_17[VAR_20] & -!VAR_18[VAR_20];

        VAR_17 -= VAR_15->linesize[0];
        VAR_18 -= VAR_14->linesize[0];
    }

    FUNC_1(VAR_13->previous_frame);
    if ((VAR_22 = FUNC_0(VAR_13->previous_frame, VAR_14)) < 0)
        return VAR_22;

    *VAR_11 = 1;

    return VAR_12->size;
}
