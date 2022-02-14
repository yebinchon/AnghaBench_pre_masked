
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Q68State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int) ;
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
 int FUNC_29 (int ) ;
 int FUNC_30 (int ,int) ;
 int FUNC_31 (int ,int) ;
 int FUNC_32 (int ,int) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_37 (int *,int) ;
 int VAR_8 ;
 int FUNC_38 (int *,int,int,int,int*,int) ;
 int FUNC_39 (int *,int,int) ;
 int FUNC_40 (int *,int) ;
 int FUNC_41 (int *,int) ;
 int FUNC_42 (int *,int) ;
 int FUNC_43 (int *,int) ;
 int FUNC_44 (int *,int) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_45(Q68State *VAR_11, uint32_t VAR_12)
{
    VAR_3;
    VAR_4;


    if (VAR_10 != 3) {
        if ((VAR_12 & 0xB130) == 0x9100) {

            return FUNC_40(VAR_11, VAR_12);
        }
        if ((VAR_12 & 0xB1F0) == 0x8100) {

            return FUNC_42(VAR_11, VAR_12);
        }
        if ((VAR_12 & 0xF130) == 0xC100) {

            return FUNC_43(VAR_11, VAR_12);
        }
        if ((VAR_12 & 0xF130) == 0x8100) {

            return FUNC_44(VAR_11, VAR_12);
        }
        if ((VAR_12 & 0xF138) == 0xB108 && (VAR_12>>6 & 3) != 3) {

            return FUNC_41(VAR_11, VAR_12);
        }
    }

    int VAR_13 = VAR_12 & 0x100;
    int VAR_14 = 0;
    enum {OR, AND, EOR, CMP, SUB, ADD} VAR_15;


    switch (VAR_12>>12) {
        case 0x8: VAR_15 = OR; break;
        case 0x9: VAR_15 = SUB; break;
        case 0xB: VAR_15 = (((VAR_12>>6)+1) & 7) <= 4 ? CMP : EOR; break;
        case 0xC: VAR_15 = AND; break;
        default: VAR_15 = ADD; break;
    }


    if ((VAR_15 == ADD || VAR_15 == SUB || VAR_15 == CMP) && VAR_10 == 3) {
        VAR_10 = VAR_13 ? VAR_6 : VAR_7;
        VAR_13 = 0;
        VAR_14 = 1;
    }



    int VAR_16;
    if (VAR_13) {
        FUNC_13(VAR_8, VAR_9*4);
        FUNC_38(VAR_11, VAR_12, VAR_10, VAR_13, &VAR_16, 2);
    } else {
        FUNC_38(VAR_11, VAR_12, VAR_10, VAR_13, &VAR_16, 1);
        if (VAR_14) {
            FUNC_14(VAR_8, (8+VAR_9)*4);
        } else {
            FUNC_14(VAR_8, VAR_9*4);
        }
    }
    if (VAR_16 < 0) {
        return 1;
    }
    if (VAR_10 == VAR_6 || VAR_14) {
        VAR_16 += 4;
    }
    if (VAR_13) {
        VAR_16 += 4;
    } else if ((VAR_15 == CMP && VAR_14)
               || (VAR_10 == VAR_6
                   && (FUNC_0(VAR_12) <= VAR_0
                       || (FUNC_0(VAR_12) == VAR_1
                           && FUNC_1(VAR_12) == VAR_2)))) {
        VAR_16 -= 2;
    }


    const int VAR_17 = FUNC_37(VAR_11, VAR_12);
    switch (VAR_15) {
        case OR: if (VAR_10 == VAR_5) {
                      FUNC_15(VAR_8);
                      if (VAR_17) FUNC_24(VAR_8);
                  } else if (VAR_10 == VAR_7) {
                      FUNC_17(VAR_8);
                      if (VAR_17) FUNC_26(VAR_8);
                  } else {
                      FUNC_16(VAR_8);
                      if (VAR_17) FUNC_25(VAR_8);
                  }
                  break;
        case AND: if (VAR_10 == VAR_5) {
                      FUNC_7(VAR_8);
                      if (VAR_17) FUNC_24(VAR_8);
                  } else if (VAR_10 == VAR_7) {
                      FUNC_9(VAR_8);
                      if (VAR_17) FUNC_26(VAR_8);
                  } else {
                      FUNC_8(VAR_8);
                      if (VAR_17) FUNC_25(VAR_8);
                  }
                  break;
        case EOR: if (VAR_10 == VAR_5) {
                      FUNC_10(VAR_8);
                      if (VAR_17) FUNC_24(VAR_8);
                  } else if (VAR_10 == VAR_7) {
                      FUNC_12(VAR_8);
                      if (VAR_17) FUNC_26(VAR_8);
                  } else {
                      FUNC_11(VAR_8);
                      if (VAR_17) FUNC_25(VAR_8);
                  }
                  break;
        case CMP: if (VAR_14 && VAR_10 == VAR_7) {
                      FUNC_33(VAR_8);
                      if (VAR_17) FUNC_23(VAR_8);
                  } else if (VAR_10 == VAR_5) {
                      FUNC_34(VAR_8);
                      if (VAR_17) FUNC_21(VAR_8);
                  } else if (VAR_10 == VAR_7) {
                      FUNC_36(VAR_8);
                      if (VAR_17) FUNC_23(VAR_8);
                  } else {
                      FUNC_35(VAR_8);
                      if (VAR_17) FUNC_22(VAR_8);
                  }
                  break;
        case SUB: if (VAR_14 && VAR_10 == VAR_7) {
                      FUNC_33(VAR_8);
                  } else if (VAR_14 && VAR_10 == VAR_6) {
                      FUNC_35(VAR_8);
                  } else if (VAR_10 == VAR_5) {
                      FUNC_34(VAR_8);
                      if (VAR_17) FUNC_27(VAR_8);
                  } else if (VAR_10 == VAR_7) {
                      FUNC_36(VAR_8);
                      if (VAR_17) FUNC_29(VAR_8);
                  } else {
                      FUNC_35(VAR_8);
                      if (VAR_17) FUNC_28(VAR_8);
                  }
                  break;
        default:
                  if (VAR_14 && VAR_10 == VAR_7) {
                      FUNC_2(VAR_8);
                  } else if (VAR_14 && VAR_10 == VAR_6) {
                      FUNC_5(VAR_8);
                  } else if (VAR_10 == VAR_5) {
                      FUNC_3(VAR_8);
                      if (VAR_17) FUNC_18(VAR_8);
                  } else if (VAR_10 == VAR_7) {
                      FUNC_6(VAR_8);
                      if (VAR_17) FUNC_20(VAR_8);
                  } else {
                      FUNC_5(VAR_8);
                      if (VAR_17) FUNC_19(VAR_8);
                  }
                  break;
    }


    if (VAR_15 != CMP) {
        if (VAR_13) {
            FUNC_39(VAR_11, VAR_12, VAR_10);
        } else if (VAR_14) {
            FUNC_31(VAR_8, (8+VAR_9)*4);
        } else if (VAR_10 == VAR_5) {
            FUNC_30(VAR_8, VAR_9*4);
        } else if (VAR_10 == VAR_7) {
            FUNC_32(VAR_8, VAR_9*4);
        } else {
            FUNC_31(VAR_8, VAR_9*4);
        }
    }

    FUNC_4(VAR_8, 4 + VAR_16);
    return 0;
}
