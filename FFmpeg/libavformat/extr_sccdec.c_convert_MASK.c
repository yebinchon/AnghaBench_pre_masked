
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;



__attribute__((used)) static int FUNC_0(uint8_t VAR_0)
{
    if (VAR_0 >= 'a')
        VAR_0 -= 87;
    else if (VAR_0 >= 'A')
        VAR_0 -= 55;
    else
        VAR_0 -= '0';
    return VAR_0;
}
