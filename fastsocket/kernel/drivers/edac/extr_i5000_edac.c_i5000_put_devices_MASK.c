
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {struct i5000_pvt* pvt_info; } ;
struct i5000_pvt {scalar_t__ maxch; int branch_1; int branch_0; int fsb_error_regs; int branchmap_werrors; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mem_ctl_info *VAR_1)
{
 struct i5000_pvt *VAR_2;

 VAR_2 = VAR_1->pvt_info;

 FUNC_0(VAR_2->branchmap_werrors);
 FUNC_0(VAR_2->fsb_error_regs);
 FUNC_0(VAR_2->branch_0);


 if (VAR_2->maxch >= VAR_0)
  FUNC_0(VAR_2->branch_1);
}
