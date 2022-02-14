
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int sr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct pt_regs*) ;

void FUNC_5 (char *VAR_3, struct pt_regs *VAR_4, int VAR_5)
{
 if (!(VAR_4->sr & VAR_0))
  return;

 FUNC_1();
 FUNC_3("%s: %08x\n",VAR_3,VAR_5);
 FUNC_4(VAR_4);
 FUNC_0(VAR_2);
 FUNC_2(VAR_1);
}
