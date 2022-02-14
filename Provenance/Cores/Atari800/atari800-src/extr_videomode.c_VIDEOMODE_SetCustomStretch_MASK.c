
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 () ;
 double VAR_3 ;
 unsigned int VAR_4 ;

int FUNC_1(double VAR_5)
{
 double VAR_6 = VAR_3;
 unsigned int VAR_7 = VAR_4;
 if (VAR_5 < 1.0)
  return VAR_0;
 if (VAR_5 != VAR_3 || VAR_4 != VAR_2) {
  VAR_3 = VAR_5;
  VAR_4 = VAR_2;
  if (!FUNC_0()) {
   VAR_3 = VAR_6;
   VAR_4 = VAR_7;
   return VAR_0;
  }
 }
 return VAR_1;
}
