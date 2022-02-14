
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {float** bands; } ;
struct TYPE_5__ {float* last_qmf_delay; int snd_qmf_delay; int fst_qmf_delay; } ;
typedef TYPE_1__ AT1SUCtx ;
typedef TYPE_2__ AT1Ctx ;


 int FUNC_0 (float*,float*,int,float*,int ,float*) ;
 int FUNC_1 (float*,float*,int) ;

__attribute__((used)) static void FUNC_2(AT1Ctx *VAR_0, AT1SUCtx* VAR_1, float *VAR_2)
{
    float VAR_3[256];
    float VAR_4[512 + 46];


    FUNC_0(VAR_0->bands[0], VAR_0->bands[1], 128, VAR_3, VAR_1->fst_qmf_delay, VAR_4);


    FUNC_1( VAR_1->last_qmf_delay, &VAR_1->last_qmf_delay[256], sizeof(float) * 39);
    FUNC_1(&VAR_1->last_qmf_delay[39], VAR_0->bands[2], sizeof(float) * 256);


    FUNC_0(VAR_3, VAR_1->last_qmf_delay, 256, VAR_2, VAR_1->snd_qmf_delay, VAR_4);
}
