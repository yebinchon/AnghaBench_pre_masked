
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ fixed_t ;


 double VAR_0 ;
 int FUNC_0 (char*) ;

fixed_t
FUNC_1
( fixed_t VAR_1,
  fixed_t VAR_2 )
{






    double VAR_3;

    VAR_3 = ((double)VAR_1) / ((double)VAR_2) * VAR_0;

    if (VAR_3 >= 2147483648.0 || VAR_3 < -2147483648.0)
 FUNC_0("FixedDiv: divide by zero");
    return (fixed_t) VAR_3;
}
