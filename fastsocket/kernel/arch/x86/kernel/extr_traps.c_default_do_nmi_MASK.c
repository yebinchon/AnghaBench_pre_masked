
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pt_regs*,int) ;
 unsigned char FUNC_1 () ;
 int FUNC_2 (unsigned char,struct pt_regs*) ;
 int FUNC_3 (unsigned char,struct pt_regs*) ;
 scalar_t__ FUNC_4 (struct pt_regs*,unsigned char) ;
 scalar_t__ FUNC_5 (int ,char*,struct pt_regs*,unsigned char,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned char,struct pt_regs*) ;

void FUNC_9(struct pt_regs *VAR_4)
{
 unsigned char VAR_5 = 0;
 int VAR_6;

 VAR_6 = FUNC_7();


 if (!VAR_6)
  VAR_5 = FUNC_1();

 if (!(VAR_5 & 0xc0)) {
  if (FUNC_5(VAR_1, "nmi_ipi", VAR_4, VAR_5, 2, VAR_3)
        == VAR_2)
   return;
  FUNC_8(VAR_5, VAR_4);


  return;
 }
 if (FUNC_5(VAR_0, "nmi", VAR_4, VAR_5, 2, VAR_3) == VAR_2)
  return;


 if (VAR_5 & 0x80)
  FUNC_3(VAR_5, VAR_4);
 if (VAR_5 & 0x40)
  FUNC_2(VAR_5, VAR_4);







}
