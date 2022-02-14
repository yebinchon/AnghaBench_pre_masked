
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16 ;
typedef scalar_t__ address ;
struct TYPE_4__ {unsigned int pc; int cycles; TYPE_1__* memory_map; } ;
struct TYPE_3__ {scalar_t__ base; } ;


 TYPE_2__ VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 () ;
 unsigned int FUNC_4 (int ) ;

unsigned int FUNC_5(unsigned int VAR_1)
{
  switch (VAR_1 & 0xFC)
  {
    case 0x00:
    {
      return FUNC_3();
    }

    case 0x04:
    {
      unsigned int VAR_2 = FUNC_2(VAR_0.cycles) & 0x3FF;


      VAR_1 = VAR_0.pc;
      VAR_2 |= (*(uint16 *)(VAR_0.memory_map[((VAR_1)>>16)&0xff].base + ((VAR_1) & 0xffff)) & 0xFC00);

      return VAR_2;
    }

    case 0x08:
    case 0x0C:
    {
      return FUNC_4(VAR_0.cycles);
    }

    case 0x18:
    case 0x1C:
    {
      return FUNC_1(VAR_1);
    }

    default:
    {
      return FUNC_0(VAR_1);
    }
  }
}
