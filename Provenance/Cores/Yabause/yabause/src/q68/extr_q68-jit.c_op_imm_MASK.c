
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Q68State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
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
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ) ;

 int VAR_4 ;

 int FUNC_34 (int *) ;
 int FUNC_35 (int *,int) ;
 int VAR_5 ;
 int FUNC_36 (int *,int,int,int,int*,int) ;
 int FUNC_37 (int *,int,int) ;
 int FUNC_38 (int *,int) ;
 int FUNC_39 (int *,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_40(Q68State *VAR_7, uint32_t VAR_8)
{

    enum {OR = 0, AND, SUB, ADD, _BIT, EOR, CMP, _ILL} VAR_9;
    VAR_9 = VAR_8>>9 & 7;
    if (VAR_9 == _BIT) {
        return FUNC_38(VAR_7, VAR_8);
    } else if (VAR_9 == _ILL) {
        return FUNC_39(VAR_7, VAR_8);
    }


    VAR_3;
    if (VAR_6 == 3) {
        return FUNC_39(VAR_7, VAR_8);
    }


    int VAR_10;
    FUNC_36(VAR_7, VAR_1<<3 | VAR_2, VAR_6, 0, &VAR_10, 1);


    int VAR_11;
    int VAR_12;
    if ((VAR_9==OR || VAR_9==AND || VAR_9==EOR) && (VAR_8 & 0x3F) == 0x3C) {


        VAR_11 = 1;
        VAR_12 = 8;
        switch (VAR_6) {
          case 129:
            FUNC_12(VAR_5);
            break;
          case 128:
            FUNC_8(VAR_5);
            FUNC_13(VAR_5);
            break;
          default:
            return FUNC_39(VAR_7, VAR_8);
        }
    } else {
        VAR_11 = 0;
        FUNC_36(VAR_7, VAR_8, VAR_6, 1, &VAR_12, 2);
        if (VAR_12 < 0) {
            return 1;
        }
    }


    const int VAR_13 = FUNC_35(VAR_7, VAR_8);


    switch (VAR_9) {
        case OR: if (VAR_6 == 129) {
                      FUNC_14(VAR_5);
                      if (VAR_13) FUNC_23(VAR_5);
                  } else if (VAR_6 == 128) {
                      FUNC_16(VAR_5);
                      if (VAR_13) FUNC_25(VAR_5);
                  } else {
                      FUNC_15(VAR_5);
                      if (VAR_13) FUNC_24(VAR_5);
                  }
                  break;
        case AND: if (VAR_6 == 129) {
                      FUNC_5(VAR_5);
                      if (VAR_13) FUNC_23(VAR_5);
                  } else if (VAR_6 == 128) {
                      FUNC_7(VAR_5);
                      if (VAR_13) FUNC_25(VAR_5);
                  } else {
                      FUNC_6(VAR_5);
                      if (VAR_13) FUNC_24(VAR_5);
                  }
                  break;
        case EOR: if (VAR_6 == 129) {
                      FUNC_9(VAR_5);
                      if (VAR_13) FUNC_23(VAR_5);
                  } else if (VAR_6 == 128) {
                      FUNC_11(VAR_5);
                      if (VAR_13) FUNC_25(VAR_5);
                  } else {
                      FUNC_10(VAR_5);
                      if (VAR_13) FUNC_24(VAR_5);
                  }
                  break;
        case CMP: if (VAR_6 == VAR_4) {
                      if (FUNC_0(VAR_8) != VAR_0) {
                          VAR_12 -= 8;
                      } else {
                          VAR_12 -= 2;
                      }
                  } else {
                      if (FUNC_0(VAR_8) != VAR_0) {
                          VAR_12 -= 4;
                      }
                  }
                  if (VAR_6 == 129) {
                      FUNC_31(VAR_5);
                      if (VAR_13) FUNC_20(VAR_5);
                  } else if (VAR_6 == 128) {
                      FUNC_33(VAR_5);
                      if (VAR_13) FUNC_22(VAR_5);
                  } else {
                      FUNC_32(VAR_5);
                      if (VAR_13) FUNC_21(VAR_5);
                  }
                  break;
        case SUB: if (VAR_6 == 129) {
                      FUNC_31(VAR_5);
                      if (VAR_13) FUNC_26(VAR_5);
                  } else if (VAR_6 == 128) {
                      FUNC_33(VAR_5);
                      if (VAR_13) FUNC_28(VAR_5);
                  } else {
                      FUNC_32(VAR_5);
                      if (VAR_13) FUNC_27(VAR_5);
                  }
                  break;
        default:
                  if (VAR_6 == 129) {
                      FUNC_1(VAR_5);
                      if (VAR_13) FUNC_17(VAR_5);
                  } else if (VAR_6 == 128) {
                      FUNC_4(VAR_5);
                      if (VAR_13) FUNC_19(VAR_5);
                  } else {
                      FUNC_3(VAR_5);
                      if (VAR_13) FUNC_18(VAR_5);
                  }
                  break;
    }



    VAR_12 += (VAR_6==VAR_4 ? 16 : 8);
    VAR_12 += (FUNC_0(VAR_8) == VAR_0 ? 0 : 4);
    FUNC_2(VAR_5, VAR_12);
    FUNC_34(VAR_7);


    if (VAR_9 != CMP) {
        if (VAR_11) {
            if (VAR_6 == 129) {
                FUNC_29(VAR_5);
            } else {
                FUNC_30(VAR_5);
            }
        } else {
            FUNC_37(VAR_7, VAR_8, VAR_6);
        }
    }


    return 0;
}
