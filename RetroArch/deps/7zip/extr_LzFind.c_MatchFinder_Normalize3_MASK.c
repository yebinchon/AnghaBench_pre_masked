
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ CLzRef ;


 scalar_t__ VAR_0 ;

void FUNC_0(uint32_t VAR_1, CLzRef *VAR_2, size_t VAR_3)
{
  size_t VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  {
    uint32_t VAR_5 = VAR_2[VAR_4];
    if (VAR_5 <= VAR_1)
      VAR_5 = VAR_0;
    else
      VAR_5 -= VAR_1;
    VAR_2[VAR_4] = VAR_5;
  }
}
