
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bits; int table; } ;
typedef TYPE_1__ VLC ;
struct TYPE_6__ {int num_points; scalar_t__* lev_code; scalar_t__* loc_code; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AtracGainInfo ;
typedef int Atrac3pChanUnitCtx ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int) ;

__attribute__((used)) static inline void FUNC_2(GetBitContext *VAR_1, Atrac3pChanUnitCtx *VAR_2,
                                   AtracGainInfo *VAR_3)
{
    int VAR_4;
    VLC *VAR_5;

    if (VAR_3->num_points > 0) {

        VAR_3->loc_code[0] = FUNC_0(VAR_1, 5);

        for (VAR_4 = 1; VAR_4 < VAR_3->num_points; VAR_4++) {


            VAR_5 = (VAR_3->lev_code[VAR_4] <= VAR_3->lev_code[VAR_4 - 1])
                               ? &VAR_0[7]
                               : &VAR_0[9];
            VAR_3->loc_code[VAR_4] = VAR_3->loc_code[VAR_4 - 1] +
                               FUNC_1(VAR_1, VAR_5->table, VAR_5->bits, 1);
        }
    }
}
