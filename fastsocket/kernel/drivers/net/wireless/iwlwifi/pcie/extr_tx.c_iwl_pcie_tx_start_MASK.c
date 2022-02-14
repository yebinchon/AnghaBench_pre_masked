
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int dma; } ;
struct iwl_trans_pcie {scalar_t__ scd_base_addr; int cmd_fifo; int cmd_queue; TYPE_3__ scd_bc_tbls; int queue_used; int queue_stopped; } ;
struct iwl_trans {TYPE_2__* cfg; } ;
struct TYPE_5__ {TYPE_1__* base_params; } ;
struct TYPE_4__ {int num_of_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int) ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct iwl_trans*,int ,int ) ;
 int FUNC_6 (struct iwl_trans*,int ) ;
 scalar_t__ FUNC_7 (struct iwl_trans*,int ) ;
 scalar_t__ FUNC_8 (struct iwl_trans*,int ) ;
 int FUNC_9 (struct iwl_trans*,int ,int ) ;
 int FUNC_10 (struct iwl_trans*,int,int *,int) ;
 int FUNC_11 (struct iwl_trans*,int ,scalar_t__) ;
 int FUNC_12 (struct iwl_trans*,int ,int) ;
 int FUNC_13 (int ,int ,int) ;

void FUNC_14(struct iwl_trans *VAR_11, u32 VAR_12)
{
 struct iwl_trans_pcie *VAR_13 = FUNC_2(VAR_11);
 int VAR_14 = VAR_11->cfg->base_params->num_of_queues;
 int VAR_15;
 u32 VAR_16;
 int VAR_17 = (FUNC_3(VAR_14) -
    VAR_8) / sizeof(u32);


 FUNC_13(VAR_13->queue_stopped, 0, sizeof(VAR_13->queue_stopped));
 FUNC_13(VAR_13->queue_used, 0, sizeof(VAR_13->queue_used));

 VAR_13->scd_base_addr =
  FUNC_8(VAR_11, VAR_10);

 FUNC_4(VAR_12 != 0 &&
  VAR_12 != VAR_13->scd_base_addr);


 FUNC_10(VAR_11, VAR_13->scd_base_addr +
       VAR_8,
       ((void*)0), VAR_17);

 FUNC_12(VAR_11, VAR_9,
         VAR_13->scd_bc_tbls.dma >> 10);




 FUNC_12(VAR_11, VAR_7, 0);

 FUNC_9(VAR_11, VAR_13->cmd_queue,
    VAR_13->cmd_fifo);


 FUNC_6(VAR_11, FUNC_1(0, 7));


 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++)
  FUNC_11(VAR_11, FUNC_0(VAR_15),
       VAR_3 |
       VAR_4);


 VAR_16 = FUNC_7(VAR_11, VAR_5);
 FUNC_11(VAR_11, VAR_5,
      VAR_16 | VAR_6);


 FUNC_5(VAR_11, VAR_0,
       VAR_1);
}
