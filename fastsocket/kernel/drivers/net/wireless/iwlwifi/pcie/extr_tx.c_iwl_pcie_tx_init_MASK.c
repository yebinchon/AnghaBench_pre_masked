
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dma; } ;
struct iwl_trans_pcie {int cmd_queue; int * txq; int irq_lock; TYPE_1__ kw; } ;
struct iwl_trans {TYPE_3__* cfg; } ;
struct TYPE_6__ {TYPE_2__* base_params; } ;
struct TYPE_5__ {int num_of_queues; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_trans*,char*,int) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*,int *,int,int) ;
 int FUNC_5 (struct iwl_trans*,int ,int) ;
 int FUNC_6 (struct iwl_trans*,int ,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

int FUNC_9(struct iwl_trans *VAR_4)
{
 struct iwl_trans_pcie *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;
 int VAR_7, VAR_8;
 unsigned long VAR_9;
 bool VAR_10 = 0;

 if (!VAR_5->txq) {
  VAR_6 = FUNC_2(VAR_4);
  if (VAR_6)
   goto error;
  VAR_10 = 1;
 }

 FUNC_7(&VAR_5->irq_lock, VAR_9);


 FUNC_6(VAR_4, VAR_1, 0);


 FUNC_5(VAR_4, VAR_0,
      VAR_5->kw.dma >> 4);

 FUNC_8(&VAR_5->irq_lock, VAR_9);


 for (VAR_7 = 0; VAR_7 < VAR_4->cfg->base_params->num_of_queues;
      VAR_7++) {
  VAR_8 = (VAR_7 == VAR_5->cmd_queue) ?
     VAR_2 : VAR_3;
  VAR_6 = FUNC_4(VAR_4, &VAR_5->txq[VAR_7],
      VAR_8, VAR_7);
  if (VAR_6) {
   FUNC_0(VAR_4, "Tx %d queue init failed\n", VAR_7);
   goto error;
  }
 }

 return 0;
error:

 if (VAR_10)
  FUNC_3(VAR_4);
 return VAR_6;
}
