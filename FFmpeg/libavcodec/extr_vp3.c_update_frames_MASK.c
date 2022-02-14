
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int current_frame; int golden_frame; scalar_t__ keyframe; int last_frame; } ;
typedef TYPE_1__ Vp3DecodeContext ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0)
{
    Vp3DecodeContext *VAR_1 = VAR_0->priv_data;
    int VAR_2 = 0;


    FUNC_1(VAR_0, &VAR_1->last_frame);
    VAR_2 = FUNC_0(&VAR_1->last_frame, &VAR_1->current_frame);
    if (VAR_2 < 0)
        goto fail;

    if (VAR_1->keyframe) {
        FUNC_1(VAR_0, &VAR_1->golden_frame);
        VAR_2 = FUNC_0(&VAR_1->golden_frame, &VAR_1->current_frame);
    }

fail:
    FUNC_1(VAR_0, &VAR_1->current_frame);
    return VAR_2;
}
