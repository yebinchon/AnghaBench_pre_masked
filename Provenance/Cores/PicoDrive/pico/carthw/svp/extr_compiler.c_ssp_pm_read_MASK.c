
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {scalar_t__ rom; } ;
struct TYPE_7__ {int v; } ;
struct TYPE_6__ {int emu_status; int* pmac_read; } ;
struct TYPE_5__ {scalar_t__ dram; } ;


 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_3__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;

u32 FUNC_1(int VAR_6)
{
 u32 VAR_7 = 0, VAR_8;

 if (VAR_4->emu_status & VAR_2)
 {
  VAR_4->pmac_read[VAR_6] = VAR_3.v;
  VAR_4->emu_status &= ~VAR_2;
  return 0;
 }


 VAR_4->emu_status &= ~VAR_1;

 VAR_8 = VAR_4->pmac_read[VAR_6]>>16;
 if ((VAR_8 & 0xfff0) == 0x0800)
 {
  VAR_7 = ((unsigned short *)VAR_0.rom)[VAR_4->pmac_read[VAR_6]&0xfffff];
  VAR_4->pmac_read[VAR_6] += 1;
 }
 else if ((VAR_8 & 0x47ff) == 0x0018)
 {
  unsigned short *VAR_9 = (unsigned short *)VAR_5->dram;
  int VAR_10 = FUNC_0(VAR_8);
  VAR_7 = VAR_9[VAR_4->pmac_read[VAR_6]&0xffff];
  VAR_4->pmac_read[VAR_6] += VAR_10;
 }


 VAR_3.v = VAR_4->pmac_read[VAR_6];

 return VAR_7;
}
