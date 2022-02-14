
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ desc; } ;
struct sge_ofld_txq {int qresume_tsk; TYPE_1__ q; } ;
struct sge_ctrl_txq {int qresume_tsk; TYPE_1__ q; } ;
struct TYPE_4__ {scalar_t__ function; } ;
struct sge {struct sge_ofld_txq* ctrlq; struct sge_ofld_txq* ofldtxq; TYPE_2__ tx_timer; TYPE_2__ rx_timer; } ;
struct adapter {struct sge sge; } ;


 int FUNC_0 (struct sge_ofld_txq*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;

void FUNC_4(struct adapter *VAR_0)
{
 int VAR_1;
 struct sge *VAR_2 = &VAR_0->sge;

 if (FUNC_2())
  return;

 if (VAR_2->rx_timer.function)
  FUNC_1(&VAR_2->rx_timer);
 if (VAR_2->tx_timer.function)
  FUNC_1(&VAR_2->tx_timer);

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_2->ofldtxq); VAR_1++) {
  struct sge_ofld_txq *VAR_3 = &VAR_2->ofldtxq[VAR_1];

  if (VAR_3->q.desc)
   FUNC_3(&VAR_3->qresume_tsk);
 }
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_2->ctrlq); VAR_1++) {
  struct sge_ctrl_txq *VAR_4 = &VAR_2->ctrlq[VAR_1];

  if (VAR_4->q.desc)
   FUNC_3(&VAR_4->qresume_tsk);
 }
}
