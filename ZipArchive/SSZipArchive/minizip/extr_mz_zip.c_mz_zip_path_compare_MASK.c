
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (char const) ;

int32_t FUNC_1(const char *VAR_0, const char *VAR_1, uint8_t VAR_2)
{
    do
    {
        if ((*VAR_0 == '\\' && *VAR_1 == '/') ||
            (*VAR_1 == '\\' && *VAR_0 == '/'))
        {

        }
        else if (VAR_2)
        {
            if (FUNC_0(*VAR_0) != FUNC_0(*VAR_1))
                break;
        }
        else if (*VAR_0 != *VAR_1)
        {
            break;
        }

        VAR_0 += 1;
        VAR_1 += 1;
    }
    while (*VAR_0 != 0 && *VAR_1 != 0);

    if (VAR_2)
        return (int32_t)(FUNC_0(*VAR_0) - FUNC_0(*VAR_1));

    return (int32_t)(*VAR_0 - *VAR_1);
}
