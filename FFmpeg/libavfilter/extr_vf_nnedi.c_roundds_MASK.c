
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (double const) ;
 double const FUNC_3 (double const) ;

__attribute__((used)) static int FUNC_4(const double VAR_0)
{
    if (VAR_0 - FUNC_3(VAR_0) >= 0.5)
        return FUNC_1((int)FUNC_2(VAR_0), 32767);
    return FUNC_0((int)FUNC_3(VAR_0), -32768);
}
