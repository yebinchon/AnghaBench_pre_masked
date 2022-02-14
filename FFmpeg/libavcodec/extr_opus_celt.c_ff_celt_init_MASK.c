
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {int output_channels; int apply_phase_inv; int opusdsp; int dsp; int pvq; int * imdct; TYPE_2__* avctx; } ;
typedef TYPE_1__ CeltFrame ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__**) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int,int,float) ;
 int FUNC_9 (int *) ;

int FUNC_10(AVCodecContext *VAR_4, CeltFrame **VAR_5, int VAR_6,
                 int VAR_7)
{
    CeltFrame *VAR_8;
    int VAR_9, VAR_10;

    if (VAR_6 != 1 && VAR_6 != 2) {
        FUNC_2(VAR_4, VAR_1, "Invalid number of output channels: %d\n",
               VAR_6);
        return FUNC_0(VAR_2);
    }

    VAR_8 = FUNC_3(sizeof(*VAR_8));
    if (!VAR_8)
        return FUNC_0(VAR_3);

    VAR_8->avctx = VAR_4;
    VAR_8->output_channels = VAR_6;
    VAR_8->apply_phase_inv = VAR_7;

    for (VAR_9 = 0; VAR_9 < FUNC_1(VAR_8->imdct); VAR_9++)
        if ((VAR_10 = FUNC_8(&VAR_8->imdct[VAR_9], 1, VAR_9 + 3, -1.0f/32768)) < 0)
            goto fail;

    if ((VAR_10 = FUNC_7(&VAR_8->pvq, 0)) < 0)
        goto fail;

    VAR_8->dsp = FUNC_4(VAR_4->flags & VAR_0);
    if (!VAR_8->dsp) {
        VAR_10 = FUNC_0(VAR_3);
        goto fail;
    }

    FUNC_9(&VAR_8->opusdsp);
    FUNC_5(VAR_8);

    *VAR_5 = VAR_8;

    return 0;
fail:
    FUNC_6(&VAR_8);
    return VAR_10;
}
