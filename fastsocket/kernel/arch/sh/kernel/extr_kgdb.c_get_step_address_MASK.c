
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int pc; int sr; int* regs; long pr; } ;
typedef int insn_size_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 size_t FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 size_t FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int VAR_0 ;
 int FUNC_19 (int) ;
 int FUNC_20 (long,long) ;
 long FUNC_21 (int ) ;

__attribute__((used)) static short *FUNC_22(struct pt_regs *VAR_1)
{
 insn_size_t VAR_2 = FUNC_19(VAR_1->pc);
 long VAR_3;


 if (FUNC_10(VAR_2)) {
  if (VAR_1->sr & VAR_0)
   VAR_3 = VAR_1->pc + 4 + FUNC_11(VAR_2);
  else
   VAR_3 = VAR_1->pc + 2;
 }


 else if (FUNC_12(VAR_2)) {
  if (VAR_1->sr & VAR_0)
   VAR_3 = VAR_1->pc + 4 + FUNC_11(VAR_2);
  else
   VAR_3 = VAR_1->pc + 4;
 }


 else if (FUNC_0(VAR_2)) {
  if (!(VAR_1->sr & VAR_0))
   VAR_3 = VAR_1->pc + 4 + FUNC_11(VAR_2);
  else
   VAR_3 = VAR_1->pc + 2;
 }


 else if (FUNC_1(VAR_2)) {
  if (!(VAR_1->sr & VAR_0))
   VAR_3 = VAR_1->pc + 4 + FUNC_11(VAR_2);
  else
   VAR_3 = VAR_1->pc + 4;
 }


 else if (FUNC_2(VAR_2))
  VAR_3 = VAR_1->pc + 4 + FUNC_5(VAR_2);


 else if (FUNC_3(VAR_2))
  VAR_3 = VAR_1->pc + 4
      + VAR_1->regs[FUNC_4(VAR_2)];


 else if (FUNC_6(VAR_2))
  VAR_3 = VAR_1->pc + 4 + FUNC_9(VAR_2);


 else if (FUNC_7(VAR_2))
  VAR_3 = VAR_1->pc + 4
      + VAR_1->regs[FUNC_8(VAR_2)];


 else if (FUNC_13(VAR_2))
  VAR_3 = VAR_1->regs[FUNC_14(VAR_2)];


 else if (FUNC_15(VAR_2))
  VAR_3 = VAR_1->regs[FUNC_16(VAR_2)];


 else if (FUNC_18(VAR_2))
  VAR_3 = VAR_1->pr;


 else if (FUNC_17(VAR_2))
  VAR_3 = VAR_1->regs[15];


 else
  VAR_3 = VAR_1->pc + FUNC_21(VAR_2);

 FUNC_20(VAR_3, VAR_3 + FUNC_21(VAR_2));
 return (short *)VAR_3;
}
