
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bankshift; } ;
struct TYPE_10__ {int mask; int special; scalar_t__ rom; TYPE_1__ hw; } ;
struct TYPE_9__ {int lock_on; } ;
struct TYPE_8__ {TYPE_2__* memory_map; } ;
struct TYPE_7__ {scalar_t__ base; } ;


 int VAR_0 ;



 int FUNC_0 (int) ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_3__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 () ;

void FUNC_3(int VAR_5)
{
  int VAR_6;


  if (VAR_1.hw.bankshift)
  {
    for (VAR_6=0x00; VAR_6<0x40; VAR_6++)
    {
      VAR_3.memory_map[VAR_6].base = VAR_1.rom + ((VAR_6<<16) & VAR_1.mask);
    }
  }


  if (VAR_4)
  {
    FUNC_2();
  }


  switch (VAR_2.lock_on)
  {
    case 129:
    {
      FUNC_1(VAR_5);
      break;
    }

    case 130:
    {
      FUNC_0(VAR_5);
      break;
    }

    case 128:
    {
      if (VAR_1.special & VAR_0)
      {

        for (VAR_6=0x30; VAR_6<0x40; VAR_6++)
        {
          VAR_3.memory_map[VAR_6].base = VAR_1.rom + ((VAR_6<<16) & VAR_1.mask);
        }
      }
      break;
    }

    default:
    {
      break;
    }
  }
}
