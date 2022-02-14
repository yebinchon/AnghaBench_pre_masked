
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct context {int regs; int ohci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct context *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 FUNC_6(VAR_2->ohci, FUNC_0(VAR_2->regs), VAR_1);
 FUNC_2(VAR_2->ohci);

 for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
  VAR_3 = FUNC_5(VAR_2->ohci, FUNC_1(VAR_2->regs));
  if ((VAR_3 & VAR_0) == 0)
   return;

  FUNC_4(1);
 }
 FUNC_3("Error: DMA context still active (0x%08x)\n", VAR_3);
}
