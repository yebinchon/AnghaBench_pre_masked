
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
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
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
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_27 (int *,int) ;
 int VAR_6 ;
 int FUNC_28 (int *,int,scalar_t__,int,int*,int) ;
 int FUNC_29 (int *,int,scalar_t__) ;
 int FUNC_30 (int *,int) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_31(Q68State *VAR_8, uint32_t VAR_9)
{
    VAR_2;
    enum {NEGX = 0, CLR = 1, NEG = 2, NOT = 3, TST = 5} VAR_10;
    VAR_10 = VAR_9>>9 & 7;

    if (FUNC_0(VAR_9) == VAR_0) {
        return FUNC_30(VAR_8, VAR_9);
    }


    int VAR_11;
    FUNC_28(VAR_8, VAR_9, VAR_7, 1, &VAR_11, 1);
    if (VAR_11 < 0) {
        return 1;
    }
    if (VAR_10 != TST) {
        if (FUNC_0(VAR_9) == VAR_1) {
            if (VAR_7 == VAR_4) {
                VAR_11 += 2;
            }
        } else {
            VAR_11 += (VAR_7 == VAR_4) ? 8 : 4;
        }
    }
    FUNC_8(VAR_6, VAR_10==NOT ? ~(uint32_t)0 : 0);
    const int VAR_12 = FUNC_27(VAR_8, VAR_9);
    switch (VAR_10) {
        case NEGX:if (VAR_7 == VAR_3) {
                      FUNC_21(VAR_6);
                      if (VAR_12) FUNC_15(VAR_6);
                  } else if (VAR_7 == VAR_5) {
                      FUNC_23(VAR_6);
                      if (VAR_12) FUNC_17(VAR_6);
                  } else {
                      FUNC_22(VAR_6);
                      if (VAR_12) FUNC_16(VAR_6);
                  }
                  break;
        case NEG: if (VAR_7 == VAR_3) {
                      FUNC_24(VAR_6);
                      if (VAR_12) FUNC_18(VAR_6);
                  } else if (VAR_7 == VAR_5) {
                      FUNC_26(VAR_6);
                      if (VAR_12) FUNC_20(VAR_6);
                  } else {
                      FUNC_25(VAR_6);
                      if (VAR_12) FUNC_19(VAR_6);
                  }
                  break;
        case CLR: if (VAR_7 == VAR_3) {
                      FUNC_2(VAR_6);
                      if (VAR_12) FUNC_12(VAR_6);
                  } else if (VAR_7 == VAR_5) {
                      FUNC_4(VAR_6);
                      if (VAR_12) FUNC_14(VAR_6);
                  } else {
                      FUNC_3(VAR_6);
                      if (VAR_12) FUNC_13(VAR_6);
                  }
                  break;
        case NOT: if (VAR_7 == VAR_3) {
                      FUNC_5(VAR_6);
                      if (VAR_12) FUNC_12(VAR_6);
                  } else if (VAR_7 == VAR_5) {
                      FUNC_7(VAR_6);
                      if (VAR_12) FUNC_14(VAR_6);
                  } else {
                      FUNC_6(VAR_6);
                      if (VAR_12) FUNC_13(VAR_6);
                  }
                  break;
        default:
                  if (VAR_7 == VAR_3) {
                      FUNC_9(VAR_6);
                      if (VAR_12) FUNC_12(VAR_6);
                  } else if (VAR_7 == VAR_5) {
                      FUNC_11(VAR_6);
                      if (VAR_12) FUNC_14(VAR_6);
                  } else {
                      FUNC_10(VAR_6);
                      if (VAR_12) FUNC_13(VAR_6);
                  }
                  break;
    }


    if (VAR_10 != TST) {
        FUNC_29(VAR_8, VAR_9, VAR_7);
    }

    FUNC_1(VAR_6, 4 + VAR_11);
    return 0;
}
