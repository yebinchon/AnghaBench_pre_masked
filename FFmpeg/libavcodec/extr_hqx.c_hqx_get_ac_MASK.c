
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lut_bits; int extra_bits; TYPE_1__* lut; } ;
struct TYPE_4__ {int bits; int lev; int run; } ;
typedef TYPE_2__ HQXAC ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static inline void FUNC_2(GetBitContext *VAR_0, const HQXAC *VAR_1,
                              int *VAR_2, int *VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_0(VAR_0, VAR_1->lut_bits);
    if (VAR_1->lut[VAR_4].bits == -1) {
        GetBitContext VAR_5 = *VAR_0;
        FUNC_1(&VAR_5, VAR_1->lut_bits);
        VAR_4 = VAR_1->lut[VAR_4].lev + FUNC_0(&VAR_5, VAR_1->extra_bits);
    }
    *VAR_2 = VAR_1->lut[VAR_4].run;
    *VAR_3 = VAR_1->lut[VAR_4].lev;
    FUNC_1(VAR_0, VAR_1->lut[VAR_4].bits);
}
