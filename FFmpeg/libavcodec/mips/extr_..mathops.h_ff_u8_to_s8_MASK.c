
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int8_t ;



__attribute__((used)) static inline int8_t FUNC_0(uint8_t VAR_0)
{
    union {
        uint8_t u8;
        int8_t s8;
    } VAR_1;
    VAR_1.u8 = VAR_0;
    return VAR_1.s8;
}
