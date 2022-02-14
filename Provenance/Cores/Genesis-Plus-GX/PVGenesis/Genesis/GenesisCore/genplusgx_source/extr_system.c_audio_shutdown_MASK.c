
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__** blips; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(void)
{
  int VAR_1,VAR_2;


  for (VAR_1=0; VAR_1<3; VAR_1++)
  {
    for (VAR_2=0; VAR_2<2; VAR_2++)
    {
      FUNC_0(VAR_0.blips[VAR_1][VAR_2]);
      VAR_0.blips[VAR_1][VAR_2] = 0;
    }
  }
}
