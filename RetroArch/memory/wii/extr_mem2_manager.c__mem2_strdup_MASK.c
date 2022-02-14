
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;

char *FUNC_3(const char *VAR_0)
{
    char *VAR_1 = ((void*)0);

    if (VAR_0)
    {
        int VAR_2 = FUNC_2(VAR_0) + 1;

        VAR_1 = FUNC_0(1, VAR_2);

        if (VAR_1)
            FUNC_1(VAR_1, VAR_0, VAR_2);
    }

    return VAR_1;
}
