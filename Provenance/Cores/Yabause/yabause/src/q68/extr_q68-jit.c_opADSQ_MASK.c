
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Q68State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_15 (int *,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (int *,int,int,int,int*,int) ;
 int FUNC_17 (int *,int,int) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_18(Q68State *VAR_10, uint32_t VAR_11)
{
    const int VAR_12 = VAR_11 & 0x0100;
    VAR_2;
    VAR_3;
    if (FUNC_0(VAR_11) == VAR_0 && VAR_9 == 1) {
        VAR_9 = 2;
    }

    FUNC_5(VAR_8, VAR_7);

    int VAR_13;
    FUNC_16(VAR_10, VAR_11, VAR_9, 1, &VAR_13, 2);
    if (VAR_13 < 0) {
        return 1;
    }

    const int VAR_14 = FUNC_15(VAR_10, VAR_11);
    if (VAR_12) {
        if (FUNC_0(VAR_11) == VAR_0) {
            FUNC_13(VAR_8);
        } else {
            if (VAR_9 == VAR_4) {
                FUNC_12(VAR_8);
                if (VAR_14) FUNC_9(VAR_8);
            } else if (VAR_9 == VAR_6) {
                FUNC_14(VAR_8);
                if (VAR_14) FUNC_11(VAR_8);
            } else {
                FUNC_13(VAR_8);
                if (VAR_14) FUNC_10(VAR_8);
            }
        }
    } else {
        if (FUNC_0(VAR_11) == VAR_0) {
            FUNC_3(VAR_8);
        } else {
            if (VAR_9 == VAR_4) {
                FUNC_1(VAR_8);
                if (VAR_14) FUNC_6(VAR_8);
            } else if (VAR_9 == VAR_6) {
                FUNC_4(VAR_8);
                if (VAR_14) FUNC_8(VAR_8);
            } else {
                FUNC_3(VAR_8);
                if (VAR_14) FUNC_7(VAR_8);
            }
        }
    }

    FUNC_17(VAR_10, VAR_11, VAR_9);

    VAR_13 += (VAR_9==VAR_5 || FUNC_0(VAR_11) == VAR_0 ? 8 : 4);
    VAR_13 += (FUNC_0(VAR_11) >= VAR_1 ? 4 : 0);
    FUNC_2(VAR_8, VAR_13);
    return 0;
}
