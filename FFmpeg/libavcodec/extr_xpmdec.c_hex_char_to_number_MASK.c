
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;



__attribute__((used)) static unsigned FUNC_0(uint8_t VAR_0)
{
    if (VAR_0 >= 'a' && VAR_0 <= 'f')
        VAR_0 -= 'a' - 10;
    else if (VAR_0 >= 'A' && VAR_0 <= 'F')
        VAR_0 -= 'A' - 10;
    else if (VAR_0 >= '0' && VAR_0 <= '9')
        VAR_0 -= '0';
    else
        VAR_0 = 0;
    return VAR_0;
}
