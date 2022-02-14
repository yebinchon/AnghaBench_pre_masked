
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int twt; int xsel; int iwt; int table; int mwt; int mrd; int ewt; int adrl; int frcl; int yrl; int negb; int zero; int bsel; int nofl; int adreb; void* masa; void* coef; void* shift; void* ewa; void* iwa; void* ira; void* ysel; void* twa; void* tra; } ;
union ScspDspInstruction {scalar_t__ all; TYPE_1__ part; int member_0; } ;
typedef scalar_t__ u64 ;


 void* FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*) ;

u64 FUNC_2(char* VAR_0)
{
   union ScspDspInstruction VAR_1 = { 0 };

   char* VAR_2 = ((void*)0);

   if ((VAR_2 = FUNC_1(VAR_0, "tra")))
   {
      VAR_1.part.tra = FUNC_0(VAR_2);
   }

   if (FUNC_1(VAR_0, "twt"))
   {
      VAR_1.part.twt = 1;
   }

   if ((VAR_2 = FUNC_1(VAR_0, "twa")))
   {
      VAR_1.part.twa = FUNC_0(VAR_2);
   }

   if (FUNC_1(VAR_0, "xsel"))
   {
      VAR_1.part.xsel = 1;
   }

   if ((VAR_2 = FUNC_1(VAR_0, "ysel")))
   {
      VAR_1.part.ysel = FUNC_0(VAR_2);
   }

   if ((VAR_2 = FUNC_1(VAR_0, "ira")))
   {
      VAR_1.part.ira = FUNC_0(VAR_2);
   }

   if (FUNC_1(VAR_0, "iwt"))
   {
      VAR_1.part.iwt = 1;
   }

   if ((VAR_2 = FUNC_1(VAR_0, "iwa")))
   {
      VAR_1.part.iwa = FUNC_0(VAR_2);
   }

   if (FUNC_1(VAR_0, "table"))
   {
      VAR_1.part.table = 1;
   }

   if (FUNC_1(VAR_0, "mwt"))
   {
      VAR_1.part.mwt = 1;
   }

   if (FUNC_1(VAR_0, "mrd"))
   {
      VAR_1.part.mrd = 1;
   }

   if (FUNC_1(VAR_0, "ewt"))
   {
      VAR_1.part.ewt = 1;
   }

   if ((VAR_2 = FUNC_1(VAR_0, "ewa")))
   {
      VAR_1.part.ewa = FUNC_0(VAR_2);
   }

   if (FUNC_1(VAR_0, "adrl"))
   {
      VAR_1.part.adrl = 1;
   }

   if (FUNC_1(VAR_0, "frcl"))
   {
      VAR_1.part.frcl = 1;
   }

   if ((VAR_2 = FUNC_1(VAR_0, "shift")))
   {
      VAR_1.part.shift = FUNC_0(VAR_2);
   }

   if (FUNC_1(VAR_0, "yrl"))
   {
      VAR_1.part.yrl = 1;
   }

   if (FUNC_1(VAR_0, "negb"))
   {
      VAR_1.part.negb = 1;
   }

   if (FUNC_1(VAR_0, "zero"))
   {
      VAR_1.part.zero = 1;
   }

   if (FUNC_1(VAR_0, "bsel"))
   {
      VAR_1.part.bsel = 1;
   }

   if (FUNC_1(VAR_0, "nofl"))
   {
      VAR_1.part.nofl = 1;
   }

   if ((VAR_2 = FUNC_1(VAR_0, "coef")))
   {
      VAR_1.part.coef = FUNC_0(VAR_2);
   }

   if ((VAR_2 = FUNC_1(VAR_0, "masa")))
   {
      VAR_1.part.masa = FUNC_0(VAR_2);
   }

   if (FUNC_1(VAR_0, "adreb"))
   {
      VAR_1.part.adreb = 1;
   }

   if (FUNC_1(VAR_0, "nxadr"))
   {
      VAR_1.part.adreb = 1;
   }

   if (FUNC_1(VAR_0, "nop"))
   {
      VAR_1.all = 0;
   }

   return VAR_1.all;
}
