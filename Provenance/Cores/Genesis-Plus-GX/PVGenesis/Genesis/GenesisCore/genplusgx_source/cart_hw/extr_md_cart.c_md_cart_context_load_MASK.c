
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
typedef int ssp1601_t ;
struct TYPE_9__ {int * regs; } ;
struct TYPE_14__ {scalar_t__ rom; TYPE_2__ hw; } ;
struct TYPE_13__ {TYPE_1__* memory_map; } ;
struct TYPE_12__ {scalar_t__ sram; } ;
struct TYPE_11__ {int ssp1601; int * dram; int * iram_rom; } ;
struct TYPE_10__ {void* write; int * read; } ;
struct TYPE_8__ {scalar_t__ base; int write16; void* write8; int * read16; int * read8; } ;


 TYPE_7__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 TYPE_6__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 TYPE_5__ VAR_4 ;
 void* VAR_5 ;
 int * VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 TYPE_4__* VAR_9 ;
 TYPE_3__* VAR_10 ;
 void* VAR_11 ;

int FUNC_1(uint8 *VAR_12)
{
  int VAR_13;
  int VAR_14 = 0;
  uint8 VAR_15;


  for (VAR_13=0; VAR_13<0x40; VAR_13++)
  {

    VAR_15 = VAR_12[VAR_14++];

    if (VAR_15 == 0xff)
    {

      VAR_1.memory_map[VAR_13].base = VAR_4.sram;
      VAR_1.memory_map[VAR_13].read8 = VAR_5;
      VAR_1.memory_map[VAR_13].read16 = VAR_6;
      VAR_1.memory_map[VAR_13].write8 = VAR_7;
      VAR_1.memory_map[VAR_13].write16 = VAR_8;
      VAR_10[VAR_13].read = VAR_5;
      VAR_10[VAR_13].write = VAR_7;

    }
    else
    {

      if (VAR_1.memory_map[VAR_13].base == VAR_4.sram)
      {
        VAR_1.memory_map[VAR_13].read8 = ((void*)0);
        VAR_1.memory_map[VAR_13].read16 = ((void*)0);
        VAR_1.memory_map[VAR_13].write8 = VAR_3;
        VAR_1.memory_map[VAR_13].write16 = VAR_2;
        VAR_10[VAR_13].read = ((void*)0);
        VAR_10[VAR_13].write = VAR_11;
      }


      VAR_1.memory_map[VAR_13].base = VAR_0.rom + (VAR_15 << 16);
    }
  }


  FUNC_0(VAR_0.hw.regs, sizeof(VAR_0.hw.regs));


  if (VAR_9)
  {
    FUNC_0(VAR_9->iram_rom, 0x800);
    FUNC_0(VAR_9->dram,sizeof(VAR_9->dram));
    FUNC_0(&VAR_9->ssp1601,sizeof(ssp1601_t));
  }

  return VAR_14;
}
