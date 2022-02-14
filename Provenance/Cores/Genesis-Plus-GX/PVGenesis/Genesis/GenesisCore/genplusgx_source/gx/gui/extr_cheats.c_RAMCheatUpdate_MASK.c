
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int data; int address; } ;


 int* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;

void FUNC_0(void)
{
  int VAR_4, VAR_5 = VAR_2;

  while (VAR_5)
  {

    VAR_4 = VAR_0[--VAR_5];


    if (VAR_1[VAR_4].data & 0xFF00)
    {

      *(u16 *)(VAR_3 + (VAR_1[VAR_4].address & 0xFFFE)) = VAR_1[VAR_4].data;
    }
    else
    {

      VAR_3[VAR_1[VAR_4].address & 0xFFFF] = VAR_1[VAR_4].data;
    }
  }
}
