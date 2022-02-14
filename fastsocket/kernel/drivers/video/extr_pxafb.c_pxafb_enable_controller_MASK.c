
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxafb_info {int* fdadr; int reg_lccr0; int reg_lccr1; int reg_lccr2; int reg_lccr3; int lccr0; int reg_lccr4; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pxafb_info*,int ,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(struct pxafb_info *VAR_9)
{
 FUNC_2("pxafb: Enabling LCD controller\n");
 FUNC_2("fdadr0 0x%08x\n", (unsigned int) VAR_9->fdadr[0]);
 FUNC_2("fdadr1 0x%08x\n", (unsigned int) VAR_9->fdadr[1]);
 FUNC_2("reg_lccr0 0x%08x\n", (unsigned int) VAR_9->reg_lccr0);
 FUNC_2("reg_lccr1 0x%08x\n", (unsigned int) VAR_9->reg_lccr1);
 FUNC_2("reg_lccr2 0x%08x\n", (unsigned int) VAR_9->reg_lccr2);
 FUNC_2("reg_lccr3 0x%08x\n", (unsigned int) VAR_9->reg_lccr3);


 FUNC_0(VAR_9->clk);

 if (VAR_9->lccr0 & VAR_4)
  return;


 FUNC_1(VAR_9, VAR_8, VAR_9->reg_lccr4);
 FUNC_1(VAR_9, VAR_7, VAR_9->reg_lccr3);
 FUNC_1(VAR_9, VAR_6, VAR_9->reg_lccr2);
 FUNC_1(VAR_9, VAR_5, VAR_9->reg_lccr1);
 FUNC_1(VAR_9, VAR_2, VAR_9->reg_lccr0 & ~VAR_3);

 FUNC_1(VAR_9, VAR_0, VAR_9->fdadr[0]);
 FUNC_1(VAR_9, VAR_1, VAR_9->fdadr[1]);
 FUNC_1(VAR_9, VAR_2, VAR_9->reg_lccr0 | VAR_3);
}
