
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct die_args {int err; int signr; int trapnr; struct pt_regs* regs; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ,struct pt_regs*) ;
 int FUNC_2 (int,struct pt_regs*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pt_regs*,struct die_args*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct pt_regs*) ;
 int* VAR_5 ;

__attribute__((used)) static int FUNC_8(struct die_args *VAR_6, unsigned long VAR_7)
{
 struct pt_regs *VAR_8 = VAR_6->regs;

 switch (VAR_7) {
 case 131:
  if (FUNC_0(&VAR_3) != -1) {

   FUNC_2(FUNC_3(), VAR_8);
   VAR_5[FUNC_3()] = 1;
   FUNC_6();
   return VAR_1;
  }
  return VAR_0;

 case 128:

  return VAR_0;

 case 130:
  if (VAR_5[FUNC_3()]) {
   VAR_5[FUNC_3()] = 0;
   return VAR_1;
  }
  return VAR_0;

 case 129:
  if (FUNC_0(&VAR_3) != -1) {

   FUNC_2(FUNC_3(), VAR_8);
   return VAR_1;
  }

  break;

 case 132:
  if (FUNC_0(&VAR_4) ==
      FUNC_3()) {
   if (FUNC_7(VAR_8))
    return FUNC_4(VAR_8, VAR_6);
   break;
  } else if (FUNC_5(VAR_2))



   return VAR_0;

 default:
  if (FUNC_7(VAR_8))
   return VAR_0;
 }

 if (FUNC_1(VAR_6->trapnr, VAR_6->signr, VAR_6->err, VAR_8))
  return VAR_0;


 FUNC_6();
 return VAR_1;
}
