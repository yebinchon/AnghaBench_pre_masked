
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
 double FUNC_1 (char const*,char**) ;

__attribute__((used)) static ParameterError FUNC_2(double *VAR_5, const char *VAR_6, long VAR_7)
{
  if(VAR_6) {
    char *VAR_8;
    double VAR_9;
    VAR_4 = 0;
    VAR_9 = FUNC_1(VAR_6, &VAR_8);
    if(VAR_4 == VAR_0)
      return VAR_2;
    if(VAR_9 > VAR_7) {

      return VAR_2;
    }
    if((VAR_8 != VAR_6) && (VAR_8 == VAR_6 + FUNC_0(VAR_6))) {
      *VAR_5 = VAR_9;
      return VAR_3;
    }
  }
  return VAR_1;
}
