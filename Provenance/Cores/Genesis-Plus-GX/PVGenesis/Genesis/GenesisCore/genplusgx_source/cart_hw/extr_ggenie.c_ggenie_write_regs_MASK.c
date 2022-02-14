
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int rom; } ;
struct TYPE_7__ {unsigned int* regs; int* addr; int* data; int rom; } ;
struct TYPE_6__ {TYPE_1__* memory_map; } ;
struct TYPE_5__ {int write16; int write8; int * read16; int * read8; int base; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_9, unsigned int VAR_10)
{

  VAR_1.regs[VAR_9] = VAR_10;


  if (VAR_9 == 0)
  {

    if (VAR_10 & 0x400)
    {

      VAR_6.memory_map[0].base = VAR_0.rom;
      VAR_6.memory_map[0].read8 = ((void*)0);
      VAR_6.memory_map[0].read16 = ((void*)0);
    }
    else
    {

      VAR_6.memory_map[0].base = VAR_1.rom;
      VAR_6.memory_map[0].read8 = ((void*)0);
      VAR_6.memory_map[0].read16 = ((void*)0);


      if (VAR_10 & 0x200)
      {


        VAR_6.memory_map[0].read8 = VAR_2;
        VAR_6.memory_map[0].read16 = VAR_3;
      }
    }


    if (VAR_10 & 0x100)
    {


      VAR_1.addr[0] = ((VAR_1.regs[2] & 0x3f) << 16) | VAR_1.regs[3];
      VAR_1.addr[1] = ((VAR_1.regs[5] & 0x3f) << 16) | VAR_1.regs[6];
      VAR_1.addr[2] = ((VAR_1.regs[8] & 0x3f) << 16) | VAR_1.regs[9];
      VAR_1.addr[3] = ((VAR_1.regs[11] & 0x3f) << 16) | VAR_1.regs[12];
      VAR_1.addr[4] = ((VAR_1.regs[14] & 0x3f) << 16) | VAR_1.regs[15];
      VAR_1.addr[5] = ((VAR_1.regs[17] & 0x3f) << 16) | VAR_1.regs[18];


      VAR_1.data[0] = VAR_1.regs[4];
      VAR_1.data[1] = VAR_1.regs[7];
      VAR_1.data[2] = VAR_1.regs[10];
      VAR_1.data[3] = VAR_1.regs[13];
      VAR_1.data[4] = VAR_1.regs[16];
      VAR_1.data[5] = VAR_1.regs[19];


      VAR_6.memory_map[0].write8 = VAR_8;
      VAR_6.memory_map[0].write16 = VAR_7;




      FUNC_0(1);
    }
    else
    {
      VAR_6.memory_map[0].write8 = VAR_4;
      VAR_6.memory_map[0].write16 = VAR_5;
    }
  }


  else if (VAR_9 == 1)
  {
    VAR_1.regs[1] |= 1;
  }
}
