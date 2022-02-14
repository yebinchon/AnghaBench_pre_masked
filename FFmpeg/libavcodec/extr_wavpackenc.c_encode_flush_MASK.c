
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zeros_acc; int holding_one; int pend_count; int pend_data; scalar_t__ holding_zero; } ;
typedef TYPE_1__ WavPackWords ;
struct TYPE_5__ {int pb; TYPE_1__ w; } ;
typedef TYPE_2__ WavPackEncodeContext ;
typedef int PutBitContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void FUNC_2(WavPackEncodeContext *VAR_0)
{
    WavPackWords *VAR_1 = &VAR_0->w;
    PutBitContext *VAR_2 = &VAR_0->pb;

    if (VAR_1->zeros_acc) {
        int VAR_3 = FUNC_0(VAR_1->zeros_acc);

        do {
            if (VAR_3 > 31) {
                FUNC_1(VAR_2, 31, 0x7FFFFFFF);
                VAR_3 -= 31;
            } else {
                FUNC_1(VAR_2, VAR_3, (1 << VAR_3) - 1);
                VAR_3 = 0;
            }
        } while (VAR_3);

        FUNC_1(VAR_2, 1, 0);

        while (VAR_1->zeros_acc > 1) {
            FUNC_1(VAR_2, 1, VAR_1->zeros_acc & 1);
            VAR_1->zeros_acc >>= 1;
        }

        VAR_1->zeros_acc = 0;
    }

    if (VAR_1->holding_one) {
        if (VAR_1->holding_one >= 16) {
            int VAR_4;

            FUNC_1(VAR_2, 16, (1 << 16) - 1);
            FUNC_1(VAR_2, 1, 0);
            VAR_1->holding_one -= 16;
            VAR_4 = FUNC_0(VAR_1->holding_one);

            do {
                if (VAR_4 > 31) {
                    FUNC_1(VAR_2, 31, 0x7FFFFFFF);
                    VAR_4 -= 31;
                } else {
                    FUNC_1(VAR_2, VAR_4, (1 << VAR_4) - 1);
                    VAR_4 = 0;
                }
            } while (VAR_4);

            FUNC_1(VAR_2, 1, 0);

            while (VAR_1->holding_one > 1) {
                FUNC_1(VAR_2, 1, VAR_1->holding_one & 1);
                VAR_1->holding_one >>= 1;
            }

            VAR_1->holding_zero = 0;
        } else {
            FUNC_1(VAR_2, VAR_1->holding_one, (1 << VAR_1->holding_one) - 1);
        }

        VAR_1->holding_one = 0;
    }

    if (VAR_1->holding_zero) {
        FUNC_1(VAR_2, 1, 0);
        VAR_1->holding_zero = 0;
    }

    if (VAR_1->pend_count) {
        FUNC_1(VAR_2, VAR_1->pend_count, VAR_1->pend_data);
        VAR_1->pend_data = VAR_1->pend_count = 0;
    }
}
