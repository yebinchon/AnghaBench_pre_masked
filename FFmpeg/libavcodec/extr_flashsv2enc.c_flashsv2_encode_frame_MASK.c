
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ frame_number; scalar_t__ gop_size; scalar_t__ keyint_min; TYPE_1__* priv_data; } ;
struct TYPE_18__ {int * linesize; int * data; } ;
struct TYPE_17__ {int size; int flags; int data; } ;
struct TYPE_16__ {scalar_t__ last_key_frame; int dist; scalar_t__ use15_7; scalar_t__ frame_size; } ;
typedef TYPE_1__ FlashSV2Context ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,char*,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__* const) ;
 int FUNC_3 (TYPE_1__* const) ;
 int FUNC_4 (TYPE_1__* const,int*) ;
 int FUNC_5 (TYPE_1__* const,int ,int ) ;
 int FUNC_6 (TYPE_1__* const,int ,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_3, AVPacket *VAR_4,
                                 const AVFrame *VAR_5, int *VAR_6)
{
    FlashSV2Context *const VAR_7 = VAR_3->priv_data;
    int VAR_8;
    int VAR_9 = 0;

    if ((VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_7->frame_size + VAR_0, 0)) < 0)
        return VAR_8;


    if (VAR_3->frame_number == 0)
        VAR_9 = 1;


    if (VAR_3->gop_size > 0) {
        if (VAR_3->frame_number >= VAR_7->last_key_frame + VAR_3->gop_size)
            VAR_9 = 1;
    }

    if (!VAR_9
        && VAR_3->frame_number > VAR_7->last_key_frame + VAR_3->keyint_min) {
        FUNC_4(VAR_7, &VAR_9);
        if (VAR_9)
            FUNC_0(VAR_3, VAR_1, "Recommending key frame at frame %d\n", VAR_3->frame_number);
    }

    if (VAR_9) {
        VAR_8 = FUNC_5(VAR_7, VAR_5->data[0], VAR_5->linesize[0]);
        if (VAR_8)
            return VAR_8;
    }

    if (VAR_7->use15_7)
        VAR_7->dist = FUNC_3(VAR_7);

    VAR_8 = FUNC_6(VAR_7, VAR_5->data[0], VAR_5->linesize[0], VAR_4->data, VAR_4->size, VAR_9);

    if (VAR_9) {
        FUNC_2(VAR_7);
        VAR_7->last_key_frame = VAR_3->frame_number;
        VAR_4->flags |= VAR_2;
        FUNC_0(VAR_3, VAR_1, "Inserting key frame at frame %d\n", VAR_3->frame_number);
    }

    VAR_4->size = VAR_8;
    *VAR_6 = 1;

    return 0;
}
