
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


typedef int uint32 ;
struct TYPE_12__ {int special; int mask; scalar_t__ rom; } ;
struct TYPE_11__ {scalar_t__ lock_on; } ;
struct TYPE_10__ {TYPE_1__* memory_map; } ;
struct TYPE_9__ {scalar_t__ sram; scalar_t__ on; } ;
struct TYPE_8__ {void* write; int * read; } ;
struct TYPE_7__ {void* write16; void* write8; int * read16; int * read8; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 TYPE_3__ VAR_7 ;
 void* VAR_8 ;
 int * VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 TYPE_2__* VAR_12 ;
 void* VAR_13 ;

__attribute__((used)) static void FUNC_0(uint32 VAR_14)
{
  int VAR_15;

  if (VAR_14 & 1)
  {
    if (VAR_7.on)
    {

      VAR_4.memory_map[0x20].base = VAR_7.sram;
      VAR_4.memory_map[0x20].read8 = VAR_8;
      VAR_4.memory_map[0x20].read16 = VAR_9;
      VAR_12[0x20].read = VAR_8;


      if (VAR_14 & 2)
      {
        VAR_4.memory_map[0x20].write8 = VAR_6;
        VAR_4.memory_map[0x20].write16 = VAR_5;
        VAR_12[0x20].write = VAR_13;
      }
      else
      {
        VAR_4.memory_map[0x20].write8 = VAR_10;
        VAR_4.memory_map[0x20].write16 = VAR_11;
        VAR_12[0x20].write = VAR_10;
      }
    }


    if ((VAR_2.special & VAR_0) && (VAR_3.lock_on == VAR_1))
    {

      for (VAR_15=0x30; VAR_15<0x40; VAR_15++)
      {
        VAR_4.memory_map[VAR_15].base = (VAR_2.rom + 0x900000) + ((VAR_15 & 3) << 16);
      }
    }
  }
  else
  {

    for (VAR_15=0x20; VAR_15<0x40; VAR_15++)
    {
      VAR_4.memory_map[VAR_15].base = VAR_2.rom + ((VAR_15<<16) & VAR_2.mask);
      VAR_4.memory_map[VAR_15].read8 = ((void*)0);
      VAR_4.memory_map[VAR_15].read16 = ((void*)0);
      VAR_12[VAR_15].read = ((void*)0);
      VAR_4.memory_map[VAR_15].write8 = VAR_6;
      VAR_4.memory_map[VAR_15].write16 = VAR_5;
      VAR_12[VAR_15].write = VAR_13;
    }
  }
}
