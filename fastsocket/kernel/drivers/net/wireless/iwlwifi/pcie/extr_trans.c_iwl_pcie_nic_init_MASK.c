
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans_pcie {int irq_lock; } ;
struct iwl_trans {TYPE_2__* cfg; int op_mode; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {scalar_t__ shadow_reg_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 int VAR_3 ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*,int) ;
 scalar_t__ FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (struct iwl_trans*,int ,int) ;
 int FUNC_8 (struct iwl_trans*,int ,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct iwl_trans *VAR_4)
{
 struct iwl_trans_pcie *VAR_5 = FUNC_1(VAR_4);
 unsigned long VAR_6;


 FUNC_9(&VAR_5->irq_lock, VAR_6);
 FUNC_3(VAR_4);


 FUNC_8(VAR_4, VAR_0, VAR_3);

 FUNC_10(&VAR_5->irq_lock, VAR_6);

 FUNC_5(VAR_4, 0);

 FUNC_2(VAR_4->op_mode);


 FUNC_4(VAR_4);


 if (FUNC_6(VAR_4))
  return -VAR_2;

 if (VAR_4->cfg->base_params->shadow_reg_enable) {

  FUNC_7(VAR_4, VAR_1, 0x800FFFFF);
  FUNC_0(VAR_4, "Enabling shadow registers in device\n");
 }

 return 0;
}
