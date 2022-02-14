
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct function_update_data {int tx_switch_suspend_change_flg; int echo; int tx_switch_suspend; } ;
struct bnx2x_func_switch_update_params {int suspend; } ;
struct TYPE_2__ {struct bnx2x_func_switch_update_params switch_update; } ;
struct bnx2x_func_state_params {TYPE_1__ params; struct bnx2x_func_sp_obj* f_obj; } ;
struct bnx2x_func_sp_obj {int rdata_mapping; scalar_t__ rdata; } ;
struct bnx2x {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bnx2x*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct function_update_data*,int ,int) ;

__attribute__((used)) static inline int FUNC_4(struct bnx2x *VAR_3,
     struct bnx2x_func_state_params *VAR_4)
{
 struct bnx2x_func_sp_obj *VAR_5 = VAR_4->f_obj;
 struct function_update_data *VAR_6 =
  (struct function_update_data *)VAR_5->rdata;
 dma_addr_t VAR_7 = VAR_5->rdata_mapping;
 struct bnx2x_func_switch_update_params *VAR_8 =
  &VAR_4->params.switch_update;

 FUNC_3(VAR_6, 0, sizeof(*VAR_6));


 VAR_6->tx_switch_suspend_change_flg = 1;
 VAR_6->tx_switch_suspend = VAR_8->suspend;
 VAR_6->echo = VAR_2;

 return FUNC_2(VAR_3, VAR_1, 0,
        FUNC_0(VAR_7),
        FUNC_1(VAR_7), VAR_0);
}
