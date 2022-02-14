
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bits; int table; } ;
struct TYPE_4__ {int num_points; int* lev_code; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AtracGainInfo ;
typedef int Atrac3pChanUnitCtx ;


 TYPE_3__* VAR_0 ;
 void* FUNC_0 (int *,int ,int ,int) ;

__attribute__((used)) static inline void FUNC_1(GetBitContext *VAR_1,
                                      Atrac3pChanUnitCtx *VAR_2,
                                      AtracGainInfo *VAR_3)
{
    int VAR_4, VAR_5;

    if (VAR_3->num_points > 0)
        VAR_3->lev_code[0] = FUNC_0(VAR_1, VAR_0[2].table,
                                    VAR_0[2].bits, 1);

    for (VAR_4 = 1; VAR_4 < VAR_3->num_points; VAR_4++) {
        VAR_5 = FUNC_0(VAR_1, VAR_0[3].table,
                         VAR_0[3].bits, 1);
        VAR_3->lev_code[VAR_4] = (VAR_3->lev_code[VAR_4 - 1] + VAR_5) & 0xF;
    }
}
