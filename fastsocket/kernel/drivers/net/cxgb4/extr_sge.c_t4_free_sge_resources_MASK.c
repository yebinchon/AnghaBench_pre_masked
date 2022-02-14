
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cntxt_id; scalar_t__ desc; int sdesc; int in_use; } ;
struct sge_ofld_txq {TYPE_2__ q; int sendq; int qresume_tsk; } ;
struct TYPE_7__ {scalar_t__ desc; } ;
struct sge_ofld_rxq {int fl; TYPE_4__ rspq; } ;
struct sge_eth_txq {TYPE_2__ q; } ;
struct sge_eth_rxq {int fl; TYPE_4__ rspq; } ;
struct sge_ctrl_txq {TYPE_2__ q; int sendq; int qresume_tsk; } ;
struct TYPE_5__ {int ethqsets; int ofldqsets; int rdmaqs; int egr_map; TYPE_4__ intrq; TYPE_4__ fw_evtq; struct sge_ofld_txq* ctrlq; struct sge_ofld_txq* ofldtxq; struct sge_ofld_rxq* rdmarxq; struct sge_ofld_rxq* ofldrxq; struct sge_eth_txq* ethtxq; struct sge_eth_rxq* ethrxq; } ;
struct adapter {TYPE_1__ sge; int fn; } ;


 int FUNC_0 (struct sge_ofld_txq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct adapter*,TYPE_4__*,int *) ;
 int FUNC_3 (struct adapter*,TYPE_2__*,int ,int) ;
 int FUNC_4 (struct adapter*,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct adapter*,int ,int ,int ,int ) ;
 int FUNC_8 (struct adapter*,int ,int ,int ,int ) ;
 int FUNC_9 (struct adapter*,int ,int ,int ,int ) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct adapter *VAR_0)
{
 int VAR_1;
 struct sge_eth_rxq *VAR_2 = VAR_0->sge.ethrxq;
 struct sge_eth_txq *VAR_3 = VAR_0->sge.ethtxq;
 struct sge_ofld_rxq *VAR_4 = VAR_0->sge.ofldrxq;


 for (VAR_1 = 0; VAR_1 < VAR_0->sge.ethqsets; VAR_1++, VAR_2++, VAR_3++) {
  if (VAR_2->rspq.desc)
   FUNC_2(VAR_0, &VAR_2->rspq, &VAR_2->fl);
  if (VAR_3->q.desc) {
   FUNC_8(VAR_0, VAR_0->fn, VAR_0->fn, 0,
           VAR_3->q.cntxt_id);
   FUNC_3(VAR_0, &VAR_3->q, VAR_3->q.in_use, 1);
   FUNC_5(VAR_3->q.sdesc);
   FUNC_4(VAR_0, &VAR_3->q);
  }
 }


 for (VAR_1 = 0; VAR_1 < VAR_0->sge.ofldqsets; VAR_1++, VAR_4++) {
  if (VAR_4->rspq.desc)
   FUNC_2(VAR_0, &VAR_4->rspq, &VAR_4->fl);
 }
 for (VAR_1 = 0, VAR_4 = VAR_0->sge.rdmarxq; VAR_1 < VAR_0->sge.rdmaqs; VAR_1++, VAR_4++) {
  if (VAR_4->rspq.desc)
   FUNC_2(VAR_0, &VAR_4->rspq, &VAR_4->fl);
 }


 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->sge.ofldtxq); VAR_1++) {
  struct sge_ofld_txq *VAR_5 = &VAR_0->sge.ofldtxq[VAR_1];

  if (VAR_5->q.desc) {
   FUNC_10(&VAR_5->qresume_tsk);
   FUNC_9(VAR_0, VAR_0->fn, VAR_0->fn, 0,
     VAR_5->q.cntxt_id);
   FUNC_3(VAR_0, &VAR_5->q, VAR_5->q.in_use, 0);
   FUNC_5(VAR_5->q.sdesc);
   FUNC_1(&VAR_5->sendq);
   FUNC_4(VAR_0, &VAR_5->q);
  }
 }


 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->sge.ctrlq); VAR_1++) {
  struct sge_ctrl_txq *VAR_6 = &VAR_0->sge.ctrlq[VAR_1];

  if (VAR_6->q.desc) {
   FUNC_10(&VAR_6->qresume_tsk);
   FUNC_7(VAR_0, VAR_0->fn, VAR_0->fn, 0,
     VAR_6->q.cntxt_id);
   FUNC_1(&VAR_6->sendq);
   FUNC_4(VAR_0, &VAR_6->q);
  }
 }

 if (VAR_0->sge.fw_evtq.desc)
  FUNC_2(VAR_0, &VAR_0->sge.fw_evtq, ((void*)0));

 if (VAR_0->sge.intrq.desc)
  FUNC_2(VAR_0, &VAR_0->sge.intrq, ((void*)0));


 FUNC_6(VAR_0->sge.egr_map, 0, sizeof(VAR_0->sge.egr_map));
}
