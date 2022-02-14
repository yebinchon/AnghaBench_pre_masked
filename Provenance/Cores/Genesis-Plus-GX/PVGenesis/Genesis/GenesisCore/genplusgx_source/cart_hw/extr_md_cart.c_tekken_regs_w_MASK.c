
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int* regs; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_0(uint32 VAR_1, uint32 VAR_2)
{
  switch (VAR_1 & 0x0e)
  {
    case 0x00:
    {

      VAR_0.hw.regs[0]= 0x00;
      break;
    }

    case 0x02:
    {

      break;
    }

    case 0x0c:
    {

      break;
    }

    case 0x0e:
    {

      break;
    }

    default:
    {

      if (VAR_2 & 1)
      {

        VAR_0.hw.regs[0] |= 1 << (((VAR_1 - 0x04) >> 1) & 3);
      }
      break;
    }
  }
}
