
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int SR; } ;
typedef TYPE_1__ Q68State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_1__*,int,scalar_t__,int,int*) ;
 int FUNC_5 (TYPE_1__*,int,scalar_t__,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_7(Q68State *VAR_11, uint32_t VAR_12)
{
    VAR_2;
    const int VAR_13 = FUNC_3(VAR_10);
    const int VAR_14 = VAR_13*8 - 1;
    const uint32_t VAR_15 = ~(~1 << VAR_14);
    enum {NEGX = 0, CLR = 1, NEG = 2, NOT = 3, TST = 5} VAR_16;
    VAR_16 = VAR_12>>9 & 7;

    if (FUNC_0(VAR_12) == VAR_0) {
        return FUNC_6(VAR_11, VAR_12);
    }


    int VAR_17;
    uint32_t VAR_18 = FUNC_4(VAR_11, VAR_12, VAR_10, 1, &VAR_17);
    if (VAR_17 < 0) {
        return 0;
    }
    if (VAR_16 != TST) {
        if (FUNC_0(VAR_12) == VAR_1) {
            if (VAR_10 == VAR_3) {
                VAR_17 += 2;
            }
        } else {
            VAR_17 += (VAR_10 == VAR_3) ? 8 : 4;
        }
    }


    uint32_t VAR_19;
    if (VAR_16 == NEGX) {
        VAR_11->SR &= ~(VAR_5 | VAR_6 | VAR_4);
    } else {
        FUNC_1();
    }
    switch (VAR_16) {
        case NEGX: { int VAR_20 = (VAR_11->SR >> VAR_8) & 1;
                     VAR_19 = (0 - VAR_18 - VAR_20) & VAR_15;
                     if (VAR_19 != 0) {
                         VAR_11->SR &= ~VAR_9;
                     }
                     goto NEG_common;
                   }
        case NEG: VAR_19 = (0 - VAR_18) & VAR_15;
                   if (VAR_19 == 0) {
                       VAR_11->SR |= VAR_9;
                   } else {
                       VAR_11->SR &= ~VAR_9;
                   }
                 NEG_common:
                   if (VAR_19 >> VAR_14) {
                       VAR_11->SR |= VAR_5;
                   }
                   if ((VAR_18 & VAR_19) >> VAR_14) {
                       VAR_11->SR |= VAR_6;
                   }
                   if ((VAR_18 | VAR_19) != 0) {
                       VAR_11->SR |= VAR_7 | VAR_4;
                   } else {
                       VAR_11->SR &= ~VAR_7;
                   }
                   break;
        case CLR: VAR_19 = 0;
                   VAR_11->SR |= VAR_9;
                   break;
        case NOT: VAR_19 = ~VAR_18 & VAR_15;
                   FUNC_2(VAR_19);
                   break;
        default:
                   VAR_19 = VAR_18;
                   FUNC_2(VAR_18);
                   break;
    }


    if (VAR_16 != TST) {
        FUNC_5(VAR_11, VAR_12, VAR_10, VAR_19);
    }

    return 4 + VAR_17;
}
