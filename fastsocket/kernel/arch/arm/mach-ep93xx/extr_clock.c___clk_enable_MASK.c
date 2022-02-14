
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {scalar_t__ enable_reg; scalar_t__ sw_locked; int enable_mask; struct clk* parent; int users; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct clk *VAR_0)
{
 if (!VAR_0->users++) {
  if (VAR_0->parent)
   FUNC_3(VAR_0->parent);

  if (VAR_0->enable_reg) {
   u32 VAR_1;

   VAR_1 = FUNC_0(VAR_0->enable_reg);
   VAR_1 |= VAR_0->enable_mask;
   if (VAR_0->sw_locked)
    FUNC_2(VAR_1, VAR_0->enable_reg);
   else
    FUNC_1(VAR_1, VAR_0->enable_reg);
  }
 }
}
