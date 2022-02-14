
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*,char const*,int) ;

char *FUNC_2(const char *VAR_0, size_t VAR_1)
{
    char *VAR_2 = ((void*)0);

    if (VAR_0)
    {
        int VAR_3 = VAR_1 + 1;
        VAR_2 = FUNC_0(1, VAR_3);

        if (VAR_2)
            FUNC_1(VAR_2, VAR_0, VAR_3);
    }
    return VAR_2;
}
