
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned short u32 ;
struct TYPE_8__ {scalar_t__ rom; } ;
struct TYPE_7__ {int v; } ;
struct TYPE_6__ {int emu_status; int* pmac_read; int* RAM1; int* pmac_write; } ;
struct TYPE_5__ {scalar_t__ iram_rom; scalar_t__ dram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int* VAR_3 ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (unsigned short,unsigned short) ;
 TYPE_3__ VAR_8 ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 TYPE_1__* VAR_11 ;

__attribute__((used)) static u32 FUNC_4(int VAR_12, int VAR_13, u32 VAR_14)
{
 if (VAR_10->emu_status & VAR_6)
 {

  if ((*(VAR_3-1) & 0xff0f) && (*(VAR_3-1) & 0xfff0)) {
   FUNC_1(VAR_2|VAR_1, "ssp FIXME: tried to set PM%i (%c) with non-blind i/o %08x @ %04x",
    VAR_12, VAR_13 ? 'w' : 'r', VAR_8.v, FUNC_0());
   VAR_10->emu_status &= ~VAR_6;
   return 0;
  }
  FUNC_1(VAR_2, "PM%i (%c) set to %08x @ %04x", VAR_12, VAR_13 ? 'w' : 'r', VAR_8.v, FUNC_0());
  VAR_10->pmac_read[VAR_13 ? VAR_12 + 6 : VAR_12] = VAR_8.v;
  VAR_10->emu_status &= ~VAR_6;
  if ((VAR_8.v & 0x7fffff) == 0x1c8000 || (VAR_8.v & 0x7fffff) == 0x1c8240) {
   FUNC_1(VAR_2, "ssp IRAM copy from %06x to %04x", (VAR_10->RAM1[0]-1)<<1, (VAR_8.v&0x7fff)<<1);



  }
  return 0;
 }


 if (VAR_10->emu_status & VAR_5) {
  FUNC_1(VAR_2|VAR_1, "ssp FIXME: PM%i (%c) with only addr set @ %04x",
   VAR_12, VAR_13 ? 'w' : 'r', FUNC_0());
  VAR_10->emu_status &= ~VAR_5;
 }

 if (VAR_12 == 4 || (VAR_9 & 0x60))
 {

  unsigned short *VAR_15 = (unsigned short *)VAR_11->dram;
  if (VAR_13)
  {
   int VAR_16 = VAR_10->pmac_write[VAR_12]>>16;
   int VAR_17 = VAR_10->pmac_write[VAR_12]&0xffff;
   if ((VAR_16 & 0xb800) == 0xb800)
     FUNC_1(VAR_2|VAR_1, "ssp FIXME: mode %04x", VAR_16);
   if ((VAR_16 & 0x43ff) == 0x0018)
   {
    int VAR_18 = FUNC_2(VAR_16);
    FUNC_1(VAR_2, "ssp PM%i DRAM w [%06x] %04x (inc %i, ovrw %i)",
     VAR_12, ((((VAR_16<<16)&0x7f0000)|VAR_17)<<1), VAR_14, VAR_18, (VAR_16>>10)&1);
    if (VAR_16 & 0x0400) {
           FUNC_3(VAR_15[VAR_17], VAR_14);
    } else VAR_15[VAR_17] = VAR_14;
    VAR_10->pmac_write[VAR_12] += VAR_18;
   }
   else if ((VAR_16 & 0xfbff) == 0x4018)
   {
    FUNC_1(VAR_2, "ssp PM%i DRAM w [%06x] %04x (cell inc, ovrw %i) @ %04x",
     VAR_12, ((((VAR_16<<16)&0x7f0000)|VAR_17)<<1), VAR_14, (VAR_16>>10)&1, FUNC_0());
    if (VAR_16 & 0x0400) {
           FUNC_3(VAR_15[VAR_17], VAR_14);
    } else VAR_15[VAR_17] = VAR_14;
    VAR_10->pmac_write[VAR_12] += (VAR_17&1) ? 31 : 1;
   }
   else if ((VAR_16 & 0x47ff) == 0x001c)
   {
    int VAR_19 = FUNC_2(VAR_16);
    if ((VAR_17&0xfc00) != 0x8000)
     FUNC_1(VAR_2|VAR_1, "ssp FIXME: invalid IRAM addr: %04x", VAR_17<<1);
    FUNC_1(VAR_2, "ssp IRAM w [%06x] %04x (inc %i)", (VAR_17<<1)&0x7ff, VAR_14, VAR_19);
    ((unsigned short *)VAR_11->iram_rom)[VAR_17&0x3ff] = VAR_14;
    VAR_10->pmac_write[VAR_12] += VAR_19;
   }
   else
   {
    FUNC_1(VAR_2|VAR_1, "ssp FIXME: PM%i unhandled write mode %04x, [%06x] %04x @ %04x",
      VAR_12, VAR_16, ((((VAR_16<<16)&0x7f0000)|VAR_17)<<1), VAR_14, FUNC_0());
   }
  }
  else
  {
   int VAR_20 = VAR_10->pmac_read[VAR_12]>>16;
   int VAR_21 = VAR_10->pmac_read[VAR_12]&0xffff;
   if ((VAR_20 & 0xfff0) == 0x0800)
   {
    FUNC_1(VAR_2, "ssp ROM  r [%06x] %04x", ((((VAR_20<<16)&0x7f0000)|VAR_21)<<1),
     ((unsigned short *)VAR_4.rom)[VAR_21|((VAR_20&0xf)<<16)]);
    VAR_10->pmac_read[VAR_12] += 1;
    VAR_14 = ((unsigned short *)VAR_4.rom)[VAR_21|((VAR_20&0xf)<<16)];
   }
   else if ((VAR_20 & 0x47ff) == 0x0018)
   {
    int VAR_22 = FUNC_2(VAR_20);
    FUNC_1(VAR_2, "ssp PM%i DRAM r [%06x] %04x (inc %i)", VAR_12, ((((VAR_20<<16)&0x7f0000)|VAR_21)<<1), VAR_15[VAR_21]);
    VAR_14 = VAR_15[VAR_21];
    VAR_10->pmac_read[VAR_12] += VAR_22;
   }
   else
   {
    FUNC_1(VAR_2|VAR_1, "ssp FIXME: PM%i unhandled read  mode %04x, [%06x] @ %04x",
      VAR_12, VAR_20, ((((VAR_20<<16)&0x7f0000)|VAR_21)<<1), FUNC_0());
    VAR_14 = 0;
   }
  }


  VAR_8.v = VAR_10->pmac_read[VAR_13 ? VAR_12 + 6 : VAR_12];

  return VAR_14;
 }

 return (u32)-1;
}
