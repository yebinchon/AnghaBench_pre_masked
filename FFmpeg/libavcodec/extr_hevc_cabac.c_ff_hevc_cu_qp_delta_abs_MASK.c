
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* HEVClc; int avctx; } ;
struct TYPE_4__ {int cc; } ;
typedef TYPE_2__ HEVCContext ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,char*,int) ;
 scalar_t__* VAR_3 ;
 int FUNC_2 (int *) ;

int FUNC_3(HEVCContext *VAR_4)
{
    int VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7 = 0;

    while (VAR_5 < 5 && FUNC_0(VAR_3[VAR_2] + VAR_7)) {
        VAR_5++;
        VAR_7 = 1;
    }
    if (VAR_5 >= 5) {
        int VAR_8 = 0;
        while (VAR_8 < 7 && FUNC_2(&VAR_4->HEVClc->cc)) {
            VAR_6 += 1 << VAR_8;
            VAR_8++;
        }
        if (VAR_8 == 7) {
            FUNC_1(VAR_4->avctx, VAR_1, "CABAC_MAX_BIN : %d\n", VAR_8);
            return VAR_0;
        }

        while (VAR_8--)
            VAR_6 += FUNC_2(&VAR_4->HEVClc->cc) << VAR_8;
    }
    return VAR_5 + VAR_6;
}
