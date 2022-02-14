
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double FUNC_0 (double) ;

double FUNC_1(double VAR_1, double VAR_2)
{
 if(VAR_1 > 0.0) {
  double VAR_3 = (double)0.5 * FUNC_0(VAR_2 * VAR_1) / VAR_0;
  if(VAR_3 >= 0.0)
   return VAR_3;
  else
   return 0.0;
 }
 else if(VAR_1 < 0.0) {
  return 1e32;
 }
 else {
  return 0.0;
 }
}
