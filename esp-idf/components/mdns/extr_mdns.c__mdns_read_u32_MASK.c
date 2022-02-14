
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;



__attribute__((used)) static inline uint32_t FUNC_0(const uint8_t * VAR_0, uint16_t VAR_1)
{
    return (uint32_t)(VAR_0[VAR_1]) << 24 | (uint32_t)(VAR_0[VAR_1+1]) << 16 | (uint32_t)(VAR_0[VAR_1+2]) << 8 | VAR_0[VAR_1+3];
}
