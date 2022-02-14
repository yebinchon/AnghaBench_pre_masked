
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static uint64_t FUNC_0(uint64_t VAR_0)
{
    uint64_t VAR_1 = (VAR_0 >> 27) & 0x10000001;
    VAR_0 <<= 1;
    VAR_0 &= ~0x10000001;
    VAR_0 |= VAR_1;
    return VAR_0;
}
