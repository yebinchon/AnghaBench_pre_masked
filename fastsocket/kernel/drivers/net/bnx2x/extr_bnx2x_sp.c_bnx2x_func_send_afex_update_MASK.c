
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct function_update_data {int vif_id_change_flg; int afex_default_vlan_change_flg; int allowed_priorities_change_flg; int allowed_priorities; void* afex_default_vlan; void* vif_id; int echo; } ;
struct bnx2x_func_afex_update_params {int allowed_priorities; int afex_default_vlan; int vif_id; } ;
struct TYPE_2__ {struct bnx2x_func_afex_update_params afex_update; } ;
struct bnx2x_func_state_params {TYPE_1__ params; struct bnx2x_func_sp_obj* f_obj; } ;
struct bnx2x_func_sp_obj {int afex_rdata_mapping; scalar_t__ afex_rdata; } ;
struct bnx2x {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,void*,void*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnx2x*,int ,int ,int ,int ,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct function_update_data*,int ,int) ;

__attribute__((used)) static inline int FUNC_6(struct bnx2x *VAR_4,
      struct bnx2x_func_state_params *VAR_5)
{
 struct bnx2x_func_sp_obj *VAR_6 = VAR_5->f_obj;
 struct function_update_data *VAR_7 =
  (struct function_update_data *)VAR_6->afex_rdata;
 dma_addr_t VAR_8 = VAR_6->afex_rdata_mapping;
 struct bnx2x_func_afex_update_params *VAR_9 =
  &VAR_5->params.afex_update;

 FUNC_5(VAR_7, 0, sizeof(*VAR_7));


 VAR_7->vif_id_change_flg = 1;
 VAR_7->vif_id = FUNC_4(VAR_9->vif_id);
 VAR_7->afex_default_vlan_change_flg = 1;
 VAR_7->afex_default_vlan =
  FUNC_4(VAR_9->afex_default_vlan);
 VAR_7->allowed_priorities_change_flg = 1;
 VAR_7->allowed_priorities = VAR_9->allowed_priorities;
 VAR_7->echo = VAR_0;







 FUNC_0(VAR_1,
    "afex: sending func_update vif_id 0x%x dvlan 0x%x prio 0x%x\n",
    VAR_7->vif_id,
    VAR_7->afex_default_vlan, VAR_7->allowed_priorities);

 return FUNC_3(VAR_4, VAR_3, 0,
        FUNC_1(VAR_8),
        FUNC_2(VAR_8), VAR_2);
}
