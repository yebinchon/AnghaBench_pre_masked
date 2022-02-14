
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_11__ {int pack; int vol_out1; int vol_out2; int vol_out3; int vol_out4; int algo; int incr1; int incr2; int incr3; int incr4; int phase4; TYPE_2__* CH; int phase3; int phase2; int phase1; int mem; int op1_out; int eg_timer; int eg_cnt; scalar_t__ lfo_inc; int lfo_cnt; } ;
struct TYPE_7__ {int eg_timer; int eg_cnt; int lfo_cnt; } ;
struct TYPE_10__ {int slot_mask; TYPE_1__ OPN; TYPE_2__* CH; } ;
struct TYPE_9__ {int tl; int* DT; int mul; int Incr; int state; int phase; scalar_t__ volume; } ;
struct TYPE_8__ {int AMmasks; int ams; int FB; int ALGO; int pms; int block_fnum; TYPE_3__* SLOT; int mem_value; int op1_out; } ;
typedef int INT32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_5__*,int*,int) ;
 TYPE_5__ VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 TYPE_4__ VAR_9 ;

__attribute__((used)) static int FUNC_1(int *VAR_10, int VAR_11, int VAR_12, UINT32 VAR_13)
{
 VAR_4.CH = &VAR_9[VAR_12];
 VAR_4.mem = VAR_4.CH->mem_value;
 VAR_4.lfo_cnt = VAR_9;

 VAR_13 &= 0x35;

 if (VAR_4.lfo_inc) {
  VAR_13 |= 8;
  VAR_13 |= VAR_6 << 16;
  VAR_13 |= VAR_4.CH->AMmasks << 8;
  if (VAR_4.CH->ams == 8)
       VAR_13 &= ~0xf00;
  else VAR_13 |= (VAR_4.CH->ams&3)<<6;
 }
 VAR_13 |= (VAR_4.CH->FB&0xf)<<12;
 VAR_4.pack = VAR_13;

 VAR_4.eg_cnt = VAR_9;
 VAR_4.eg_timer = VAR_9;


 VAR_4.phase1 = VAR_4.CH->SLOT[VAR_0].phase;
 VAR_4.phase2 = VAR_4.CH->SLOT[VAR_1].phase;
 VAR_4.phase3 = VAR_4.CH->SLOT[VAR_2].phase;
 VAR_4.phase4 = VAR_4.CH->SLOT[VAR_3].phase;


 VAR_4.vol_out1 = VAR_4.CH->SLOT[VAR_0].tl + ((UINT32)VAR_4.CH->SLOT[VAR_0].volume);
 VAR_4.vol_out2 = VAR_4.CH->SLOT[VAR_1].tl + ((UINT32)VAR_4.CH->SLOT[VAR_1].volume);
 VAR_4.vol_out3 = VAR_4.CH->SLOT[VAR_2].tl + ((UINT32)VAR_4.CH->SLOT[VAR_2].volume);
 VAR_4.vol_out4 = VAR_4.CH->SLOT[VAR_3].tl + ((UINT32)VAR_4.CH->SLOT[VAR_3].volume);

 VAR_4.op1_out = VAR_4.CH->op1_out;
 VAR_4.algo = VAR_4.CH->ALGO & 7;

 if(VAR_4.CH->pms)
 {

  UINT32 VAR_14 = VAR_4.CH->block_fnum;

  UINT32 VAR_15 = ((VAR_14 & 0x7f0) >> 4) * 32 * 8;
  INT32 VAR_16 = VAR_7[ VAR_15 + VAR_4.CH->pms + ((VAR_4.pack>>16)&0xff) ];

  if (VAR_16)
  {
   UINT8 VAR_17;
   UINT32 VAR_18;
   int VAR_19,VAR_20;

   VAR_17 = VAR_14 >> 11;
   VAR_14 = VAR_14*2 + VAR_16;

   VAR_18 = VAR_14 & 0xfff;


   VAR_19 = (VAR_17<<2) | VAR_8[VAR_18 >> 8];

   VAR_20 = VAR_5[VAR_18]>>(7-VAR_17);

   VAR_4.incr1 = ((VAR_20+VAR_4.CH->SLOT[VAR_0].DT[VAR_19])*VAR_4.CH->SLOT[VAR_0].mul) >> 1;
   VAR_4.incr2 = ((VAR_20+VAR_4.CH->SLOT[VAR_1].DT[VAR_19])*VAR_4.CH->SLOT[VAR_1].mul) >> 1;
   VAR_4.incr3 = ((VAR_20+VAR_4.CH->SLOT[VAR_2].DT[VAR_19])*VAR_4.CH->SLOT[VAR_2].mul) >> 1;
   VAR_4.incr4 = ((VAR_20+VAR_4.CH->SLOT[VAR_3].DT[VAR_19])*VAR_4.CH->SLOT[VAR_3].mul) >> 1;
  }
  else
  {
   VAR_4.incr1 = VAR_4.CH->SLOT[VAR_0].Incr;
   VAR_4.incr2 = VAR_4.CH->SLOT[VAR_1].Incr;
   VAR_4.incr3 = VAR_4.CH->SLOT[VAR_2].Incr;
   VAR_4.incr4 = VAR_4.CH->SLOT[VAR_3].Incr;
  }
 }
 else
 {
  VAR_4.incr1 = VAR_4.CH->SLOT[VAR_0].Incr;
  VAR_4.incr2 = VAR_4.CH->SLOT[VAR_1].Incr;
  VAR_4.incr3 = VAR_4.CH->SLOT[VAR_2].Incr;
  VAR_4.incr4 = VAR_4.CH->SLOT[VAR_3].Incr;
 }

 FUNC_0(&VAR_4, VAR_10, VAR_11);

 VAR_4.CH->op1_out = VAR_4.op1_out;
 VAR_4.CH->mem_value = VAR_4.mem;
 if (VAR_4.CH->SLOT[VAR_0].state | VAR_4.CH->SLOT[VAR_1].state | VAR_4.CH->SLOT[VAR_2].state | VAR_4.CH->SLOT[VAR_3].state)
 {
  VAR_4.CH->SLOT[VAR_0].phase = VAR_4.phase1;
  VAR_4.CH->SLOT[VAR_1].phase = VAR_4.phase2;
  VAR_4.CH->SLOT[VAR_2].phase = VAR_4.phase3;
  VAR_4.CH->SLOT[VAR_3].phase = VAR_4.phase4;
 }
 else
  VAR_9 &= ~(0xf << (VAR_12*4));

 return (VAR_4.algo & 8) >> 3;
}
