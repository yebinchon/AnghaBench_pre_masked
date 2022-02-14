
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_pt_regs {int dummy; } ;
struct faultinfo {int dummy; } ;


 int FUNC_0 (struct faultinfo*) ;
 struct faultinfo* FUNC_1 (struct uml_pt_regs*) ;
 int FUNC_2 (struct uml_pt_regs*) ;
 scalar_t__ FUNC_3 (struct uml_pt_regs*) ;
 int FUNC_4 (struct faultinfo,int ) ;
 int FUNC_5 (struct faultinfo,int ,scalar_t__,struct uml_pt_regs*) ;

void FUNC_6(int VAR_0, struct uml_pt_regs *VAR_1)
{
 struct faultinfo * VAR_2 = FUNC_1(VAR_1);

 if (FUNC_3(VAR_1) && !FUNC_0(VAR_2)) {
  FUNC_4(*VAR_2, FUNC_2(VAR_1));
  return;
 }
 FUNC_5(*VAR_2, FUNC_2(VAR_1), FUNC_3(VAR_1), VAR_1);
}
