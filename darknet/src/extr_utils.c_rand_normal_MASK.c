
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 double VAR_1 ;
 float FUNC_0 (double) ;
 int FUNC_1 (double) ;
 double FUNC_2 () ;
 float FUNC_3 (double) ;
 float FUNC_4 (double) ;

float FUNC_5()
{
    static int VAR_2 = 0;
    static double VAR_3, VAR_4;

    if(VAR_2)
    {
        VAR_2 = 0;
        return FUNC_4(VAR_3) * FUNC_3(VAR_4);
    }

    VAR_2 = 1;

    VAR_3 = FUNC_2() / ((double) VAR_0);
    if(VAR_3 < 1e-100) VAR_3 = 1e-100;
    VAR_3 = -2 * FUNC_1(VAR_3);
    VAR_4 = (FUNC_2() / ((double) VAR_0)) * VAR_1;

    return FUNC_4(VAR_3) * FUNC_0(VAR_4);
}
