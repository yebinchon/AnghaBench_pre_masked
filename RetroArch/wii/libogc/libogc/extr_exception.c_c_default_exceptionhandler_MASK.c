
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {size_t EXCPT_Number; scalar_t__ SRR0; scalar_t__* GPR; scalar_t__ LR; int MSR; int SRR1; } ;
typedef TYPE_1__ frame_context ;


 int FUNC_0 (int,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int,int,int,int) ;
 int FUNC_4 (void*,void*,void*) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

void FUNC_8(frame_context *VAR_4)
{
 FUNC_1();
 FUNC_2(VAR_3);
 FUNC_3(VAR_3,20,20,640,574,1280);
 FUNC_0(1, 1);

 FUNC_5("\n\n\n\tException (%s) occurred!\n", VAR_2[VAR_4->EXCPT_Number]);

 FUNC_5("\tGPR00 %08X GPR08 %08X GPR16 %08X GPR24 %08X\n",VAR_4->GPR[0], VAR_4->GPR[8], VAR_4->GPR[16], VAR_4->GPR[24]);
 FUNC_5("\tGPR01 %08X GPR09 %08X GPR17 %08X GPR25 %08X\n",VAR_4->GPR[1], VAR_4->GPR[9], VAR_4->GPR[17], VAR_4->GPR[25]);
 FUNC_5("\tGPR02 %08X GPR10 %08X GPR18 %08X GPR26 %08X\n",VAR_4->GPR[2], VAR_4->GPR[10], VAR_4->GPR[18], VAR_4->GPR[26]);
 FUNC_5("\tGPR03 %08X GPR11 %08X GPR19 %08X GPR27 %08X\n",VAR_4->GPR[3], VAR_4->GPR[11], VAR_4->GPR[19], VAR_4->GPR[27]);
 FUNC_5("\tGPR04 %08X GPR12 %08X GPR20 %08X GPR28 %08X\n",VAR_4->GPR[4], VAR_4->GPR[12], VAR_4->GPR[20], VAR_4->GPR[28]);
 FUNC_5("\tGPR05 %08X GPR13 %08X GPR21 %08X GPR29 %08X\n",VAR_4->GPR[5], VAR_4->GPR[13], VAR_4->GPR[21], VAR_4->GPR[29]);
 FUNC_5("\tGPR06 %08X GPR14 %08X GPR22 %08X GPR30 %08X\n",VAR_4->GPR[6], VAR_4->GPR[14], VAR_4->GPR[22], VAR_4->GPR[30]);
 FUNC_5("\tGPR07 %08X GPR15 %08X GPR23 %08X GPR31 %08X\n",VAR_4->GPR[7], VAR_4->GPR[15], VAR_4->GPR[23], VAR_4->GPR[31]);
 FUNC_5("\tLR %08X SRR0 %08x SRR1 %08x MSR %08x\n", VAR_4->LR, VAR_4->SRR0, VAR_4->SRR1,VAR_4->MSR);
 FUNC_5("\tDAR %08X DSISR %08X\n", FUNC_6(19), FUNC_6(18));

 FUNC_4((void*)VAR_4->SRR0,(void*)VAR_4->LR,(void*)VAR_4->GPR[1]);

 if((VAR_4->EXCPT_Number==VAR_0) || (VAR_4->EXCPT_Number==VAR_1)) {
  u32 VAR_5;
  u32 *VAR_6 = (u32*)VAR_4->SRR0;
  FUNC_5("\n\n\tCODE DUMP:\n");
  for (VAR_5=0; VAR_5<12; VAR_5+=4)
   FUNC_5("\t%p:  %08X %08X %08X %08X\n",
   &(VAR_6[VAR_5]),VAR_6[VAR_5], VAR_6[VAR_5+1], VAR_6[VAR_5+2], VAR_6[VAR_5+3]);
 }

 FUNC_7();
}
