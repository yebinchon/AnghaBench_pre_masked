
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_3 ;

boolean_t
FUNC_1(void)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 8; VAR_4 += 1) {
  if ((FUNC_0(VAR_1, VAR_4) != 0) ||
      (FUNC_0(VAR_2, VAR_4) != 0))
   return (VAR_3);
 }

 return (VAR_0);
}
