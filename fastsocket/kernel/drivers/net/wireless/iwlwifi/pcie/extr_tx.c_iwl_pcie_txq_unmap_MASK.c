
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_queue {scalar_t__ write_ptr; scalar_t__ read_ptr; int n_bd; } ;
struct iwl_txq {int active; int lock; struct iwl_queue q; } ;
struct iwl_trans_pcie {struct iwl_txq* txq; } ;
struct iwl_trans {int dummy; } ;


 int FUNC_0 (struct iwl_trans*,char*,int,scalar_t__) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,struct iwl_txq*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct iwl_trans*,struct iwl_txq*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct iwl_trans *VAR_0, int VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_1(VAR_0);
 struct iwl_txq *VAR_3 = &VAR_2->txq[VAR_1];
 struct iwl_queue *VAR_4 = &VAR_3->q;

 if (!VAR_4->n_bd)
  return;

 FUNC_5(&VAR_3->lock);
 while (VAR_4->write_ptr != VAR_4->read_ptr) {
  FUNC_0(VAR_0, "Q %d Free %d\n",
       VAR_1, VAR_4->read_ptr);
  FUNC_2(VAR_0, VAR_3);
  VAR_4->read_ptr = FUNC_3(VAR_4->read_ptr, VAR_4->n_bd);
 }
 VAR_3->active = 0;
 FUNC_6(&VAR_3->lock);


 FUNC_4(VAR_0, VAR_3);
}
