
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int* VAR_1 ;

__attribute__((used)) static u_int16_t
FUNC_1(u_int16_t VAR_2, int VAR_3)
{

 if (VAR_3) {
  if (VAR_2 == 0x20)
   return (0xf028);
  else if (VAR_2 == 0x2e)
   return (0xf029);
 }

 if (VAR_2 <= 0x1f) {
  return (VAR_2 | 0xf000);
 } else {
  u_int16_t VAR_4;

  FUNC_0((VAR_2 - 0x0020) < VAR_0);
  VAR_4 = VAR_1[VAR_2 - 0x0020];
  if (VAR_4 != VAR_2)
   return(0xf000 | VAR_4);
 }
 return (VAR_2);
}
