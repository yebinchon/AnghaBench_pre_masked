
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_9__ {int SR; int exception; } ;
typedef TYPE_1__ Q68State ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int) ;

 int VAR_3 ;
 int FUNC_5 (int) ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (TYPE_1__*,int,int,int,int*) ;
 int FUNC_7 (TYPE_1__*,int,int,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_11(Q68State *VAR_9, uint32_t VAR_10)
{

    enum {OR = 0, AND, SUB, ADD, _BIT, EOR, CMP, _ILL} VAR_11;
    VAR_11 = VAR_10>>9 & 7;
    if (VAR_11 == _BIT) {
        return FUNC_8(VAR_9, VAR_10);
    } else if (VAR_11 == _ILL) {
        return FUNC_9(VAR_9, VAR_10);
    }


    VAR_2;
    if (VAR_8 == 3) {
        return FUNC_9(VAR_9, VAR_10);
    }
    const int VAR_12 = FUNC_5(VAR_8);
    const int VAR_13 = VAR_12*8 - 1;
    const uint32_t VAR_14 = ~(~1 << VAR_13);


    uint32_t VAR_15 = (uint16_t)FUNC_1(VAR_9);
    if (VAR_8 == 129) {
        VAR_15 &= 0xFF;
    } else if (VAR_8 == VAR_3) {
        VAR_15 = VAR_15<<16 | (uint16_t)FUNC_1(VAR_9);
    }


    int VAR_16;
    int VAR_17;
    uint32_t VAR_18;
    if ((VAR_11==OR || VAR_11==AND || VAR_11==EOR) && (VAR_10 & 0x3F) == 0x3C) {


        if (VAR_8 == 128 && !(VAR_9->SR & VAR_5)) {
            VAR_9->exception = VAR_1;
            return 0;
        }
        VAR_16 = 1;
        VAR_17 = 8;
        switch (VAR_8) {
          case 129: VAR_18 = VAR_9->SR & 0xFF; break;
          case 128: VAR_18 = VAR_9->SR; break;
          default: return FUNC_9(VAR_9, VAR_10);
        }
    } else {
        VAR_16 = 0;
        VAR_18 = FUNC_6(VAR_9, VAR_10, VAR_8, 1, &VAR_17);
        if (VAR_17 < 0) {
            return 0;
        }
    }


    uint32_t VAR_19;
    if (VAR_11 == ADD || VAR_11 == SUB) {
        FUNC_3();
    } else {
        FUNC_2();
    }
    switch (VAR_11) {
        case OR: VAR_19 = VAR_18 | VAR_15;
                  break;
        case AND: VAR_19 = VAR_18 & VAR_15;
                  break;
        case EOR: VAR_19 = VAR_18 ^ VAR_15;
                  break;
        case CMP: if (VAR_8 == VAR_3) {
                      if (FUNC_0(VAR_10) != VAR_0) {
                          VAR_17 -= 8;
                      } else {
                          VAR_17 -= 2;
                      }
                  } else {
                      if (FUNC_0(VAR_10) != VAR_0) {
                          VAR_17 -= 4;
                      }
                  }

        case SUB: { VAR_19 = (VAR_18 - VAR_15) & VAR_14;
                    if (((VAR_15 ^ VAR_18) & (VAR_19 ^ VAR_18)) >> VAR_13) {
                        VAR_9->SR |= VAR_6;
                    }
                    if ((int)((VAR_15 >> VAR_13) - (VAR_18 >> VAR_13)
                                             + (VAR_19 >> VAR_13)) > 0) {
                        VAR_9->SR |= VAR_4;
                        if (VAR_11 != CMP) {
                            VAR_9->SR |= VAR_7;
                        }
                    }
                    break;
                  }
        default:
                  VAR_19 = (VAR_18 + VAR_15) & VAR_14;
                  if (((VAR_18 ^ VAR_19) & (VAR_15 ^ VAR_19)) >> VAR_13) {
                      VAR_9->SR |= VAR_6;
                  }
                  if ((int)((VAR_18 >> VAR_13) + (VAR_15 >> VAR_13)
                                              - (VAR_19 >> VAR_13)) > 0) {
                      VAR_9->SR |= VAR_7 | VAR_4;
                  }
                  break;
    }
    FUNC_4(VAR_19);


    if (VAR_11 != CMP) {
        if (VAR_16) {
            if (VAR_8 == 128) {
                FUNC_10(VAR_9, VAR_19);
            } else {
                VAR_9->SR &= 0xFF00;
                VAR_9->SR |= VAR_19;
            }
        } else {
            FUNC_7(VAR_9, VAR_10, VAR_8, VAR_19);
        }
    }


    return (VAR_8==VAR_3 ? 16 : 8)
        + (FUNC_0(VAR_10) == VAR_0 ? 0 : 4) + VAR_17;
}
