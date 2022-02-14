
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ type; } ;
struct TYPE_14__ {int dectab; int cnts; int * freqs; int cntsum; } ;
struct TYPE_13__ {int dectab; int cnts; int * freqs; int cntsum; } ;
struct TYPE_12__ {int dectab; int cnts; int * freqs; int cntsum; } ;
struct TYPE_18__ {TYPE_7__* op_model3; TYPE_6__* mv_model3; TYPE_5__* sxy_model3; TYPE_4__ count_model3; TYPE_3__ fill_model3; TYPE_2__ range_model3; TYPE_1__* run_model3; TYPE_9__** pixel_model3; } ;
struct TYPE_17__ {int dectab; int cnts; int * freqs; int cntsum; } ;
struct TYPE_16__ {int dectab; int cnts; int * freqs; int cntsum; } ;
struct TYPE_15__ {int dectab; int cnts; int * freqs; int cntsum; } ;
struct TYPE_11__ {int dectab; int cnts; int * freqs; int cntsum; } ;
typedef TYPE_8__ SCPRContext ;
typedef TYPE_9__ PixelModel3 ;


 int FUNC_0 (int,int *,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(SCPRContext * VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < 3; VAR_1++) {
        for (int VAR_2 = 0; VAR_2 < 4096; VAR_2++) {
            PixelModel3 *VAR_3 = &VAR_0->pixel_model3[VAR_1][VAR_2];
            VAR_3->type = 0;
        }
    }

    for (int VAR_4 = 0; VAR_4 < 6; VAR_4++) {
        FUNC_0(256, &VAR_0->run_model3[VAR_4].cntsum,
                     VAR_0->run_model3[VAR_4].freqs[0], VAR_0->run_model3[VAR_4].freqs[1],
                     VAR_0->run_model3[VAR_4].cnts, VAR_0->run_model3[VAR_4].dectab);
    }

    FUNC_0(256, &VAR_0->range_model3.cntsum,
                 VAR_0->range_model3.freqs[0], VAR_0->range_model3.freqs[1],
                 VAR_0->range_model3.cnts, VAR_0->range_model3.dectab);

    FUNC_0(5, &VAR_0->fill_model3.cntsum,
                 VAR_0->fill_model3.freqs[0], VAR_0->fill_model3.freqs[1],
                 VAR_0->fill_model3.cnts, VAR_0->fill_model3.dectab);

    FUNC_0(256, &VAR_0->count_model3.cntsum,
                 VAR_0->count_model3.freqs[0], VAR_0->count_model3.freqs[1],
                 VAR_0->count_model3.cnts, VAR_0->count_model3.dectab);

    for (int VAR_5 = 0; VAR_5 < 4; VAR_5++) {
        FUNC_0(16, &VAR_0->sxy_model3[VAR_5].cntsum,
                     VAR_0->sxy_model3[VAR_5].freqs[0], VAR_0->sxy_model3[VAR_5].freqs[1],
                     VAR_0->sxy_model3[VAR_5].cnts, VAR_0->sxy_model3[VAR_5].dectab);
    }

    for (int VAR_6 = 0; VAR_6 < 2; VAR_6++) {
        FUNC_0(512, &VAR_0->mv_model3[VAR_6].cntsum,
                     VAR_0->mv_model3[VAR_6].freqs[0], VAR_0->mv_model3[VAR_6].freqs[1],
                     VAR_0->mv_model3[VAR_6].cnts, VAR_0->mv_model3[VAR_6].dectab);
    }

    for (int VAR_7 = 0; VAR_7 < 6; VAR_7++) {
        FUNC_0(6, &VAR_0->op_model3[VAR_7].cntsum,
                     VAR_0->op_model3[VAR_7].freqs[0], VAR_0->op_model3[VAR_7].freqs[1],
                     VAR_0->op_model3[VAR_7].cnts, VAR_0->op_model3[VAR_7].dectab);
    }
}
