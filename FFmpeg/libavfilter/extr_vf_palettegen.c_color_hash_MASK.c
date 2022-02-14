
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned FUNC_0(uint32_t VAR_1)
{
    const uint8_t VAR_2 = VAR_1 >> 16 & ((1<<VAR_0)-1);
    const uint8_t VAR_3 = VAR_1 >> 8 & ((1<<VAR_0)-1);
    const uint8_t VAR_4 = VAR_1 & ((1<<VAR_0)-1);
    return VAR_2<<(VAR_0*2) | VAR_3<<VAR_0 | VAR_4;
}
