
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 struct clk* FUNC_1 (int ,char*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*,int) ;
 int VAR_0 ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static inline void FUNC_5(void)
{
 if (!VAR_0++) {
  struct clk *VAR_1 = FUNC_1(0, "dma_ck");
  if (!FUNC_0(VAR_1)) {
   FUNC_3(VAR_1, 1);
   FUNC_2(VAR_1);
  }
  FUNC_4(-1, -1, 1);
 }
}
