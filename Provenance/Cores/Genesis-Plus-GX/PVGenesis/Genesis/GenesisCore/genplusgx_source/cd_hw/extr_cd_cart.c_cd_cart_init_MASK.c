
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int T_SRAM ;
struct TYPE_10__ {TYPE_2__* memory_map; } ;
struct TYPE_6__ {int id; int mask; int prot; scalar_t__ boot; int * area; } ;
struct TYPE_9__ {TYPE_1__ cartridge; } ;
struct TYPE_8__ {void* write; void* read; } ;
struct TYPE_7__ {int write16; void* write8; int read16; void* read8; int * base; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 TYPE_5__ VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int,int) ;
 TYPE_4__ VAR_13 ;
 int VAR_14 ;
 TYPE_3__* VAR_15 ;
 void* VAR_16 ;

void FUNC_2(void)
{
  int VAR_17;


  if (VAR_13.cartridge.boot)
  {

    VAR_13.cartridge.id = 0;
  }
  else
  {

    VAR_13.cartridge.id = 6;
  }


  if (VAR_13.cartridge.id)
  {

    FUNC_1(&VAR_14, 0, sizeof (T_SRAM));


    FUNC_1(VAR_13.cartridge.area, 0x00, sizeof(VAR_13.cartridge.area));


    VAR_13.cartridge.mask = (1 << (VAR_13.cartridge.id + 13)) - 1;


    VAR_13.cartridge.prot = 1;


    for (VAR_17=0x40; VAR_17<0x60; VAR_17++)
    {
      VAR_10.memory_map[VAR_17].base = ((void*)0);
      VAR_10.memory_map[VAR_17].read8 = VAR_0;
      VAR_10.memory_map[VAR_17].read16 = VAR_1;
      VAR_10.memory_map[VAR_17].write8 = VAR_12;
      VAR_10.memory_map[VAR_17].write16 = VAR_11;
      VAR_15[VAR_17].read = VAR_0;
      VAR_15[VAR_17].write = VAR_16;
    }


    for (VAR_17=0x60; VAR_17<0x70; VAR_17++)
    {
      VAR_10.memory_map[VAR_17].base = ((void*)0);
      VAR_10.memory_map[VAR_17].read8 = VAR_6;
      VAR_10.memory_map[VAR_17].read16 = VAR_7;
      VAR_10.memory_map[VAR_17].write8 = VAR_8;
      VAR_10.memory_map[VAR_17].write16 = VAR_9;
      VAR_15[VAR_17].read = VAR_6;
      VAR_15[VAR_17].write = VAR_8;
    }


    for (VAR_17=0x70; VAR_17<0x80; VAR_17++)
    {
      VAR_10.memory_map[VAR_17].base = ((void*)0);
      VAR_10.memory_map[VAR_17].read8 = VAR_2;
      VAR_10.memory_map[VAR_17].read16 = VAR_3;
      VAR_10.memory_map[VAR_17].write8 = VAR_4;
      VAR_10.memory_map[VAR_17].write16 = VAR_5;
      VAR_15[VAR_17].read = VAR_2;
      VAR_15[VAR_17].write = VAR_4;
    }
  }
  else
  {

    FUNC_0();


    if (!VAR_13.cartridge.boot)
    {
      for (VAR_17=0; VAR_17<0x40; VAR_17++)
      {
        VAR_10.memory_map[VAR_17+0x40].base = VAR_10.memory_map[VAR_17].base;
        VAR_10.memory_map[VAR_17+0x40].read8 = VAR_10.memory_map[VAR_17].read8;
        VAR_10.memory_map[VAR_17+0x40].read16 = VAR_10.memory_map[VAR_17].read16;
        VAR_10.memory_map[VAR_17+0x40].write8 = VAR_10.memory_map[VAR_17].write8;
        VAR_10.memory_map[VAR_17+0x40].write16 = VAR_10.memory_map[VAR_17].write16;
        VAR_15[VAR_17+0x40].read = VAR_15[VAR_17].read;
        VAR_15[VAR_17+0x40].write = VAR_15[VAR_17].write;
      }
    }
  }
}
