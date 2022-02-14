
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpll_data {int autoidle_mask; int autoidle_reg; } ;
struct clk {struct dpll_data* dpll_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct clk *VAR_1)
{
 const struct dpll_data *VAR_2;
 u32 VAR_3;

 if (!VAR_1 || !VAR_1->dpll_data)
  return -VAR_0;

 VAR_2 = VAR_1->dpll_data;

 VAR_3 = FUNC_1(VAR_2->autoidle_reg);
 VAR_3 &= VAR_2->autoidle_mask;
 VAR_3 >>= FUNC_0(VAR_2->autoidle_mask);

 return VAR_3;
}
