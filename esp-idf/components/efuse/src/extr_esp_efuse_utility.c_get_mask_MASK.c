
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(unsigned int VAR_0, unsigned int VAR_1)
{
    uint32_t VAR_2;
    if (VAR_0 != 32) {
        VAR_2 = (1 << VAR_0) - 1;
    } else {
        VAR_2 = 0xFFFFFFFF;
    }
    return VAR_2 << VAR_1;
}
