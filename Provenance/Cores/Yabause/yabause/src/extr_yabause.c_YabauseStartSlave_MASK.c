
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int VBR; scalar_t__* R; scalar_t__ PC; } ;
struct TYPE_11__ {TYPE_4__ regs; } ;
struct TYPE_10__ {int IsSSH2Running; scalar_t__ emulatebios; } ;


 scalar_t__ FUNC_0 () ;
 TYPE_2__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_4__*) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__ VAR_3 ;

void FUNC_7(void) {
   if (VAR_3.emulatebios)
   {
      VAR_0 = VAR_2;
      FUNC_2(0xFFFFFFE0, 0xA55A03F1);
      FUNC_2(0xFFFFFFE4, 0xA55A00FC);
      FUNC_2(0xFFFFFFE8, 0xA55A5555);
      FUNC_2(0xFFFFFFEC, 0xA55A0070);

      FUNC_3(0xFFFFFEE0, 0x0000);
      FUNC_3(0xFFFFFEE2, 0x0000);
      FUNC_3(0xFFFFFE60, 0x0F00);
      FUNC_3(0xFFFFFE62, 0x6061);
      FUNC_3(0xFFFFFE64, 0x6263);
      FUNC_3(0xFFFFFE66, 0x6465);
      FUNC_3(0xFFFFFE68, 0x6600);
      FUNC_3(0xFFFFFEE4, 0x6869);
      FUNC_2(0xFFFFFFA8, 0x0000006C);
      FUNC_2(0xFFFFFFA0, 0x0000006D);
      FUNC_2(0xFFFFFF0C, 0x0000006E);
      FUNC_2(0xFFFFFE10, 0x00000081);
      VAR_0 = VAR_1;

      FUNC_4(VAR_2, &VAR_2->regs);
      VAR_2->regs.R[15] = FUNC_0();
      VAR_2->regs.VBR = 0x06000400;
      VAR_2->regs.PC = FUNC_1(0x06000250);
      if (FUNC_1(0x060002AC) != 0)
         VAR_2->regs.R[15] = FUNC_1(0x060002AC);
      FUNC_6(VAR_2, &VAR_2->regs);
   }
   else
      FUNC_5(VAR_2);

   VAR_3.IsSSH2Running = 1;
}
