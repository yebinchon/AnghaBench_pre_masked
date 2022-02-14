
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static long FUNC_1(char *VAR_0, char **VAR_1)
{
  int VAR_2 = 0;
  while(FUNC_0(*VAR_0)) {
    VAR_2 *= 10;
    VAR_2 += *VAR_0-'0';
    VAR_0++;
  }
  if(VAR_2 && ('$'==*VAR_0++)) {
    *VAR_1 = VAR_0;
    return VAR_2;
  }
  return 0;
}
