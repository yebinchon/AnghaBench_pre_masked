
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {struct i5400_pvt* pvt_info; } ;
struct i5400_pvt {int branchmap_werrors; int fsb_error_regs; int branch_0; int branch_1; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mem_ctl_info *VAR_0)
{
 struct i5400_pvt *VAR_1;

 VAR_1 = VAR_0->pvt_info;


 FUNC_0(VAR_1->branch_1);
 FUNC_0(VAR_1->branch_0);
 FUNC_0(VAR_1->fsb_error_regs);
 FUNC_0(VAR_1->branchmap_werrors);
}
