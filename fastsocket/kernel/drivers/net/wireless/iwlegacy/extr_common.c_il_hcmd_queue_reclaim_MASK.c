
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_queue {int n_bd; int read_ptr; int write_ptr; } ;
struct il_tx_queue {struct il_queue q; } ;
struct il_priv {int restart; int workqueue; struct il_tx_queue* txq; } ;


 int FUNC_0 (char*,int,int,int,...) ;
 void* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (struct il_queue*,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct il_priv *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct il_tx_queue *VAR_4 = &VAR_0->txq[VAR_1];
 struct il_queue *VAR_5 = &VAR_4->q;
 int VAR_6 = 0;

 if (VAR_2 >= VAR_5->n_bd || FUNC_2(VAR_5, VAR_2) == 0) {
  FUNC_0("Read idx for DMA queue txq id (%d), idx %d, "
         "is out of range [0-%d] %d %d.\n", VAR_1, VAR_2, VAR_5->n_bd,
         VAR_5->write_ptr, VAR_5->read_ptr);
  return;
 }

 for (VAR_2 = FUNC_1(VAR_2, VAR_5->n_bd); VAR_5->read_ptr != VAR_2;
      VAR_5->read_ptr = FUNC_1(VAR_5->read_ptr, VAR_5->n_bd)) {

  if (VAR_6++ > 0) {
   FUNC_0("HCMD skipped: idx (%d) %d %d\n", VAR_2,
          VAR_5->write_ptr, VAR_5->read_ptr);
   FUNC_3(VAR_0->workqueue, &VAR_0->restart);
  }

 }
}
