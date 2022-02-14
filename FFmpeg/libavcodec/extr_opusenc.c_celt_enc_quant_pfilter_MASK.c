
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {float* pf_gains_new; int pf_period_new; } ;
struct TYPE_4__ {float pf_gain; int pf_octave; int pf_period; int pf_tapset; scalar_t__ framebits; TYPE_2__* block; int pfilter; } ;
typedef int OpusRangeCoder ;
typedef TYPE_1__ CeltFrame ;
typedef TYPE_2__ CeltBlock ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ,int) ;
 int VAR_1 ;
 float** VAR_2 ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int,int) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(OpusRangeCoder *VAR_3, CeltFrame *VAR_4)
{
    float VAR_5 = VAR_4->pf_gain;
    int VAR_6, VAR_7 = VAR_4->pf_octave, VAR_8 = VAR_4->pf_period, VAR_9 = VAR_4->pf_tapset;

    FUNC_4(VAR_3, VAR_4->pfilter, 1);
    if (!VAR_4->pfilter)
        return;


    VAR_6 = FUNC_1(VAR_7, 6);
    FUNC_5(VAR_3, VAR_6, 6);
    VAR_7 = VAR_6;

    VAR_6 = FUNC_2(VAR_8 - (16 << VAR_7) + 1, 0, (1 << (4 + VAR_7)) - 1);
    FUNC_6(VAR_3, VAR_8, 4 + VAR_7);
    VAR_8 = VAR_6 + (16 << VAR_7) - 1;

    VAR_6 = FUNC_1(((int)(VAR_5 / 0.09375f)) - 1, 7);
    FUNC_6(VAR_3, VAR_6, 3);
    VAR_5 = 0.09375f * (VAR_6 + 1);

    if ((FUNC_7(VAR_3) + 2) <= VAR_4->framebits)
        FUNC_3(VAR_3, VAR_9, VAR_1);
    else
        VAR_9 = 0;

    for (int VAR_10 = 0; VAR_10 < 2; VAR_10++) {
        CeltBlock *VAR_11 = &VAR_4->block[VAR_10];

        VAR_11->pf_period_new = FUNC_0(VAR_8, VAR_0);
        VAR_11->pf_gains_new[0] = VAR_5 * VAR_2[VAR_9][0];
        VAR_11->pf_gains_new[1] = VAR_5 * VAR_2[VAR_9][1];
        VAR_11->pf_gains_new[2] = VAR_5 * VAR_2[VAR_9][2];
    }
}
