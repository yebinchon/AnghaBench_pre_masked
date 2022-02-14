
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct in_addr {int s_addr; } ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;

boolean_t
FUNC_4(struct in_addr VAR_5)
{
 u_int32_t VAR_6 = FUNC_3(VAR_5.s_addr);
 u_int32_t VAR_7;

 if (FUNC_1(VAR_6) || FUNC_2(VAR_6))
  return (VAR_0);
 if (FUNC_0(VAR_6)) {
  VAR_7 = VAR_6 & VAR_1;
  if (VAR_7 == 0 || VAR_7 == (VAR_3 << VAR_2))
   return (VAR_0);
 }
 return (VAR_4);
}
