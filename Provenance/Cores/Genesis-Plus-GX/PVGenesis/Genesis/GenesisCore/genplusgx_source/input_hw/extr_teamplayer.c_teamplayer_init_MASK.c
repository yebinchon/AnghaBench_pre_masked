
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* dev; } ;
struct TYPE_3__ {int* Table; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_0(int VAR_3)
{
  int VAR_4,VAR_5;
  int VAR_6 = 0;





  for (VAR_4=0; VAR_4<4; VAR_4++)
  {
    VAR_5 = (4 * VAR_3) + VAR_4;
    if (VAR_1.dev[VAR_5] == VAR_0)
    {
      VAR_5 = VAR_5 << 4;
      VAR_2[VAR_3].Table[VAR_6++] = VAR_5;
      VAR_2[VAR_3].Table[VAR_6++] = VAR_5 | 4;
    }
    else
    {
      VAR_5 = VAR_5 << 4;
      VAR_2[VAR_3].Table[VAR_6++] = VAR_5;
      VAR_2[VAR_3].Table[VAR_6++] = VAR_5 | 4;
      VAR_2[VAR_3].Table[VAR_6++] = VAR_5 | 8;
    }
  }
}
