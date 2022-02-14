
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_trans_pcie {scalar_t__ n_no_reclaim_cmds; int bc_table_dword; int command_names; int wd_timeout; void* rx_page_order; scalar_t__ rx_buf_size_8k; int no_reclaim_cmds; int cmd_fifo; int cmd_queue; } ;
struct iwl_trans_config {scalar_t__ n_no_reclaim_cmds; int bc_table_dword; int command_names; int queue_watchdog_timeout; scalar_t__ rx_buf_size_8k; int no_reclaim_cmds; int cmd_fifo; int cmd_queue; } ;
struct iwl_trans {int dummy; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct iwl_trans *VAR_1,
         const struct iwl_trans_config *VAR_2)
{
 struct iwl_trans_pcie *VAR_3 = FUNC_0(VAR_1);

 VAR_3->cmd_queue = VAR_2->cmd_queue;
 VAR_3->cmd_fifo = VAR_2->cmd_fifo;
 if (FUNC_1(VAR_2->n_no_reclaim_cmds > VAR_0))
  VAR_3->n_no_reclaim_cmds = 0;
 else
  VAR_3->n_no_reclaim_cmds = VAR_2->n_no_reclaim_cmds;
 if (VAR_3->n_no_reclaim_cmds)
  FUNC_3(VAR_3->no_reclaim_cmds, VAR_2->no_reclaim_cmds,
         VAR_3->n_no_reclaim_cmds * sizeof(u8));

 VAR_3->rx_buf_size_8k = VAR_2->rx_buf_size_8k;
 if (VAR_3->rx_buf_size_8k)
  VAR_3->rx_page_order = FUNC_2(8 * 1024);
 else
  VAR_3->rx_page_order = FUNC_2(4 * 1024);

 VAR_3->wd_timeout =
  FUNC_4(VAR_2->queue_watchdog_timeout);

 VAR_3->command_names = VAR_2->command_names;
 VAR_3->bc_table_dword = VAR_2->bc_table_dword;
}
