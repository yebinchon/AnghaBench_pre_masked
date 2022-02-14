
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int float_max_exp; int float_flags; int pb; } ;
typedef TYPE_1__ WavPackEncodeContext ;
typedef int PutBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static void FUNC_5(WavPackEncodeContext *VAR_4, int32_t *VAR_5)
{
    const int VAR_6 = VAR_4->float_max_exp;
    PutBitContext *VAR_7 = &VAR_4->pb;
    int32_t VAR_8, VAR_9;

    if (FUNC_0(*VAR_5) == 255) {
        if (FUNC_1(*VAR_5)) {
            FUNC_3(VAR_7, 1, 1);
            FUNC_3(VAR_7, 23, FUNC_1(*VAR_5));
        } else {
            FUNC_3(VAR_7, 1, 0);
        }

        VAR_8 = 0x1000000;
        VAR_9 = 0;
    } else if (FUNC_0(*VAR_5)) {
        VAR_9 = VAR_6 - FUNC_0(*VAR_5);
        VAR_8 = 0x800000 + FUNC_1(*VAR_5);
    } else {
        VAR_9 = VAR_6 ? VAR_6 - 1 : 0;
        VAR_8 = FUNC_1(*VAR_5);
    }

    if (VAR_9 < 25)
        VAR_8 >>= VAR_9;
    else
        VAR_8 = 0;

    if (!VAR_8) {
        if (VAR_4->float_flags & VAR_3) {
            if (FUNC_0(*VAR_5) || FUNC_1(*VAR_5)) {
                FUNC_3(VAR_7, 1, 1);
                FUNC_3(VAR_7, 23, FUNC_1(*VAR_5));

                if (VAR_6 >= 25)
                    FUNC_3(VAR_7, 8, FUNC_0(*VAR_5));

                FUNC_3(VAR_7, 1, FUNC_2(*VAR_5));
            } else {
                FUNC_3(VAR_7, 1, 0);

                if (VAR_4->float_flags & VAR_0)
                    FUNC_3(VAR_7, 1, FUNC_2(*VAR_5));
            }
        }
    } else if (VAR_9) {
        if (VAR_4->float_flags & VAR_2) {
            FUNC_4(VAR_7, VAR_9, FUNC_1(*VAR_5));
        } else if (VAR_4->float_flags & VAR_1) {
            FUNC_3(VAR_7, 1, FUNC_1(*VAR_5) & 1);
        }
    }
}
