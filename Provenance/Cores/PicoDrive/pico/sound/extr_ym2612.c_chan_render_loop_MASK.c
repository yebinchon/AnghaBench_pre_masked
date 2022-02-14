
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pack; scalar_t__ eg_timer; scalar_t__ eg_timer_add; unsigned int vol_out1; unsigned int vol_out2; unsigned int vol_out3; unsigned int vol_out4; int op1_out; int mem; int algo; scalar_t__ incr4; int phase4; scalar_t__ incr3; int phase3; scalar_t__ incr2; int phase2; scalar_t__ incr1; int phase1; TYPE_1__* CH; int eg_cnt; scalar_t__ lfo_inc; scalar_t__ lfo_cnt; } ;
typedef TYPE_2__ chan_rend_context ;
struct TYPE_7__ {scalar_t__ state; } ;
struct TYPE_5__ {int ALGO; TYPE_3__* SLOT; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,unsigned int,int) ;
 scalar_t__ FUNC_2 (int ,unsigned int,int) ;
 void* FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_4(chan_rend_context *VAR_7, int *VAR_8, int VAR_9)
{
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
 {
  int VAR_11 = 0;
  unsigned int VAR_12, VAR_13, VAR_14;

  if (VAR_7->pack & 8) {
   VAR_7->pack = (VAR_7->pack&0xffff) | (FUNC_0(VAR_7->pack >> 16, VAR_7->lfo_cnt, VAR_7->lfo_cnt + VAR_7->lfo_inc) << 16);
   VAR_7->lfo_cnt += VAR_7->lfo_inc;
  }

  VAR_7->eg_timer += VAR_7->eg_timer_add;
  while (VAR_7->eg_timer >= VAR_1)
  {
   VAR_7->eg_timer -= VAR_1;
   VAR_7->eg_cnt++;

   if (VAR_7->CH->SLOT[VAR_3].state != VAR_0) VAR_7->vol_out1 = FUNC_3(&VAR_7->CH->SLOT[VAR_3], VAR_7->eg_cnt);
   if (VAR_7->CH->SLOT[VAR_4].state != VAR_0) VAR_7->vol_out2 = FUNC_3(&VAR_7->CH->SLOT[VAR_4], VAR_7->eg_cnt);
   if (VAR_7->CH->SLOT[VAR_5].state != VAR_0) VAR_7->vol_out3 = FUNC_3(&VAR_7->CH->SLOT[VAR_5], VAR_7->eg_cnt);
   if (VAR_7->CH->SLOT[VAR_6].state != VAR_0) VAR_7->vol_out4 = FUNC_3(&VAR_7->CH->SLOT[VAR_6], VAR_7->eg_cnt);
  }

  if (VAR_7->pack & 4) continue;


  VAR_12 = VAR_7->vol_out1;
  if ( (VAR_7->pack & 8) && (VAR_7->pack&(1<<(VAR_3+8))) ) VAR_12 += VAR_7->pack >> (((VAR_7->pack&0xc0)>>6)+24);

  if( VAR_12 < VAR_2 )
  {
   int VAR_15 = 0;

   if (VAR_7->pack&0xf000) VAR_15 = ((VAR_7->op1_out>>16) + ((VAR_7->op1_out<<16)>>16)) << ((VAR_7->pack&0xf000)>>12);
   VAR_7->op1_out <<= 16;
   VAR_7->op1_out |= (unsigned short)FUNC_2(VAR_7->phase1, VAR_12, VAR_15);
  } else {
   VAR_7->op1_out <<= 16;
  }

  VAR_12 = VAR_7->vol_out3;
  VAR_13 = VAR_7->vol_out2;
  VAR_14 = VAR_7->vol_out4;

  if (VAR_7->pack & 8) {
   unsigned int VAR_16 = VAR_7->pack >> (((VAR_7->pack&0xc0)>>6)+24);
   if (VAR_7->pack & (1<<(VAR_5+8))) VAR_12 += VAR_16;
   if (VAR_7->pack & (1<<(VAR_4+8))) VAR_13 += VAR_16;
   if (VAR_7->pack & (1<<(VAR_6+8))) VAR_14 += VAR_16;
  }

  switch( VAR_7->CH->ALGO )
  {
   case 0:
   {

    int VAR_17,VAR_18,VAR_19=0;
    VAR_17 = VAR_7->mem;
    VAR_18 = VAR_7->op1_out>>16;
    if( VAR_12 < VAR_2 ) {
     VAR_19 = FUNC_1(VAR_7->phase3, VAR_12, VAR_17);
    }
    if( VAR_13 < VAR_2 ) {
     VAR_7->mem = FUNC_1(VAR_7->phase2, VAR_13, VAR_18);
    }
    else VAR_7->mem = 0;
    if( VAR_14 < VAR_2 ) {
     VAR_11 = FUNC_1(VAR_7->phase4, VAR_14, VAR_19);
    }
    break;
   }
   case 1:
   {


    int VAR_20,VAR_21=0;
    VAR_20 = VAR_7->mem;
    VAR_7->mem = VAR_7->op1_out>>16;
    if( VAR_12 < VAR_2 ) {
     VAR_21 = FUNC_1(VAR_7->phase3, VAR_12, VAR_20);
    }
    if( VAR_13 < VAR_2 ) {
     VAR_7->mem+= FUNC_1(VAR_7->phase2, VAR_13, 0);
    }
    if( VAR_14 < VAR_2 ) {
     VAR_11 = FUNC_1(VAR_7->phase4, VAR_14, VAR_21);
    }
    break;
   }
   case 2:
   {


    int VAR_22,VAR_23;
    VAR_22 = VAR_7->mem;
    VAR_23 = VAR_7->op1_out>>16;
    if( VAR_12 < VAR_2 ) {
     VAR_23 += FUNC_1(VAR_7->phase3, VAR_12, VAR_22);
    }
    if( VAR_13 < VAR_2 ) {
     VAR_7->mem = FUNC_1(VAR_7->phase2, VAR_13, 0);
    }
    else VAR_7->mem = 0;
    if( VAR_14 < VAR_2 ) {
     VAR_11 = FUNC_1(VAR_7->phase4, VAR_14, VAR_23);
    }
    break;
   }
   case 3:
   {


    int VAR_24,VAR_25;
    VAR_25 = VAR_7->mem;
    VAR_24 = VAR_7->op1_out>>16;
    if( VAR_12 < VAR_2 ) {
     VAR_25 += FUNC_1(VAR_7->phase3, VAR_12, 0);
    }
    if( VAR_13 < VAR_2 ) {
     VAR_7->mem = FUNC_1(VAR_7->phase2, VAR_13, VAR_24);
    }
    else VAR_7->mem = 0;
    if( VAR_14 < VAR_2 ) {
     VAR_11 = FUNC_1(VAR_7->phase4, VAR_14, VAR_25);
    }
    break;
   }
   case 4:
   {



    int VAR_26,VAR_27=0;
    VAR_26 = VAR_7->op1_out>>16;
    if( VAR_12 < VAR_2 ) {
     VAR_27 = FUNC_1(VAR_7->phase3, VAR_12, 0);
    }
    if( VAR_13 < VAR_2 ) {
     VAR_11 = FUNC_1(VAR_7->phase2, VAR_13, VAR_26);
    }
    if( VAR_14 < VAR_2 ) {
     VAR_11+= FUNC_1(VAR_7->phase4, VAR_14, VAR_27);
    }
    break;
   }
   case 5:
   {



    int VAR_28,VAR_29,VAR_30;
    VAR_28 = VAR_7->mem;
    VAR_7->mem = VAR_29 = VAR_30 = VAR_7->op1_out>>16;
    if( VAR_12 < VAR_2 ) {
     VAR_11 = FUNC_1(VAR_7->phase3, VAR_12, VAR_28);
    }
    if( VAR_13 < VAR_2 ) {
     VAR_11+= FUNC_1(VAR_7->phase2, VAR_13, VAR_29);
    }
    if( VAR_14 < VAR_2 ) {
     VAR_11+= FUNC_1(VAR_7->phase4, VAR_14, VAR_30);
    }
    break;
   }
   case 6:
   {




    int VAR_31;
    VAR_31 = VAR_7->op1_out>>16;
    if( VAR_12 < VAR_2 ) {
     VAR_11 = FUNC_1(VAR_7->phase3, VAR_12, 0);
    }
    if( VAR_13 < VAR_2 ) {
     VAR_11+= FUNC_1(VAR_7->phase2, VAR_13, VAR_31);
    }
    if( VAR_14 < VAR_2 ) {
     VAR_11+= FUNC_1(VAR_7->phase4, VAR_14, 0);
    }
    break;
   }
   case 7:
   {





    VAR_11 = VAR_7->op1_out>>16;
    if( VAR_12 < VAR_2 ) {
     VAR_11 += FUNC_1(VAR_7->phase3, VAR_12, 0);
    }
    if( VAR_13 < VAR_2 ) {
     VAR_11 += FUNC_1(VAR_7->phase2, VAR_13, 0);
    }
    if( VAR_14 < VAR_2 ) {
     VAR_11 += FUNC_1(VAR_7->phase4, VAR_14, 0);
    }
    break;
   }
  }



  if (VAR_11) {
   if (VAR_7->pack & 1) {
    if (VAR_7->pack & 0x20)
     VAR_8[VAR_10*2] += VAR_11;
    if (VAR_7->pack & 0x10)
     VAR_8[VAR_10*2+1] += VAR_11;
   } else {
    VAR_8[VAR_10] += VAR_11;
   }
   VAR_7->algo = 8;
  }


  VAR_7->phase1 += VAR_7->incr1;
  VAR_7->phase2 += VAR_7->incr2;
  VAR_7->phase3 += VAR_7->incr3;
  VAR_7->phase4 += VAR_7->incr4;
 }
}
