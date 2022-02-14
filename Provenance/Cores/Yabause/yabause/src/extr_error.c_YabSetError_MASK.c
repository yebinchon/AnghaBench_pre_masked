
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ all; } ;
struct TYPE_7__ {scalar_t__* R; scalar_t__ PC; scalar_t__ PR; scalar_t__ MACL; scalar_t__ MACH; scalar_t__ VBR; scalar_t__ GBR; TYPE_1__ SR; } ;
struct TYPE_6__ {int isslave; TYPE_4__ regs; } ;
typedef TYPE_2__ SH2_struct ;


 int FUNC_0 (char*,void const*) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,char*,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long) ;

void FUNC_5(int VAR_0, const void *VAR_1)
{
   char VAR_2[512];
   SH2_struct *VAR_3;

   switch (VAR_0)
   {
      case 137:
         FUNC_0(FUNC_3("File not found: "), VAR_1);
         break;
      case 134:
         FUNC_2(FUNC_3("Error allocating memory\n"));
         break;
      case 136:
         FUNC_0(FUNC_3("Error reading file: "), VAR_1);
         break;
      case 135:
         FUNC_0(FUNC_3("Error writing file: "), VAR_1);
         break;
      case 138:
         FUNC_0(FUNC_3("Cannot initialize "), VAR_1);
         break;
      case 131:
         VAR_3 = (SH2_struct *)VAR_1;
         FUNC_1(VAR_3, &VAR_3->regs);
         FUNC_4(VAR_2, "%s SH2 invalid opcode\n\n"
                          "R0 =  %08lX\tR12 =  %08lX\n"
                          "R1 =  %08lX\tR13 =  %08lX\n"
                          "R2 =  %08lX\tR14 =  %08lX\n"
                          "R3 =  %08lX\tR15 =  %08lX\n"
                          "R4 =  %08lX\tSR =   %08lX\n"
                          "R5 =  %08lX\tGBR =  %08lX\n"
                          "R6 =  %08lX\tVBR =  %08lX\n"
                          "R7 =  %08lX\tMACH = %08lX\n"
                          "R8 =  %08lX\tMACL = %08lX\n"
                          "R9 =  %08lX\tPR =   %08lX\n"
                          "R10 = %08lX\tPC =   %08lX\n"
                          "R11 = %08lX\n", VAR_3->isslave ? "Slave" : "Master",
                          (long)VAR_3->regs.R[0], (long)VAR_3->regs.R[12],
                          (long)VAR_3->regs.R[1], (long)VAR_3->regs.R[13],
                          (long)VAR_3->regs.R[2], (long)VAR_3->regs.R[14],
                          (long)VAR_3->regs.R[3], (long)VAR_3->regs.R[15],
                          (long)VAR_3->regs.R[4], (long)VAR_3->regs.SR.all,
                          (long)VAR_3->regs.R[5], (long)VAR_3->regs.GBR,
                          (long)VAR_3->regs.R[6], (long)VAR_3->regs.VBR,
                          (long)VAR_3->regs.R[7], (long)VAR_3->regs.MACH,
                          (long)VAR_3->regs.R[8], (long)VAR_3->regs.MACL,
                          (long)VAR_3->regs.R[9], (long)VAR_3->regs.PR,
                          (long)VAR_3->regs.R[10], (long)VAR_3->regs.PC,
                          (long)VAR_3->regs.R[11]);
         FUNC_2(VAR_2);
         break;
      case 130:
         FUNC_2(FUNC_3("SH2 read error\n"));
         break;
      case 129:
         FUNC_2(FUNC_3("SH2 write error\n"));
         break;
      case 132:
         FUNC_0(FUNC_3("SDL Error: "), VAR_1);
         break;
      case 133:
         FUNC_2((char *)VAR_1);
         break;
      case 128:
      default:
         FUNC_2(FUNC_3("Unknown error occurred\n"));
         break;
   }
}
