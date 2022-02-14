
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ParameterError ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (long*,char const*) ;

ParameterError FUNC_1(long *VAR_2, const char *VAR_3, long VAR_4)
{
  ParameterError VAR_5 = FUNC_0(VAR_2, VAR_3);
  if(VAR_5 != VAR_1)
    return VAR_5;
  if(*VAR_2 > VAR_4)
    return VAR_0;

  return VAR_1;
}
