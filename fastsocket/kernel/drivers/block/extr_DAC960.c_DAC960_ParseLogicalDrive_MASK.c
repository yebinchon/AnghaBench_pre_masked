
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DAC960_Controller_T ;


 int VAR_0 ;
 unsigned long FUNC_0 (char*,char**,int) ;

__attribute__((used)) static bool FUNC_1(DAC960_Controller_T *VAR_1,
     char *VAR_2,
     unsigned char *VAR_3)
{
  char *VAR_4 = VAR_2;
  unsigned long VAR_5;
  while (*VAR_2 == ' ') VAR_2++;
  if (VAR_2 == VAR_4)
    return 0;
  VAR_5 =
    FUNC_0(VAR_2, &VAR_4, 10);
  if (VAR_4 == VAR_2 ||
      *VAR_4 != '\0' ||
      VAR_5 > VAR_0 - 1)
    return 0;
  *VAR_3 = VAR_5;
  return 1;
}
