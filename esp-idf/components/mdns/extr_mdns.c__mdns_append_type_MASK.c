
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int ) ;

__attribute__((used)) static inline uint8_t FUNC_2(uint8_t * VAR_13, uint16_t * VAR_14, uint8_t VAR_15, bool VAR_16, uint32_t VAR_17)
{
    if ((*VAR_14 + 10) >= VAR_7) {
        return 0;
    }
    uint16_t VAR_18 = VAR_5;
    if (VAR_16) {
        VAR_18 = VAR_6;
    }
    if (VAR_15 == VAR_2) {
        FUNC_0(VAR_13, VAR_14, VAR_10);
        FUNC_0(VAR_13, VAR_14, VAR_18);
    } else if (VAR_15 == VAR_4) {
        FUNC_0(VAR_13, VAR_14, VAR_12);
        FUNC_0(VAR_13, VAR_14, VAR_18);
    } else if (VAR_15 == VAR_3) {
        FUNC_0(VAR_13, VAR_14, VAR_11);
        FUNC_0(VAR_13, VAR_14, VAR_18);
    } else if (VAR_15 == VAR_0) {
        FUNC_0(VAR_13, VAR_14, VAR_8);
        FUNC_0(VAR_13, VAR_14, VAR_18);
    } else if (VAR_15 == VAR_1) {
        FUNC_0(VAR_13, VAR_14, VAR_9);
        FUNC_0(VAR_13, VAR_14, VAR_18);
    } else {
        return 0;
    }
    FUNC_1(VAR_13, VAR_14, VAR_17);
    FUNC_0(VAR_13, VAR_14, 0);
    return 10;
}
