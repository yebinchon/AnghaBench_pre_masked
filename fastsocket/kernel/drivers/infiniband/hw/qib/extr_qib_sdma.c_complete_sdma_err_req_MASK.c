
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int list; scalar_t__ next_descq_idx; scalar_t__ start_idx; } ;
struct qib_verbs_txreq {TYPE_2__ txreq; TYPE_1__* qp; } ;
struct qib_pportdata {int sdma_activelist; } ;
struct TYPE_3__ {int s_dma_busy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct qib_pportdata*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct qib_pportdata *VAR_0,
      struct qib_verbs_txreq *VAR_1)
{
 FUNC_0(&VAR_1->qp->s_dma_busy);

 VAR_1->txreq.start_idx = 0;
 VAR_1->txreq.next_descq_idx = 0;
 FUNC_2(&VAR_1->txreq.list, &VAR_0->sdma_activelist);
 FUNC_1(VAR_0);
}
