
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(uint32_t VAR_0)
{
    union {
        uint32_t l;
        uint8_t b[4];
    } VAR_1;
    VAR_1.l = VAR_0;
    return VAR_1.b[3] | (VAR_1.b[2] << 8) | (VAR_1.b[1] << 16) | (VAR_1.b[0] << 24);
}
