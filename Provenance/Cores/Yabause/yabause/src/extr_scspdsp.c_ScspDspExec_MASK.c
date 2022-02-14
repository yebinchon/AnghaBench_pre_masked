
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ira; size_t iwa; int bsel; int tra; int xsel; int ysel; size_t coef; int shift; int twa; size_t masa; int table; size_t ewa; scalar_t__ ewt; scalar_t__ adrl; scalar_t__ mwt; scalar_t__ mrd; scalar_t__ nxadr; scalar_t__ adreb; scalar_t__ frcl; scalar_t__ twt; scalar_t__ yrl; scalar_t__ zero; scalar_t__ negb; scalar_t__ iwt; } ;
union ScspDspInstruction {TYPE_1__ part; int all; } ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
typedef int s32 ;
struct TYPE_7__ {int * mpro; } ;
struct TYPE_6__ {int inputs; int* mems; int* mixs; int* exts; int mrd_value; int* temp; int mdec_ct; int b; int acc; int x; int y; int frc_reg; int* coef; int y_reg; int shifted; int* madrs; int adrs_reg; int rbl; int rbp; int* efreg; } ;
typedef TYPE_2__ ScspDsp ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 TYPE_3__ VAR_0 ;

void FUNC_3(ScspDsp* VAR_1, int VAR_2, u8 * VAR_3)
{
   u16* VAR_4 = (u16*)VAR_3;
   u64 VAR_5 = 0;

   union ScspDspInstruction VAR_6;
   VAR_6.all = VAR_0.mpro[VAR_2];

   if (VAR_6.part.ira >= 0 && VAR_6.part.ira <= 0x1f)
      VAR_1->inputs = VAR_1->mems[VAR_6.part.ira & 0x1f];
   else if (VAR_6.part.ira >= 0x20 && VAR_6.part.ira <= 0x2f)
      VAR_1->inputs = VAR_1->mixs[VAR_6.part.ira - 0x20] << 4;
   else if (VAR_6.part.ira == 0x30 || VAR_6.part.ira == 0x31)
      VAR_1->inputs = VAR_1->exts[(VAR_6.part.ira - 0x30) & 1];

   if (VAR_6.part.iwt)
      VAR_1->mems[VAR_6.part.iwa] = VAR_1->mrd_value;

   if (VAR_6.part.bsel == 0)
   {
      s32 VAR_7 = VAR_1->temp[(VAR_6.part.tra + VAR_1->mdec_ct) & 0x7f];

      if (VAR_7 & 0x800000)
         VAR_7 |= 0x3000000;

      VAR_1->b = VAR_7;
   }
   else if (VAR_6.part.bsel == 1)
      VAR_1->b = VAR_1->acc;

   if (VAR_6.part.negb)
      VAR_1->b = 0 - VAR_1->b;

   if (VAR_6.part.zero)
      VAR_1->b = 0;

   if (VAR_6.part.xsel == 0)
      VAR_1->x = VAR_1->temp[(VAR_6.part.tra + VAR_1->mdec_ct) & 0x7f];
   else if (VAR_6.part.xsel == 1)
      VAR_1->x = VAR_1->inputs;

   if (VAR_6.part.ysel == 0)
      VAR_1->y = VAR_1->frc_reg;
   else if (VAR_6.part.ysel == 1)
   {
      VAR_1->y = VAR_1->coef[VAR_6.part.coef] >> 3;

      if (VAR_1->coef[VAR_6.part.coef] & 0x8000)
         VAR_1->y |= 0xE000;
   }
   else if (VAR_6.part.ysel == 2)
      VAR_1->y = (VAR_1->y_reg >> 11) & 0x1FFF;
   else if (VAR_6.part.ysel == 3)
      VAR_1->y = (VAR_1->y_reg >> 4) & 0xFFF;

   if (VAR_6.part.yrl)
      VAR_1->y_reg = VAR_1->inputs;

   if (VAR_6.part.shift == 0)
      VAR_1->shifted = FUNC_2(VAR_1->acc);
   else if (VAR_6.part.shift == 1)
      VAR_1->shifted = FUNC_2(VAR_1->acc * 2);
   else if (VAR_6.part.shift == 2)
      VAR_1->shifted = (VAR_1->acc * 2) & 0xffffff;
   else if (VAR_6.part.shift == 2)
      VAR_1->shifted = VAR_1->acc & 0xffffff;

   VAR_5 = (u64)VAR_1->x * (u64)VAR_1->y;
   VAR_1->acc = (VAR_5 >> 12) + VAR_1->b;

   VAR_1->acc &= 0xffffff;

   if (VAR_1->acc & 0x800000)
      VAR_1->acc |= 0xff000000;

   if (VAR_6.part.twt)
      VAR_1->temp[(VAR_6.part.twa + VAR_1->mdec_ct) & 0x7f] = VAR_1->shifted;

   if (VAR_6.part.frcl)
   {
      if (VAR_6.part.shift == 3)
         VAR_1->frc_reg = VAR_1->shifted & 0xFFF;
      else
         VAR_1->frc_reg = (VAR_1->shifted >> 11) & 0x1FFF;
   }

   if (VAR_6.part.mrd || VAR_6.part.mwt)
   {
      u32 VAR_8 = VAR_1->madrs[VAR_6.part.masa];

      if (VAR_6.part.table == 0)
         VAR_8 += VAR_1->mdec_ct;

      if (VAR_6.part.adreb)
         VAR_8 += VAR_1->adrs_reg & 0xfff;

      if (VAR_6.part.nxadr)
         VAR_8 += 1;

      if (VAR_6.part.table == 0)
      {
         if (VAR_1->rbl == 0)
            VAR_8 &= 0x1fff;
         else if (VAR_1->rbl == 1)
            VAR_8 &= 0x3fff;
         else if (VAR_1->rbl == 2)
            VAR_8 &= 0x7fff;
         else if (VAR_1->rbl == 3)
            VAR_8 &= 0xffff;
      }
      else if (VAR_6.part.table == 1)
         VAR_8 &= 0xffff;

      VAR_8 += (VAR_1->rbp << 11) * 2;

      if (VAR_6.part.mrd)
      {
         u16 VAR_9 = VAR_4[VAR_8 & 0x7ffff];
         VAR_1->mrd_value = FUNC_0(VAR_9);
      }

      if (VAR_6.part.mwt)
      {
         s32 VAR_10 = VAR_1->shifted;
         VAR_10 = FUNC_1(VAR_10);
         VAR_4[VAR_8 & 0x7ffff] = VAR_10;
      }
   }

   if (VAR_6.part.adrl)
   {
      if (VAR_6.part.shift == 3)
         VAR_1->adrs_reg = VAR_1->inputs >> 16;
      else
         VAR_1->adrs_reg = (VAR_1->shifted >> 12) & 0xFFF;
   }

   if (VAR_6.part.ewt)
      VAR_1->efreg[VAR_6.part.ewa] = VAR_1->shifted >> 8;
}
