
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* loc_code; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AtracGainInfo ;
typedef int Atrac3pChanUnitCtx ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int *,int) ;

__attribute__((used)) static inline void FUNC_2(GetBitContext *VAR_0, Atrac3pChanUnitCtx *VAR_1,
                                   AtracGainInfo *VAR_2, int VAR_3)
{
    int VAR_4;

    if (!VAR_3 || VAR_2->loc_code[VAR_3 - 1] < 15)
        VAR_2->loc_code[VAR_3] = FUNC_1(VAR_0, 5);
    else if (VAR_2->loc_code[VAR_3 - 1] >= 30)
        VAR_2->loc_code[VAR_3] = 31;
    else {
        VAR_4 = FUNC_0(30 - VAR_2->loc_code[VAR_3 - 1]) + 1;
        VAR_2->loc_code[VAR_3] = VAR_2->loc_code[VAR_3 - 1] +
                             FUNC_1(VAR_0, VAR_4) + 1;
    }
}
