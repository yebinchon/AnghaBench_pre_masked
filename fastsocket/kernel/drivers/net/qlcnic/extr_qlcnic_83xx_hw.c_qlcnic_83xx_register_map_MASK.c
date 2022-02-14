
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_hardware_context {int * ext_reg_tbl; int * reg_tbl; int * hw_ops; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_0(struct qlcnic_hardware_context *VAR_3)
{
 VAR_3->hw_ops = &VAR_1;
 VAR_3->reg_tbl = (u32 *)VAR_2;
 VAR_3->ext_reg_tbl = (u32 *)VAR_0;
}
