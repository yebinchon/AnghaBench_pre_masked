
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {float* pf_gains_new; int pf_period_new; } ;
struct TYPE_4__ {scalar_t__ start_band; int framebits; TYPE_2__* block; } ;
typedef int OpusRangeCoder ;
typedef TYPE_1__ CeltFrame ;
typedef TYPE_2__ CeltBlock ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 float** VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (float*,int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(CeltFrame *VAR_3, OpusRangeCoder *VAR_4, int VAR_5)
{
    int VAR_6;

    FUNC_5(VAR_3->block[0].pf_gains_new, 0, sizeof(VAR_3->block[0].pf_gains_new));
    FUNC_5(VAR_3->block[1].pf_gains_new, 0, sizeof(VAR_3->block[1].pf_gains_new));

    if (VAR_3->start_band == 0 && VAR_5 + 16 <= VAR_3->framebits) {
        int VAR_7 = FUNC_2(VAR_4, 1);
        if (VAR_7) {
            float VAR_8;
            int VAR_9, VAR_10, VAR_11;

            VAR_10 = FUNC_3(VAR_4, 6);
            VAR_11 = (16 << VAR_10) + FUNC_4(VAR_4, 4 + VAR_10) - 1;
            VAR_8 = 0.09375f * (FUNC_4(VAR_4, 3) + 1);
            VAR_9 = (FUNC_6(VAR_4) + 2 <= VAR_3->framebits) ?
                     FUNC_1(VAR_4, VAR_1) : 0;

            for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
                CeltBlock *VAR_12 = &VAR_3->block[VAR_6];

                VAR_12->pf_period_new = FUNC_0(VAR_11, VAR_0);
                VAR_12->pf_gains_new[0] = VAR_8 * VAR_2[VAR_9][0];
                VAR_12->pf_gains_new[1] = VAR_8 * VAR_2[VAR_9][1];
                VAR_12->pf_gains_new[2] = VAR_8 * VAR_2[VAR_9][2];
            }
        }

        VAR_5 = FUNC_6(VAR_4);
    }

    return VAR_5;
}
