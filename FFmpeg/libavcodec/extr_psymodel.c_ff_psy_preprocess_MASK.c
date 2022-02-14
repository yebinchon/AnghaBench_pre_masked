
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* filter_flt ) (int ,int ,int,float*,int,float*,int) ;} ;
struct FFPsyPreprocessContext {int * fstate; int fcoeffs; TYPE_2__ fiir; TYPE_1__* avctx; } ;
struct TYPE_3__ {int frame_size; } ;
typedef TYPE_2__ FFIIRFilterContext ;


 int FUNC_0 (int ,int ,int,float*,int,float*,int) ;

void FUNC_1(struct FFPsyPreprocessContext *VAR_0, float **VAR_1, int VAR_2)
{
    int VAR_3;
    int VAR_4 = VAR_0->avctx->frame_size;
    FFIIRFilterContext *VAR_5 = &VAR_0->fiir;

    if (VAR_0->fstate) {
        for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
            VAR_5->filter_flt(VAR_0->fcoeffs, VAR_0->fstate[VAR_3], VAR_4,
                            &VAR_1[VAR_3][VAR_4], 1, &VAR_1[VAR_3][VAR_4], 1);
    }
}
