
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ParameterError ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (double*,char const*,long) ;

ParameterError FUNC_1(double *VAR_2, const char *VAR_3, long VAR_4)
{
  double VAR_5;
  ParameterError VAR_6 = FUNC_0(&VAR_5, VAR_3, VAR_4);
  if(VAR_6 != VAR_1)
    return VAR_6;
  if(VAR_5 < 0)
    return VAR_0;

  *VAR_2 = VAR_5;
  return VAR_1;
}
