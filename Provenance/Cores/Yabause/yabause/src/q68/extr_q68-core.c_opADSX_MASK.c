
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int SR; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_1__*,int const,scalar_t__,int,int*) ;
 int FUNC_2 (TYPE_1__*,int const,scalar_t__,int) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static int FUNC_3(Q68State *VAR_15, uint32_t VAR_16)
{
    VAR_2;
    VAR_4;
    VAR_3;
    const int VAR_17 = VAR_16 & 0x4000;
    const int VAR_18 = VAR_16 & 0x0008;
    const int VAR_19 = FUNC_0(VAR_14);
    const int VAR_20 = VAR_19*8 - 1;
    const uint32_t VAR_21 = ~(~1 << VAR_20);

    const uint16_t VAR_22 =
        (VAR_18 ? VAR_1 : VAR_0) << 3 | VAR_13;
    const uint16_t VAR_23 =
        (VAR_18 ? VAR_1 : VAR_0) << 3 | VAR_12;
    int VAR_24;
    uint32_t VAR_25 = FUNC_1(VAR_15, VAR_22, VAR_14, 0, &VAR_24);
    uint32_t VAR_26 = FUNC_1(VAR_15, VAR_23, VAR_14, 1, &VAR_24);

    uint32_t VAR_27;
    int VAR_28 = (VAR_15->SR >> VAR_10) & 1;
    VAR_15->SR &= ~(VAR_9 | VAR_7 | VAR_8 | VAR_6);
    if (VAR_17) {
        VAR_27 = (VAR_26 + VAR_25 + VAR_28) & VAR_21;
        if (((VAR_25 ^ VAR_27) & (VAR_26 ^ VAR_27)) >> VAR_20) {
            VAR_15->SR |= VAR_8;
        }
        if ((int)((VAR_25 >> VAR_20) + (VAR_26 >> VAR_20) - (VAR_27 >> VAR_20)) > 0) {
            VAR_15->SR |= VAR_9 | VAR_6;
        }
    } else {
        VAR_27 = (VAR_26 - VAR_25 - VAR_28) & VAR_21;
        if (((VAR_25 ^ VAR_26) & (VAR_27 ^ VAR_26)) >> VAR_20) {
            VAR_15->SR |= VAR_8;
        }
        if ((int)((VAR_25 >> VAR_20) - (VAR_26 >> VAR_20) + (VAR_27 >> VAR_20)) > 0) {
            VAR_15->SR |= VAR_9 | VAR_6;
        }
    }
    if (VAR_27 >> VAR_20) {
        VAR_15->SR |= VAR_7;
    }
    if (VAR_27 != 0) {
        VAR_15->SR &= ~VAR_11;
    }

    FUNC_2(VAR_15, VAR_23, VAR_14, VAR_27);
    return (VAR_18 ? (VAR_14==VAR_5 ? 30 : 18) : (VAR_14==VAR_5 ? 8 : 4));
}
