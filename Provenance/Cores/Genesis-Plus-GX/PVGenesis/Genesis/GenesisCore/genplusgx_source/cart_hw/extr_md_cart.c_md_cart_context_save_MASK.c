
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
typedef int ssp1601_t ;
struct TYPE_8__ {int * regs; } ;
struct TYPE_12__ {int* rom; TYPE_2__ hw; } ;
struct TYPE_11__ {TYPE_1__* memory_map; } ;
struct TYPE_10__ {int* sram; } ;
struct TYPE_9__ {int ssp1601; int * dram; int * iram_rom; } ;
struct TYPE_7__ {int* base; } ;


 TYPE_6__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 TYPE_4__ VAR_2 ;
 TYPE_3__* VAR_3 ;

int FUNC_1(uint8 *VAR_4)
{
  int VAR_5;
  int VAR_6 = 0;
  uint8 *VAR_7;


  for (VAR_5=0; VAR_5<0x40; VAR_5++)
  {

    VAR_7 = VAR_1.memory_map[VAR_5].base;

    if (VAR_7 == VAR_2.sram)
    {

      VAR_4[VAR_6++] = 0xff;
    }
    else
    {

      VAR_4[VAR_6++] = ((VAR_7 - VAR_0.rom) >> 16) & 0xff;
    }
  }


  FUNC_0(VAR_0.hw.regs, sizeof(VAR_0.hw.regs));


  if (VAR_3)
  {
    FUNC_0(VAR_3->iram_rom, 0x800);
    FUNC_0(VAR_3->dram,sizeof(VAR_3->dram));
    FUNC_0(&VAR_3->ssp1601,sizeof(ssp1601_t));
  }

  return VAR_6;
}
