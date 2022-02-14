
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (char*) ;

int FUNC_2(int VAR_1, char **VAR_2)
{
    if (VAR_1 < 2)
    {
        FUNC_0(((void*)0), VAR_0, "Incorrect input\n");
        return 1;
    }

    if (FUNC_1(VAR_2[1]) != 0)
        return 1;

    return 0;
}
