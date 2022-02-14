
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint16 ;
struct TYPE_4__ {scalar_t__ enabled; int status; int* addr; int* data; int* regs; void** old; } ;
struct TYPE_3__ {int rom; } ;





 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_0(int VAR_3)
{
  if (VAR_1.enabled)
  {

    if ((VAR_1.enabled == VAR_0) && (VAR_3 == 128))
    {
      VAR_3 = 130;
    }


    switch (VAR_3)
    {
      case 130:
      case 128:
      {

        if (VAR_1.status == 129)
        {

          *(uint16 *)(VAR_2.rom + VAR_1.addr[0]) = VAR_1.old[0];
          *(uint16 *)(VAR_2.rom + VAR_1.addr[1]) = VAR_1.old[1];
          *(uint16 *)(VAR_2.rom + VAR_1.addr[2]) = VAR_1.old[2];
          *(uint16 *)(VAR_2.rom + VAR_1.addr[3]) = VAR_1.old[3];
        }
        break;
      }

      case 129:
      {

        if (VAR_1.status != 129)
        {

          VAR_1.data[0] = VAR_1.regs[0];
          VAR_1.data[1] = VAR_1.regs[4];
          VAR_1.data[2] = VAR_1.regs[7];
          VAR_1.data[3] = VAR_1.regs[10];


          VAR_1.addr[0] = (VAR_1.regs[1] | ((VAR_1.regs[2] & 0x3f00) << 8)) << 1;
          VAR_1.addr[1] = (VAR_1.regs[5] | ((VAR_1.regs[6] & 0x3f00) << 8)) << 1;
          VAR_1.addr[2] = (VAR_1.regs[8] | ((VAR_1.regs[9] & 0x3f00) << 8)) << 1;
          VAR_1.addr[3] = (VAR_1.regs[11] | ((VAR_1.regs[12] & 0x3f00) << 8)) << 1;


          VAR_1.old[0] = *(uint16 *)(VAR_2.rom + VAR_1.addr[0]);
          VAR_1.old[1] = *(uint16 *)(VAR_2.rom + VAR_1.addr[1]);
          VAR_1.old[2] = *(uint16 *)(VAR_2.rom + VAR_1.addr[2]);
          VAR_1.old[3] = *(uint16 *)(VAR_2.rom + VAR_1.addr[3]);


          *(uint16 *)(VAR_2.rom + VAR_1.addr[0]) = VAR_1.data[0];
          *(uint16 *)(VAR_2.rom + VAR_1.addr[1]) = VAR_1.data[1];
          *(uint16 *)(VAR_2.rom + VAR_1.addr[2]) = VAR_1.data[2];
          *(uint16 *)(VAR_2.rom + VAR_1.addr[3]) = VAR_1.data[3];
        }
        break;
      }

      default:
      {
        return;
      }
    }


    VAR_1.status = VAR_3;
  }
}
