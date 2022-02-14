
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
struct TYPE_14__ {TYPE_2__* memory_map; } ;
struct TYPE_13__ {TYPE_3__* memory_map; } ;
struct TYPE_8__ {int boot; } ;
struct TYPE_12__ {int * bram; int * word_ram_2M; int * word_ram; int * prg_ram; int * bootrom; TYPE_1__ cartridge; } ;
struct TYPE_11__ {int * write; int * read; } ;
struct TYPE_10__ {int * write16; int * write8; int * read16; int * read8; int * base; } ;
struct TYPE_9__ {int * write16; int * write8; int * read16; int * read8; int * base; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_7__ VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (int *,int,int) ;
 int * VAR_7 ;
 int * VAR_8 ;
 TYPE_6__ VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 TYPE_5__ VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 TYPE_4__* VAR_19 ;
 int * VAR_20 ;

void FUNC_4(void)
{
  int VAR_21;






  uint8 VAR_22 = VAR_14.cartridge.boot;


  FUNC_0();


  for (VAR_21=VAR_22; VAR_21<VAR_22+0x20; VAR_21++)
  {
    if (VAR_21 & 2)
    {

      VAR_4.memory_map[VAR_21].base = VAR_14.prg_ram + ((VAR_21 & 1) << 16);
      VAR_4.memory_map[VAR_21].read8 = ((void*)0);
      VAR_4.memory_map[VAR_21].read16 = ((void*)0);
      VAR_4.memory_map[VAR_21].write8 = ((void*)0);
      VAR_4.memory_map[VAR_21].write16 = ((void*)0);
      VAR_19[VAR_21].read = ((void*)0);
      VAR_19[VAR_21].write = ((void*)0);

    }
    else
    {


      VAR_4.memory_map[VAR_21].base = VAR_14.bootrom + ((VAR_21 & 1) << 16);
      VAR_4.memory_map[VAR_21].read8 = ((void*)0);
      VAR_4.memory_map[VAR_21].read16 = ((void*)0);
      VAR_4.memory_map[VAR_21].write8 = VAR_6;
      VAR_4.memory_map[VAR_21].write16 = VAR_5;
      VAR_19[VAR_21].read = ((void*)0);
      VAR_19[VAR_21].write = VAR_20;
    }
  }


  for (VAR_21=VAR_22+0x20; VAR_21<VAR_22+0x40; VAR_21++)
  {
    VAR_4.memory_map[VAR_21].base = VAR_14.word_ram_2M + ((VAR_21 & 3) << 16);
    VAR_4.memory_map[VAR_21].read8 = ((void*)0);
    VAR_4.memory_map[VAR_21].read16 = ((void*)0);
    VAR_4.memory_map[VAR_21].write8 = ((void*)0);
    VAR_4.memory_map[VAR_21].write16 = ((void*)0);
    VAR_19[VAR_21].read = ((void*)0);
    VAR_19[VAR_21].write = ((void*)0);
  }






  for (VAR_21=0x00; VAR_21<0x08; VAR_21++)
  {
    VAR_9.memory_map[VAR_21].base = VAR_14.prg_ram + (VAR_21 << 16);
    VAR_9.memory_map[VAR_21].read8 = ((void*)0);
    VAR_9.memory_map[VAR_21].read16 = ((void*)0);


    VAR_9.memory_map[VAR_21].write8 = (VAR_21 < 0x02) ? VAR_7 : ((void*)0);
    VAR_9.memory_map[VAR_21].write16 = (VAR_21 < 0x02) ? VAR_8 : ((void*)0);
  }


  for (VAR_21=0x08; VAR_21<0x0c; VAR_21++)
  {
    VAR_9.memory_map[VAR_21].base = VAR_14.word_ram_2M + ((VAR_21 & 3) << 16);
    VAR_9.memory_map[VAR_21].read8 = ((void*)0);
    VAR_9.memory_map[VAR_21].read16 = ((void*)0);
    VAR_9.memory_map[VAR_21].write8 = ((void*)0);
    VAR_9.memory_map[VAR_21].write16 = ((void*)0);
  }


  for (VAR_21=0x0c; VAR_21<0xfd; VAR_21++)
  {
    VAR_9.memory_map[VAR_21].base = VAR_14.word_ram_2M + ((VAR_21 & 3) << 16);
    VAR_9.memory_map[VAR_21].read8 = VAR_11;
    VAR_9.memory_map[VAR_21].read16 = VAR_10;
    VAR_9.memory_map[VAR_21].write8 = VAR_13;
    VAR_9.memory_map[VAR_21].write16 = VAR_12;
  }


  for (VAR_21=0xfd; VAR_21<0xff; VAR_21++)
  {
    VAR_9.memory_map[VAR_21].base = ((void*)0);
    VAR_9.memory_map[VAR_21].read8 = VAR_0;
    VAR_9.memory_map[VAR_21].read16 = VAR_1;
    VAR_9.memory_map[VAR_21].write8 = VAR_2;
    VAR_9.memory_map[VAR_21].write16 = VAR_3;
  }


  VAR_9.memory_map[0xff].base = ((void*)0);
  VAR_9.memory_map[0xff].read8 = VAR_15;
  VAR_9.memory_map[0xff].read16 = VAR_16;
  VAR_9.memory_map[0xff].write8 = VAR_17;
  VAR_9.memory_map[0xff].write16 = VAR_18;


  FUNC_1();
  FUNC_2();


  FUNC_3(VAR_14.prg_ram, 0x00, sizeof(VAR_14.prg_ram));
  FUNC_3(VAR_14.word_ram, 0x00, sizeof(VAR_14.word_ram));
  FUNC_3(VAR_14.word_ram_2M, 0x00, sizeof(VAR_14.word_ram_2M));
  FUNC_3(VAR_14.bram, 0x00, sizeof(VAR_14.bram));
}
