
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned short u32 ;
struct TYPE_8__ {int v; } ;
struct TYPE_5__ {int iram_dirty; } ;
struct TYPE_7__ {int emu_status; int* pmac_write; TYPE_1__ drc; } ;
struct TYPE_6__ {scalar_t__ iram_rom; scalar_t__ dram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned short,unsigned short) ;
 TYPE_4__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;

void FUNC_2(u32 VAR_5, int VAR_6)
{
 unsigned short *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_3->emu_status & VAR_1)
 {
  VAR_3->pmac_write[VAR_6] = VAR_2.v;
  VAR_3->emu_status &= ~VAR_1;
  return;
 }


 VAR_3->emu_status &= ~VAR_0;

 VAR_7 = (unsigned short *)VAR_4->dram;
 VAR_8 = VAR_3->pmac_write[VAR_6]>>16;
 VAR_9 = VAR_3->pmac_write[VAR_6]&0xffff;
 if ((VAR_8 & 0x43ff) == 0x0018)
 {
  int VAR_10 = FUNC_0(VAR_8);
  if (VAR_8 & 0x0400) {
         FUNC_1(VAR_7[VAR_9], VAR_5);
  } else VAR_7[VAR_9] = VAR_5;
  VAR_3->pmac_write[VAR_6] += VAR_10;
 }
 else if ((VAR_8 & 0xfbff) == 0x4018)
 {
  if (VAR_8 & 0x0400) {
         FUNC_1(VAR_7[VAR_9], VAR_5);
  } else VAR_7[VAR_9] = VAR_5;
  VAR_3->pmac_write[VAR_6] += (VAR_9&1) ? 0x1f : 1;
 }
 else if ((VAR_8 & 0x47ff) == 0x001c)
 {
  int VAR_11 = FUNC_0(VAR_8);
  ((unsigned short *)VAR_4->iram_rom)[VAR_9&0x3ff] = VAR_5;
  VAR_3->pmac_write[VAR_6] += VAR_11;
  VAR_3->drc.iram_dirty = 1;
 }

 VAR_2.v = VAR_3->pmac_write[VAR_6];
}
