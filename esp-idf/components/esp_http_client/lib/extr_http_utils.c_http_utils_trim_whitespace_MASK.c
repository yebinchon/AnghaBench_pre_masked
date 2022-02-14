
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;

void FUNC_3(char **VAR_0)
{
    char *VAR_1, *VAR_2;
    if (VAR_0 == ((void*)0)) {
        return;
    }
    VAR_2 = *VAR_0;
    if (VAR_2 == ((void*)0)) {
        return;
    }

    while (FUNC_0((unsigned char)*VAR_2)) VAR_2 ++;

    if (*VAR_2 == 0) {
        **VAR_0 = 0;
        return;
    }


    VAR_1 = (char *)(VAR_2 + FUNC_2(VAR_2) - 1);
    while (VAR_1 > VAR_2 && FUNC_0((unsigned char)*VAR_1)) {
        VAR_1--;
    }


    *(VAR_1 + 1) = 0;
    FUNC_1(*VAR_0, VAR_2, FUNC_2(VAR_2) + 1);
}
