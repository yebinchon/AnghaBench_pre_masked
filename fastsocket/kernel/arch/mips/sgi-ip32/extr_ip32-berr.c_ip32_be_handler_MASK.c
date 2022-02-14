
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int cp0_cause; int cp0_epc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char,int ) ;
 int FUNC_3 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_4(struct pt_regs *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_3->cp0_cause & 4;

 if (VAR_4)
  return VAR_0;

 FUNC_2("Got %cbe at 0x%lx\n", VAR_5 ? 'd' : 'i', VAR_3->cp0_epc);
 FUNC_3(VAR_3);
 FUNC_0();
 while(1);
 FUNC_1(VAR_1, VAR_2);
}
