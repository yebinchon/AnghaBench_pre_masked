
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int gop_size; TYPE_1__* priv_data; } ;
struct TYPE_15__ {int quality; } ;
struct TYPE_14__ {int flags; scalar_t__ data; scalar_t__ size; } ;
struct TYPE_13__ {int lambda; int width; int height; int framesSinceKeyframe; scalar_t__ out_buf; scalar_t__ first_frame; int last_frame; int current_frame; TYPE_3__ const* frame_to_enc; TYPE_4__* avctx; } ;
typedef TYPE_1__ RoqContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_2__*,int,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2, AVPacket *VAR_3,
                            const AVFrame *VAR_4, int *VAR_5)
{
    RoqContext *VAR_6 = VAR_2->priv_data;
    int VAR_7, VAR_8;

    VAR_6->avctx = VAR_2;

    VAR_6->frame_to_enc = VAR_4;

    if (VAR_4->quality)
        VAR_6->lambda = VAR_4->quality - 1;
    else
        VAR_6->lambda = 2*VAR_1;



    VAR_7 = ((VAR_6->width * VAR_6->height / 64) * 138 + 7) / 8 + 256 * (6 + 4) + 8;
    if ((VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_7, 0)) < 0)
        return VAR_8;
    VAR_6->out_buf = VAR_3->data;


    if (VAR_6->framesSinceKeyframe == VAR_2->gop_size)
        VAR_6->framesSinceKeyframe = 0;

    if (VAR_6->first_frame) {


        if ((VAR_8 = FUNC_1(VAR_2, VAR_6->current_frame, 0)) < 0 ||
            (VAR_8 = FUNC_1(VAR_2, VAR_6->last_frame, 0)) < 0)
            return VAR_8;


        FUNC_3(VAR_6);

        VAR_6->first_frame = 0;
    }


    VAR_8 = FUNC_2(VAR_6);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_3->size = VAR_6->out_buf - VAR_3->data;
    if (VAR_6->framesSinceKeyframe == 1)
        VAR_3->flags |= VAR_0;
    *VAR_5 = 1;

    return 0;
}
