
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_3(int VAR_4)
{
    FUNC_2();

    if(FUNC_1(((void*)0)) < 0)
        return 0;

    if(VAR_4 == VAR_0)
    {
        if(VAR_2 < 0)
        {
            VAR_2 = FUNC_0();
        }

        if(VAR_2 >= 0)
            return 1;
    }
    else if(VAR_4 == VAR_1)
    {
        if(VAR_3 < 0)
        {
            VAR_3 = FUNC_0();
        }

        if(VAR_3 >= 0)
            return 1;
    }

    return 0;
}
