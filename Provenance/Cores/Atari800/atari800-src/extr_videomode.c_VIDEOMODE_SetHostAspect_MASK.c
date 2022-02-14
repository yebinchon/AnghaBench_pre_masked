
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double*,double*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 double VAR_2 ;
 double VAR_3 ;

int FUNC_2(double VAR_4, double VAR_5)
{
 double VAR_6 = VAR_3;
 double VAR_7 = VAR_2;
 if (VAR_4 < 0.0 || VAR_5 < 0.0)
  return VAR_0;
 if (VAR_4 == 0.0 || VAR_5 == 0.0)
  FUNC_0(&VAR_4, &VAR_5);
 VAR_3 = VAR_4;
 VAR_2 = VAR_5;
 if (!FUNC_1()) {
  VAR_3 = VAR_6;
  VAR_2 = VAR_7;
  return VAR_0;
 }
 return VAR_1;
}
