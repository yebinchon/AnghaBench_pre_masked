
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__** blips; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_2(void)
{
  int VAR_3,VAR_4;


  for (VAR_3=0; VAR_3<3; VAR_3++)
  {
    for (VAR_4=0; VAR_4<2; VAR_4++)
    {
      if (VAR_2.blips[VAR_3][VAR_4])
      {
        FUNC_1(VAR_2.blips[VAR_3][VAR_4]);
      }
    }
  }


  VAR_0 = 0;
  VAR_1 = 0;


  FUNC_0();
}
