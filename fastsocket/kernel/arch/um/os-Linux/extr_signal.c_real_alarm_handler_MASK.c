
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_pt_regs {scalar_t__ is_user; } ;
struct sigcontext {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct uml_pt_regs*,struct sigcontext*) ;
 int FUNC_1 (int ,struct uml_pt_regs*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct sigcontext *VAR_1)
{
 struct uml_pt_regs VAR_2;

 if (VAR_1 != ((void*)0))
  FUNC_0(&VAR_2, VAR_1);
 VAR_2.is_user = 0;
 FUNC_2();
 FUNC_1(VAR_0, &VAR_2);
}
