
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char*,char*) ;

int FUNC_4(char *VAR_2, const char *VAR_3)
{
    static char VAR_4[129];

    char *VAR_5;

    char *VAR_6;

    FUNC_1(VAR_4, VAR_3, 128);
    VAR_4[128] = 0;

    VAR_5 = FUNC_3(VAR_4, " ,");
    while (VAR_5 != ((void*)0)) {


        VAR_6 = FUNC_2(VAR_2, '.');

        if (FUNC_0(VAR_6, VAR_5) == 0)
            return (VAR_1);


        VAR_5 = FUNC_3(((void*)0), " ,");
    }


    return (VAR_0);
}
