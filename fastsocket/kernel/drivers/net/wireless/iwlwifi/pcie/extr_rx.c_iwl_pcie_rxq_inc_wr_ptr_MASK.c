
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans_pcie {int status; } ;
struct iwl_trans {TYPE_2__* cfg; } ;
struct iwl_rxq {scalar_t__ need_update; int write_actual; int write; int lock; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {scalar_t__ shadow_reg_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwl_trans*,char*,int) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_5 ;
 int FUNC_2 (struct iwl_trans*,int ) ;
 int FUNC_3 (struct iwl_trans*,int ,int ) ;
 int FUNC_4 (struct iwl_trans*,int ,int) ;
 int FUNC_5 (struct iwl_trans*,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct iwl_trans *VAR_6, struct iwl_rxq *VAR_7)
{
 unsigned long VAR_8;
 u32 VAR_9;

 FUNC_6(&VAR_7->lock, VAR_8);

 if (VAR_7->need_update == 0)
  goto exit_unlock;

 if (VAR_6->cfg->base_params->shadow_reg_enable) {


  VAR_7->write_actual = (VAR_7->write & ~0x7);
  FUNC_4(VAR_6, VAR_4, VAR_7->write_actual);
 } else {
  struct iwl_trans_pcie *VAR_10 =
   FUNC_1(VAR_6);


  if (FUNC_8(VAR_5, &VAR_10->status)) {
   VAR_9 = FUNC_2(VAR_6, VAR_2);

   if (VAR_9 & VAR_3) {
    FUNC_0(VAR_6,
     "Rx queue requesting wakeup,"
     " GP1 = 0x%x\n", VAR_9);
    FUNC_3(VAR_6, VAR_0,
     VAR_1);
    goto exit_unlock;
   }

   VAR_7->write_actual = (VAR_7->write & ~0x7);
   FUNC_5(VAR_6, VAR_4,
     VAR_7->write_actual);


  } else {

   VAR_7->write_actual = (VAR_7->write & ~0x7);
   FUNC_5(VAR_6, VAR_4,
    VAR_7->write_actual);
  }
 }
 VAR_7->need_update = 0;

 exit_unlock:
 FUNC_7(&VAR_7->lock, VAR_8);
}
