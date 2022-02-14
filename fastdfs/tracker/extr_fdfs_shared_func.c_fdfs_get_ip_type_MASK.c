
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 scalar_t__ FUNC_2 (char const*) ;

int FUNC_3(const char* VAR_5)
{
    if (VAR_5 == ((void*)0) || (int)FUNC_2(VAR_5) < 8)
    {
        return VAR_4;
    }

    if (FUNC_1(VAR_5, "10.", 3) == 0)
    {
        return VAR_1;
    }
    if (FUNC_1(VAR_5, "192.168.", 8) == 0)
    {
        return VAR_3;
    }

    if (FUNC_1(VAR_5, "172.", 4) == 0)
    {
        int VAR_6;
        VAR_6 = FUNC_0(VAR_5 + 4);
        if (VAR_6 >= 16 && VAR_6 < 32)
        {
            return VAR_2;
        }
    }

    return VAR_0;
}
