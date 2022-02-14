
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_4__ {scalar_t__ rom; } ;
struct TYPE_3__ {int* regs; int * old; scalar_t__* addr; int * data; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_0(int VAR_2)
{
  int VAR_3;
  if (VAR_2)
  {

    for (VAR_3=0; VAR_3<6; VAR_3++)
    {

      if (VAR_1.regs[0] & (1 << VAR_3))
      {

        VAR_1.old[VAR_3] = *(uint16 *)(VAR_0.rom + VAR_1.addr[VAR_3]);
        *(uint16 *)(VAR_0.rom + VAR_1.addr[VAR_3]) = VAR_1.data[VAR_3];
      }
    }
  }
  else
  {

    for (VAR_3=5; VAR_3>=0; VAR_3--)
    {

      if (VAR_1.regs[0] & (1 << VAR_3))
      {

        *(uint16 *)(VAR_0.rom + VAR_1.addr[VAR_3]) = VAR_1.old[VAR_3];
      }
    }
  }
}
