
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int* regs; } ;
struct TYPE_8__ {TYPE_2__ hw; int * rom; } ;
struct TYPE_7__ {TYPE_1__* memory_map; } ;
struct TYPE_5__ {int * base; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void FUNC_0(uint32 VAR_2, uint32 VAR_3)
{
  switch (VAR_2)
  {
    case 0x402000:
    {

      VAR_0.hw.regs[2] = VAR_3 << 1;
      return;
    }

    case 0x404000:
    {

      VAR_0.hw.regs[0] = VAR_3 & 7;
      return;
    }

    case 0x400000:
    {

      VAR_0.hw.regs[1] = VAR_3 & 6;


      if (VAR_0.hw.regs[2])
      {

        uint32 VAR_4 = (VAR_0.hw.regs[0] << 1) | (VAR_0.hw.regs[1] << 3);


        int VAR_5;
        for (VAR_5=0x00; VAR_5<0x40; VAR_5++)
        {
          VAR_1.memory_map[VAR_5].base = &VAR_0.rom[(VAR_4 + (VAR_5 % VAR_0.hw.regs[2])) << 16];
        }
      }
      return;
    }
  }
}
