
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long Channels; unsigned long Targets; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 unsigned long FUNC_0 (char*,char**,int) ;

__attribute__((used)) static bool FUNC_1(DAC960_Controller_T *VAR_0,
       char *VAR_1,
       unsigned char *VAR_2,
       unsigned char *VAR_3)
{
  char *VAR_4 = VAR_1;
  unsigned long VAR_5, VAR_6;
  while (*VAR_1 == ' ') VAR_1++;
  if (VAR_1 == VAR_4)
    return 0;
  VAR_5 = FUNC_0(VAR_1, &VAR_4, 10);
  if (VAR_4 == VAR_1 ||
      *VAR_4 != ':' ||
      VAR_5 >= VAR_0->Channels)
    return 0;
  VAR_1 = ++VAR_4;
  VAR_6 = FUNC_0(VAR_1, &VAR_4, 10);
  if (VAR_4 == VAR_1 ||
      *VAR_4 != '\0' ||
      VAR_6 >= VAR_0->Targets)
    return 0;
  *VAR_2 = VAR_5;
  *VAR_3 = VAR_6;
  return 1;
}
