
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,scalar_t__*,int) ;

__attribute__((used)) static inline uint8_t FUNC_1(uint8_t * VAR_1, uint16_t * VAR_2, uint32_t VAR_3)
{
    if ((*VAR_2 + 3) >= VAR_0) {
        return 0;
    }
    FUNC_0(VAR_1, VAR_2, (VAR_3 >> 24) & 0xFF);
    FUNC_0(VAR_1, VAR_2, (VAR_3 >> 16) & 0xFF);
    FUNC_0(VAR_1, VAR_2, (VAR_3 >> 8) & 0xFF);
    FUNC_0(VAR_1, VAR_2, VAR_3 & 0xFF);
    return 4;
}
