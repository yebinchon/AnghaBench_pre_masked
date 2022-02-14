
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

int32_t FUNC_1(char *VAR_2)
{
    char *VAR_3 = ((void*)0);

    if (VAR_2 == ((void*)0))
        return VAR_1;

    VAR_3 = VAR_2 + FUNC_0(VAR_2) - 1;

    while (VAR_3 > VAR_2)
    {
        if ((*VAR_3 == '/') || (*VAR_3 == '\\'))
        {
            *VAR_3 = 0;
            break;
        }

        VAR_3 -= 1;
    }

    if (VAR_3 == VAR_2)
        *VAR_3 = 0;

    return VAR_0;
}
