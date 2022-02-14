
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,struct pt_regs*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;

void
FUNC_5(int VAR_0, int VAR_1, struct pt_regs* VAR_2)
{





 if (!VAR_1) {
  FUNC_1(VAR_0, VAR_2);
  return;
 }

 FUNC_0(VAR_0, FUNC_3());
 FUNC_1(VAR_0, VAR_2);

 FUNC_4(VAR_0, FUNC_2(VAR_0));
}
