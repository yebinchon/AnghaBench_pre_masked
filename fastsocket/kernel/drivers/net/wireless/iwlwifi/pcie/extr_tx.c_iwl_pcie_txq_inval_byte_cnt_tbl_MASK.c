
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct iwlagn_scd_bc_tbl {void** tfd_offset; } ;
struct TYPE_8__ {int id; int read_ptr; } ;
struct iwl_txq {TYPE_4__ q; TYPE_3__* entries; } ;
struct iwl_tx_cmd {int sta_id; } ;
struct TYPE_5__ {struct iwlagn_scd_bc_tbl* addr; } ;
struct iwl_trans_pcie {int cmd_queue; TYPE_1__ scd_bc_tbls; } ;
struct iwl_trans {int dummy; } ;
typedef void* __le16 ;
struct TYPE_7__ {TYPE_2__* cmd; } ;
struct TYPE_6__ {scalar_t__ payload; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct iwl_trans *VAR_2,
         struct iwl_txq *VAR_3)
{
 struct iwl_trans_pcie *VAR_4 =
  FUNC_0(VAR_2);
 struct iwlagn_scd_bc_tbl *VAR_5 = VAR_4->scd_bc_tbls.addr;
 int VAR_6 = VAR_3->q.id;
 int VAR_7 = VAR_3->q.read_ptr;
 u8 VAR_8 = 0;
 __le16 VAR_9;
 struct iwl_tx_cmd *VAR_10 =
  (void *)VAR_3->entries[VAR_3->q.read_ptr].cmd->payload;

 FUNC_1(VAR_7 >= VAR_1);

 if (VAR_6 != VAR_4->cmd_queue)
  VAR_8 = VAR_10->sta_id;

 VAR_9 = FUNC_2(1 | (VAR_8 << 12));
 VAR_5[VAR_6].tfd_offset[VAR_7] = VAR_9;

 if (VAR_7 < VAR_0)
  VAR_5[VAR_6].
   tfd_offset[VAR_1 + VAR_7] = VAR_9;
}
