
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,char const*,...) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_0, const char* const *VAR_1, const char *VAR_2)
{
    if (VAR_0 != ((void*)0) && VAR_2 != ((void*)0))
    {
        if (VAR_1 != ((void*)0))
        {
            while (*VAR_1 != ((void*)0))
            {
                FUNC_0(VAR_0, "%s%s\n", VAR_2, *VAR_1++);
            }
        }
        else
        {
            FUNC_0(VAR_0, "%s" "Option not supported by encoder\n", VAR_2);
        }
    }
}
