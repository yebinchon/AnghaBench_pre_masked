
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_0(u_int8_t *VAR_2, u_int8_t *VAR_3, u_int32_t VAR_4)
{
 u_int8_t VAR_5;


 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
  return (VAR_2 == VAR_3);
 }

 while (VAR_4 >= 8) {
  if (*VAR_2++ != *VAR_3++) {
   return (VAR_0);
  }
  VAR_4 -= 8;
 }

 if (VAR_4 > 0) {
  VAR_5 = ~((1<<(8-VAR_4))-1);
  if ((*VAR_2 & VAR_5) != (*VAR_3 & VAR_5)) {
   return (VAR_0);
  }
 }
 return (VAR_1);
}
