
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int const uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int SR; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*,int const,scalar_t__,int ,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_4(Q68State *VAR_10, uint32_t VAR_11)
{
    VAR_1;
    VAR_3;
    VAR_2;
    const int VAR_12 = FUNC_2(VAR_9);
    const int VAR_13 = VAR_12*8 - 1;
    const uint32_t VAR_14 = ~(~1 << VAR_13);

    const uint16_t VAR_15 = VAR_0<<3 | VAR_8;
    const uint16_t VAR_16 = VAR_0<<3 | VAR_7;
    int VAR_17;
    uint32_t VAR_18 = FUNC_3(VAR_10, VAR_15, VAR_9, 0, &VAR_17);
    uint32_t VAR_19 = FUNC_3(VAR_10, VAR_16, VAR_9, 0, &VAR_17);

    uint32_t VAR_20 = (VAR_19 - VAR_18) & VAR_14;
    FUNC_0();
    FUNC_1(VAR_20);
    if (((VAR_18 ^ VAR_19) & (VAR_20 ^ VAR_19)) >> VAR_13) {
        VAR_10->SR |= VAR_6;
    }
    if ((int)((VAR_18 >> VAR_13) - (VAR_19 >> VAR_13) + (VAR_20 >> VAR_13)) > 0) {
        VAR_10->SR |= VAR_5;
    }

    return VAR_9==VAR_4 ? 20 : 12;
}
