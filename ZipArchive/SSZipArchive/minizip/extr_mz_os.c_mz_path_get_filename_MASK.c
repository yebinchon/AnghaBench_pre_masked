
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int32_t FUNC_0(const char *VAR_3, const char **VAR_4)
{
    const char *VAR_5 = ((void*)0);

    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
        return VAR_2;

    *VAR_4 = ((void*)0);

    for (VAR_5 = VAR_3; *VAR_5 != 0; VAR_5 += 1)
    {
        if ((*VAR_5 == '\\') || (*VAR_5 == '/'))
            *VAR_4 = VAR_5 + 1;
    }

    if (*VAR_4 == ((void*)0))
        return VAR_0;

    return VAR_1;
}
