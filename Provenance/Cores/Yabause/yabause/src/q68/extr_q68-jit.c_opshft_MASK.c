
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Q68State ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ,int) ;
 int FUNC_30 (int ,int) ;
 int FUNC_31 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_32 (int *,int,int,int,int*,int) ;
 int FUNC_33 (int *,int,int) ;
 int FUNC_34 (int *,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_35(Q68State *VAR_13, uint32_t VAR_14)
{
    const int VAR_15 = VAR_14 & 0x0100;
    VAR_4;
    VAR_1;
    VAR_3;
    int VAR_16;
    int VAR_17;
    int VAR_18;

    if (VAR_12 == 3) {

        VAR_16 = 1;
        if ((VAR_14 & 0x0800) || FUNC_0(VAR_14) <= VAR_0) {
            return FUNC_34(VAR_13, VAR_14);
        }
        VAR_12 = VAR_7;
        VAR_17 = VAR_14>>9 & 3;
        FUNC_8(VAR_9, 1);
        FUNC_32(VAR_13, VAR_14, VAR_12, 1, &VAR_18, 2);
        if (VAR_18 < 0) {
            return 1;
        }
    } else {

        VAR_16 = 0;
        VAR_17 = VAR_14>>3 & 3;
        if (VAR_14 & 0x0020) {
            VAR_2;
            FUNC_9(VAR_9, VAR_10*4);
        } else {
            FUNC_8(VAR_9, VAR_8);
        }
        FUNC_10(VAR_9, VAR_11*4);
        VAR_18 = 0;
    }

    switch (VAR_17) {
      case 0:
        if (VAR_15) {
            if (VAR_12 == VAR_5) {
                FUNC_2(VAR_9);
            } else if (VAR_12 == VAR_7) {
                FUNC_4(VAR_9);
            } else {
                FUNC_3(VAR_9);
            }
        } else {
            if (VAR_12 == VAR_5) {
                FUNC_5(VAR_9);
            } else if (VAR_12 == VAR_7) {
                FUNC_7(VAR_9);
            } else {
                FUNC_6(VAR_9);
            }
        }
        break;
      case 1:
        if (VAR_15) {
            if (VAR_12 == VAR_5) {
                FUNC_11(VAR_9);
            } else if (VAR_12 == VAR_7) {
                FUNC_13(VAR_9);
            } else {
                FUNC_12(VAR_9);
            }
        } else {
            if (VAR_12 == VAR_5) {
                FUNC_14(VAR_9);
            } else if (VAR_12 == VAR_7) {
                FUNC_16(VAR_9);
            } else {
                FUNC_15(VAR_9);
            }
        }
        break;
      case 2:
        if (VAR_15) {
            if (VAR_12 == VAR_5) {
                FUNC_23(VAR_9);
            } else if (VAR_12 == VAR_7) {
                FUNC_25(VAR_9);
            } else {
                FUNC_24(VAR_9);
            }
        } else {
            if (VAR_12 == VAR_5) {
                FUNC_26(VAR_9);
            } else if (VAR_12 == VAR_7) {
                FUNC_28(VAR_9);
            } else {
                FUNC_27(VAR_9);
            }
        }
        break;
      case 3:
        if (VAR_15) {
            if (VAR_12 == VAR_5) {
                FUNC_17(VAR_9);
            } else if (VAR_12 == VAR_7) {
                FUNC_19(VAR_9);
            } else {
                FUNC_18(VAR_9);
            }
        } else {
            if (VAR_12 == VAR_5) {
                FUNC_20(VAR_9);
            } else if (VAR_12 == VAR_7) {
                FUNC_22(VAR_9);
            } else {
                FUNC_21(VAR_9);
            }
        }
        break;
    }

    if (VAR_16) {
        FUNC_33(VAR_13, VAR_14, VAR_12);
    } else if (VAR_12 == VAR_5) {
        FUNC_29(VAR_9, VAR_11*4);
    } else if (VAR_12 == VAR_7) {
        FUNC_31(VAR_9, VAR_11*4);
    } else {
        FUNC_30(VAR_9, VAR_11*4);
    }


    FUNC_1(VAR_9, (VAR_12==VAR_6 ? 8 : 6) + VAR_18);
    return 0;
}
