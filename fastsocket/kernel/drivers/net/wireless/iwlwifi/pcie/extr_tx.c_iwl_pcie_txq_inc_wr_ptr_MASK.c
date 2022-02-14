
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int id; int write_ptr; } ;
struct iwl_txq {scalar_t__ need_update; TYPE_3__ q; } ;
struct iwl_trans_pcie {int status; } ;
struct iwl_trans {TYPE_2__* cfg; } ;
struct TYPE_5__ {TYPE_1__* base_params; } ;
struct TYPE_4__ {scalar_t__ shadow_reg_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwl_trans*,char*,int,int) ;
 int FUNC_1 (struct iwl_trans*,char*,int,int) ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 int VAR_5 ;
 int FUNC_3 (struct iwl_trans*,int ) ;
 int FUNC_4 (struct iwl_trans*,int ,int ) ;
 int FUNC_5 (struct iwl_trans*,int ,int) ;
 int FUNC_6 (struct iwl_trans*,int ,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct iwl_trans *VAR_6, struct iwl_txq *VAR_7)
{
 u32 VAR_8 = 0;
 int VAR_9 = VAR_7->q.id;

 if (VAR_7->need_update == 0)
  return;

 if (VAR_6->cfg->base_params->shadow_reg_enable) {

  FUNC_5(VAR_6, VAR_4,
       VAR_7->q.write_ptr | (VAR_9 << 8));
 } else {
  struct iwl_trans_pcie *VAR_10 =
   FUNC_2(VAR_6);

  if (FUNC_7(VAR_5, &VAR_10->status)) {



   VAR_8 = FUNC_3(VAR_6, VAR_2);

   if (VAR_8 & VAR_3) {
    FUNC_0(VAR_6,
     "Tx queue %d requesting wakeup,"
     " GP1 = 0x%x\n", VAR_9, VAR_8);
    FUNC_4(VAR_6, VAR_0,
     VAR_1);
    return;
   }

   FUNC_1(VAR_6, "Q:%d WR: 0x%x\n", VAR_9,
         VAR_7->q.write_ptr);

   FUNC_6(VAR_6, VAR_4,
         VAR_7->q.write_ptr | (VAR_9 << 8));






  } else
   FUNC_5(VAR_6, VAR_4,
        VAR_7->q.write_ptr | (VAR_9 << 8));
 }
 VAR_7->need_update = 0;
}
