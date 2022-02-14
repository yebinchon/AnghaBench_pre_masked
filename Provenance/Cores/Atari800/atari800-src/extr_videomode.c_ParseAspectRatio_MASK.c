
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (char const*,char**) ;

__attribute__((used)) static int FUNC_1(char const *VAR_2, double *VAR_3, double *VAR_4)
{
 char *VAR_5;
 char *VAR_6;
 *VAR_3 = FUNC_0(VAR_2, &VAR_5);
 if (VAR_5 == VAR_2 || *VAR_3 < 0.0)
  return VAR_0;
 if (*VAR_5 != ':')
  return VAR_0;
 *VAR_4 = FUNC_0(++VAR_5, &VAR_6);
 if (VAR_6 == VAR_5 || *VAR_4 < 0.0)
  return VAR_0;
 return VAR_1;
}
