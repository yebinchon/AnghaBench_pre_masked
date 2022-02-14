
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int aa; int winlen; int tabsize; int* fact; int iza; void* fsamples; void* irest; void* ires; void* irdft; void* rdft; } ;
typedef TYPE_1__ SuperEqualizerContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int,int) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(SuperEqualizerContext *VAR_4, int VAR_5)
{
    int VAR_6,VAR_7;

    VAR_4->rdft = FUNC_3(VAR_5, VAR_0);
    VAR_4->irdft = FUNC_3(VAR_5, VAR_2);
    if (!VAR_4->rdft || !VAR_4->irdft)
        return FUNC_0(VAR_1);

    VAR_4->aa = 96;
    VAR_4->winlen = (1 << (VAR_5-1))-1;
    VAR_4->tabsize = 1 << VAR_5;

    VAR_4->ires = FUNC_2(VAR_4->tabsize, sizeof(float));
    VAR_4->irest = FUNC_2(VAR_4->tabsize, sizeof(float));
    VAR_4->fsamples = FUNC_2(VAR_4->tabsize, sizeof(float));

    for (VAR_6 = 0; VAR_6 <= VAR_3; VAR_6++) {
        VAR_4->fact[VAR_6] = 1;
        for (VAR_7 = 1; VAR_7 <= VAR_6; VAR_7++)
            VAR_4->fact[VAR_6] *= VAR_7;
    }

    VAR_4->iza = FUNC_4(VAR_4, FUNC_1(VAR_4->aa));

    return 0;
}
