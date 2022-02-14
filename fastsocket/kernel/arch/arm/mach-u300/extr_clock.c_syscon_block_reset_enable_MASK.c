
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct clk {int reset; int res_reg; int res_mask; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct clk *VAR_1)
{
 u16 VAR_2;
 unsigned long VAR_3;


 if (!VAR_1->res_reg || !VAR_1->res_mask)
  return;
 FUNC_1(&VAR_0, VAR_3);
 VAR_2 = FUNC_0(VAR_1->res_reg);
 VAR_2 |= VAR_1->res_mask;
 FUNC_3(VAR_2, VAR_1->res_reg);
 FUNC_2(&VAR_0, VAR_3);
 VAR_1->reset = 1;
}
