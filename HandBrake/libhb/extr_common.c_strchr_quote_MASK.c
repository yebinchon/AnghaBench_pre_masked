
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char* FUNC_0(const char *VAR_0, char VAR_1, char VAR_2)
{
    if (VAR_0 == ((void*)0))
        return ((void*)0);

    while (*VAR_0 != 0 && *VAR_0 != VAR_1)
    {
        if (*VAR_0 == VAR_2)
        {
            VAR_0 = FUNC_0(VAR_0+1, VAR_2, 0);
            if (VAR_0 == ((void*)0))
                return ((void*)0);
            VAR_0++;
        }
        else if (*VAR_0 == '\\' && *(VAR_0+1) != 0)
            VAR_0 += 2;
        else
            VAR_0++;
    }
    if (*VAR_0 != VAR_1)
        return ((void*)0);
    return VAR_0;
}
