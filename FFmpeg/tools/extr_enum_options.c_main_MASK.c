
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;

int FUNC_4(int VAR_0, char **VAR_1)
{
    if (VAR_0 < 2)
        FUNC_0();

    if (!FUNC_3(VAR_1[1], "format"))
        FUNC_2();
    else if (!FUNC_3(VAR_1[1], "codec"))
        FUNC_1();
    else
        FUNC_0();

    return 0;
}
