
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ParameterError ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char const*) ;
 long FUNC_1 (char const*,char**,int) ;

ParameterError FUNC_2(long *VAR_5, const char *VAR_6)
{
  if(VAR_6) {
    char *VAR_7;
    long VAR_8;
    VAR_4 = 0;
    VAR_8 = FUNC_1(VAR_6, &VAR_7, 10);
    if(VAR_4 == VAR_0)
      return VAR_2;
    if((VAR_7 != VAR_6) && (VAR_7 == VAR_6 + FUNC_0(VAR_6))) {
      *VAR_5 = VAR_8;
      return VAR_3;
    }
  }
  return VAR_1;
}
