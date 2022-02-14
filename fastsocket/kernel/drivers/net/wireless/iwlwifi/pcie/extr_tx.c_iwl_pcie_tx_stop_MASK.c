
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans_pcie {int txq; int irq_lock; } ;
struct iwl_trans {TYPE_2__* cfg; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {int num_of_queues; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iwl_trans*,char*,int,int ) ;
 struct iwl_trans_pcie* FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*,char*) ;
 int FUNC_5 (struct iwl_trans*,int ) ;
 int FUNC_6 (struct iwl_trans*,int) ;
 int FUNC_7 (struct iwl_trans*,int ,int ,int) ;
 int FUNC_8 (struct iwl_trans*,int ) ;
 int FUNC_9 (struct iwl_trans*,int ,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

int FUNC_12(struct iwl_trans *VAR_2)
{
 struct iwl_trans_pcie *VAR_3 = FUNC_3(VAR_2);
 int VAR_4, VAR_5, VAR_6;
 unsigned long VAR_7;


 FUNC_10(&VAR_3->irq_lock, VAR_7);

 FUNC_5(VAR_2, 0);


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_9(VAR_2,
       FUNC_0(VAR_4), 0x0);
  VAR_6 = FUNC_7(VAR_2, VAR_1,
   FUNC_1(VAR_4), 1000);
  if (VAR_6 < 0)
   FUNC_2(VAR_2,
    "Failing on timeout while stopping DMA channel %d [0x%08x]\n",
    VAR_4,
    FUNC_8(VAR_2,
        VAR_1));
 }
 FUNC_11(&VAR_3->irq_lock, VAR_7);

 if (!VAR_3->txq) {
  FUNC_4(VAR_2,
    "Stopping tx queues that aren't allocated...\n");
  return 0;
 }


 for (VAR_5 = 0; VAR_5 < VAR_2->cfg->base_params->num_of_queues;
      VAR_5++)
  FUNC_6(VAR_2, VAR_5);

 return 0;
}
