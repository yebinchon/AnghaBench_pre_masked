
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {int ctrl_base; int mregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

void FUNC_4(struct musb *VAR_7)
{





 FUNC_3(VAR_7->ctrl_base, VAR_1,
     VAR_4
   | VAR_3
   | VAR_2);
 FUNC_2(VAR_7->mregs, VAR_5, 0);
 FUNC_3(VAR_7->ctrl_base, VAR_0, 0);

 if (FUNC_1() && !VAR_6)
  FUNC_0("dma still active\n");
}
