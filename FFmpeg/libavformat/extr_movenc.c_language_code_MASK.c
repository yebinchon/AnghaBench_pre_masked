
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(const char *VAR_0)
{
    return (((VAR_0[0] - 0x60) & 0x1F) << 10) +
           (((VAR_0[1] - 0x60) & 0x1F) << 5) +
           (( VAR_0[2] - 0x60) & 0x1F);
}
