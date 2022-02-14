
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct uml_pt_regs {int dummy; } ;
struct TYPE_4__ {int ptrace; scalar_t__ exit_code; int audit_context; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct uml_pt_regs*) ;
 int FUNC_2 (struct uml_pt_regs*) ;
 int FUNC_3 (struct uml_pt_regs*) ;
 int FUNC_4 (struct uml_pt_regs*) ;
 int FUNC_5 (struct uml_pt_regs*) ;
 int FUNC_6 (struct uml_pt_regs*) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__,TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,struct uml_pt_regs*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;

void FUNC_15(struct uml_pt_regs *VAR_8, int VAR_9)
{
 int VAR_10 = (VAR_7->ptrace & VAR_1) && VAR_9;
 int VAR_11;

 if (FUNC_14(VAR_7->audit_context)) {
  if (!VAR_9)
   FUNC_7(VAR_0,
         FUNC_5(VAR_8),
         FUNC_1(VAR_8),
         FUNC_2(VAR_8),
         FUNC_3(VAR_8),
         FUNC_4(VAR_8));
  else FUNC_8(FUNC_0(FUNC_6(VAR_8)),
     FUNC_6(VAR_8));
 }


 if (VAR_10)
  FUNC_11(VAR_7, VAR_8, 0);

 if (!FUNC_13(VAR_6))
  return;

 if (!(VAR_7->ptrace & VAR_2))
  return;





 VAR_11 = (VAR_7->ptrace & VAR_3);
 FUNC_9(VAR_4 | (VAR_11 ? 0x80 : 0));

 if (VAR_9)
  FUNC_12(VAR_5);






 if (VAR_7->exit_code) {
  FUNC_10(VAR_7->exit_code, VAR_7, 1);
  VAR_7->exit_code = 0;
 }
}
