
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct iwlagn_scd_bc_tbl {int dummy; } ;
struct iwl_txq {int dummy; } ;
struct iwl_trans_pcie {int cmd_queue; int * txq; int kw; int scd_bc_tbls; } ;
struct iwl_trans {TYPE_2__* cfg; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {int num_of_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_trans*,char*,...) ;
 int VAR_3 ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct iwl_trans*,int *,int) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*,int *,int,int) ;
 int * FUNC_6 (int,int,int ) ;

__attribute__((used)) static int FUNC_7(struct iwl_trans *VAR_6)
{
 int VAR_7;
 int VAR_8, VAR_9;
 struct iwl_trans_pcie *VAR_10 = FUNC_1(VAR_6);

 u16 VAR_11 = VAR_6->cfg->base_params->num_of_queues *
   sizeof(struct iwlagn_scd_bc_tbl);



 if (FUNC_2(VAR_10->txq)) {
  VAR_7 = -VAR_0;
  goto error;
 }

 VAR_7 = FUNC_3(VAR_6, &VAR_10->scd_bc_tbls,
       VAR_11);
 if (VAR_7) {
  FUNC_0(VAR_6, "Scheduler BC Table allocation failed\n");
  goto error;
 }


 VAR_7 = FUNC_3(VAR_6, &VAR_10->kw, VAR_3);
 if (VAR_7) {
  FUNC_0(VAR_6, "Keep Warm allocation failed\n");
  goto error;
 }

 VAR_10->txq = FUNC_6(VAR_6->cfg->base_params->num_of_queues,
      sizeof(struct iwl_txq), VAR_2);
 if (!VAR_10->txq) {
  FUNC_0(VAR_6, "Not enough memory for txq\n");
  VAR_7 = VAR_1;
  goto error;
 }


 for (VAR_8 = 0; VAR_8 < VAR_6->cfg->base_params->num_of_queues;
      VAR_8++) {
  VAR_9 = (VAR_8 == VAR_10->cmd_queue) ?
     VAR_4 : VAR_5;
  VAR_7 = FUNC_5(VAR_6, &VAR_10->txq[VAR_8],
       VAR_9, VAR_8);
  if (VAR_7) {
   FUNC_0(VAR_6, "Tx %d queue alloc failed\n", VAR_8);
   goto error;
  }
 }

 return 0;

error:
 FUNC_4(VAR_6);

 return VAR_7;
}
