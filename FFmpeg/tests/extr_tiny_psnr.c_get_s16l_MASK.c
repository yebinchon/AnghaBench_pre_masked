
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;



__attribute__((used)) static int16_t FUNC_0(uint8_t *VAR_0)
{
    union {
        uint16_t u;
        int16_t s;
    } VAR_1;
    VAR_1.u = VAR_0[0] | VAR_0[1] << 8;
    return VAR_1.s;
}
