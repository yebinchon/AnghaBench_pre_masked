
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int ;
typedef int* caddr_t ;



__attribute__((used)) static int
FUNC_0(
    caddr_t VAR_0,
    caddr_t VAR_1,
    u_int VAR_2)
{
 u_int8_t VAR_3;





 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (VAR_0 == VAR_1);

 while (VAR_2 >= 8) {
  if (*VAR_0++ != *VAR_1++)
   return 0;
  VAR_2 -= 8;
 }

 if (VAR_2 > 0) {
  VAR_3 = ~((1<<(8-VAR_2))-1);
  if ((*VAR_0 & VAR_3) != (*VAR_1 & VAR_3))
   return 0;
 }
 return 1;
}
