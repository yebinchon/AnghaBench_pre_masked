
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_6__ {int* D; int SR; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;

 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_1__*,int,int,int,int*) ;
 int FUNC_4 (TYPE_1__*,int,int,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_6(Q68State *VAR_16, uint32_t VAR_17)
{
    const int VAR_18 = VAR_17 & 0x0100;
    VAR_5;
    VAR_2;
    VAR_4;
    int VAR_19;
    int VAR_20;
    uint32_t VAR_21;
    int VAR_22;

    if (VAR_15 == 3) {

        VAR_19 = 1;
        if ((VAR_17 & 0x0800) || FUNC_0(VAR_17) <= VAR_1) {
            return FUNC_5(VAR_16, VAR_17);
        }
        VAR_15 = 128;
        VAR_20 = VAR_17>>9 & 3;
        VAR_12 = 1;
        VAR_21 = FUNC_3(VAR_16, VAR_17, VAR_15, 1, &VAR_22);
        if (VAR_22 < 0) {
            return 0;
        }
    } else {

        VAR_19 = 0;
        VAR_20 = VAR_17>>3 & 3;
        if (VAR_17 & 0x0020) {
            VAR_3;
            VAR_12 = VAR_16->D[VAR_13] & 63;
        }
        VAR_21 = VAR_15==129 ? (uint8_t) VAR_16->D[VAR_14] :
               VAR_15==128 ? (uint16_t)VAR_16->D[VAR_14] : VAR_16->D[VAR_14];
        VAR_22 = 0;
    }
    VAR_22 += VAR_12*2;

    FUNC_1();
    if (VAR_12 > 0) {
        const int VAR_23 = (VAR_15==129 ? 8 : VAR_15==128 ? 16 : 32);
        switch (VAR_20) {
          case 0:
            VAR_16->SR &= ~VAR_9;
            if (VAR_18) {
                int VAR_24 = 0, VAR_25;

                for (; VAR_12 > 0; VAR_12--) {
                    VAR_25 = (VAR_21 >> (VAR_23-1)) & 1;
                    VAR_21 <<= 1;
                    VAR_24 |= (VAR_25 ^ (VAR_21 >> (VAR_23-1))) & 1;
                }
                if (VAR_24) {
                    VAR_16->SR |= VAR_8;
                }
                if (VAR_25) {
                    VAR_16->SR |= VAR_9 | VAR_7;
                }
            } else {
                if (VAR_15 == 129) {
                    VAR_21 = (int8_t)VAR_21;
                } else if (VAR_15 == 128) {
                    VAR_21 = (int16_t)VAR_21;
                }
                if (VAR_12 > VAR_23) {
                    VAR_12 = 32;
                }
                VAR_21 = (int32_t)VAR_21 >> (VAR_12-1);
                if (VAR_21 & 1) {
                    VAR_16->SR |= VAR_9 | VAR_7;
                }
                VAR_21 = (int32_t)VAR_21 >> 1;
            }
            break;
          case 1:
            VAR_16->SR &= ~VAR_9;
            if (VAR_12 > VAR_23) {
                VAR_21 = 0;
            } else if (VAR_18) {
                VAR_21 <<= VAR_12-1;
                if ((VAR_21 >> (VAR_23-1)) & 1) {
                    VAR_16->SR |= VAR_9 | VAR_7;
                }
                VAR_21 <<= 1;
            } else {
                VAR_21 = (int32_t)VAR_21 >> (VAR_12-1);
                if (VAR_21 & 1) {
                    VAR_16->SR |= VAR_9 | VAR_7;
                }
                VAR_21 = (int32_t)VAR_21 >> 1;
            }
            break;
          case 2: {
            uint32_t VAR_26 = (VAR_16->SR >> VAR_10) & 1;
            VAR_16->SR &= ~VAR_9;
            if (VAR_18) {
                for (; VAR_12 > 0; VAR_12--) {
                    const int VAR_27 = (VAR_21 >> (VAR_23-1)) & 1;
                    VAR_21 = (VAR_21 << 1) | VAR_26;
                    VAR_26 = VAR_27;
                }
            } else {
                for (; VAR_12 > 0; VAR_12--) {
                    const int VAR_28 = VAR_21 & 1;
                    VAR_21 = (VAR_21 >> 1) | (VAR_26 << (VAR_23-1));
                    VAR_26 = VAR_28;
                }
            }
            if (VAR_26) {
                VAR_16->SR |= VAR_7 | VAR_9;
            }
            break;
          }
          default: {
            VAR_12 %= VAR_23;
            if (VAR_18) {
                VAR_21 = (VAR_21 << VAR_12) | (VAR_21 >> (VAR_23 - VAR_12));
                if ((VAR_21 >> (VAR_23-1)) & 1) {
                    VAR_16->SR |= VAR_7;
                }
                VAR_21 <<= 1;
            } else {
                VAR_21 = (VAR_21 >> VAR_12) | (VAR_21 << (VAR_23 - VAR_12));
                if (VAR_21 & 1) {
                    VAR_16->SR |= VAR_7;
                }
                VAR_21 = (int32_t)VAR_21 >> 1;
            }
            break;
          }
        }
    } else {
        if (VAR_20 == 2 && (VAR_16->SR & VAR_9)) {
            VAR_16->SR |= VAR_7;
        }
    }
    FUNC_2(VAR_15==129 ? (int8_t) VAR_21 :
               VAR_15==128 ? (int16_t)VAR_21 : VAR_21);

    if (VAR_19) {
        FUNC_4(VAR_16, VAR_17, VAR_15, VAR_21);
    } else {
        switch (VAR_15) {
          case 129: *(VAR_0 + (uint8_t *)&VAR_16->D[VAR_14]) = VAR_21; break;
          case 128: *(VAR_11 + (uint16_t *)&VAR_16->D[VAR_14]) = VAR_21; break;
          default: VAR_16->D[VAR_14] = VAR_21; break;
        }
    }
    return (VAR_15==VAR_6 ? 8 : 6) + VAR_22;
}
