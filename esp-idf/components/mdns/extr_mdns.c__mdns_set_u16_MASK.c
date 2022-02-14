
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(uint8_t * VAR_1, uint16_t VAR_2, uint16_t VAR_3)
{
    if ((VAR_2 + 1) >= VAR_0) {
        return;
    }
    VAR_1[VAR_2] = (VAR_3 >> 8) & 0xFF;
    VAR_1[VAR_2+1] = VAR_3 & 0xFF;
}
