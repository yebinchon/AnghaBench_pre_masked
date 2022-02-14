
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


typedef int uint16 ;
struct TYPE_10__ {int l; } ;
struct TYPE_13__ {int w; TYPE_3__ byte; } ;
struct TYPE_14__ {TYPE_6__ poll; TYPE_2__* memory_map; } ;
struct TYPE_12__ {TYPE_6__ poll; } ;
struct TYPE_8__ {int boot; } ;
struct TYPE_11__ {scalar_t__ pending; scalar_t__ cycles; scalar_t__ stopwatch; scalar_t__ timer; TYPE_6__* regs; scalar_t__ prg_ram; TYPE_1__ cartridge; scalar_t__ dmna; } ;
struct TYPE_9__ {scalar_t__ base; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_7__ VAR_0 ;
 int FUNC_3 (TYPE_6__*,int ,int) ;
 int FUNC_4 () ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_5 (int ) ;

void FUNC_6(int VAR_3)
{

  if (VAR_3)
  {
    int VAR_4;


    FUNC_3(VAR_2.regs, 0, sizeof(VAR_2.regs));


    VAR_2.dmna = 0;


    *(uint16 *)(VAR_0.memory_map[0].base + 0x70) = 0x00FF;
    *(uint16 *)(VAR_0.memory_map[0].base + 0x72) = 0xFFFF;


    VAR_2.regs[0x00>>1].w = 0x0002;
    VAR_2.regs[0x02>>1].w = 0x0001;


    FUNC_5(0);


    for (VAR_4=VAR_2.cartridge.boot+0x02; VAR_4<VAR_2.cartridge.boot+0x20; VAR_4+=4)
    {

      VAR_0.memory_map[VAR_4].base = VAR_2.prg_ram;
      VAR_0.memory_map[VAR_4+1].base = VAR_2.prg_ram + 0x10000;
    }
  }
  else
  {

    FUNC_3(&VAR_2.regs[0x04>>1], 0, sizeof(VAR_2.regs) - 4);
  }


  VAR_2.regs[0x08>>1].w = 0xffff;
  VAR_2.regs[0x0a>>1].w = 0xffff;
  VAR_2.regs[0x36>>1].w = 0x0100;
  VAR_2.regs[0x40>>1].w = 0x000f;
  VAR_2.regs[0x42>>1].w = 0xffff;
  VAR_2.regs[0x44>>1].w = 0xffff;
  VAR_2.regs[0x46>>1].w = 0xffff;
  VAR_2.regs[0x48>>1].w = 0xffff;
  VAR_2.regs[0x4a>>1].w = 0xffff;


  VAR_2.regs[0x06>>1].byte.l = 0x01;


  VAR_2.timer = 0;
  VAR_2.stopwatch = 0;


  VAR_2.cycles = 0;


  VAR_2.pending = 0;


  FUNC_3(&VAR_0.poll, 0, sizeof(VAR_0.poll));
  FUNC_3(&VAR_1.poll, 0, sizeof(VAR_1.poll));


  FUNC_1();
  FUNC_0();
  FUNC_2();
  FUNC_4();
}
