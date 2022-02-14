
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void FUNC_0(u_int VAR_3, int VAR_4, int VAR_5) {
 if (VAR_4) {
  if (VAR_3 == VAR_0)
   VAR_2 ^= VAR_5;
 } else {
  if (VAR_3 == VAR_1)
   VAR_2 &= ~VAR_5;
  else
   VAR_2 |= VAR_5;
 }
}
