
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union Vmxnet3_GenericDesc {int tcd; } ;
struct TYPE_2__ {int next2proc; scalar_t__ gen; union Vmxnet3_GenericDesc* base; } ;
struct vmxnet3_tx_queue {int tx_lock; int tx_ring; TYPE_1__ comp_ring; } ;
struct vmxnet3_adapter {int netdev; int pdev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct vmxnet3_tx_queue*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (struct vmxnet3_tx_queue*,struct vmxnet3_adapter*) ;
 int FUNC_10 (struct vmxnet3_tx_queue*,struct vmxnet3_adapter*) ;
 scalar_t__ FUNC_11 (int ,struct vmxnet3_tx_queue*,int ,struct vmxnet3_adapter*) ;

__attribute__((used)) static int
FUNC_12(struct vmxnet3_tx_queue *VAR_0,
   struct vmxnet3_adapter *VAR_1)
{
 int VAR_2 = 0;
 union Vmxnet3_GenericDesc *VAR_3;

 VAR_3 = VAR_0->comp_ring.base + VAR_0->comp_ring.next2proc;
 while (FUNC_0(&VAR_3->tcd) == VAR_0->comp_ring.gen) {
  VAR_2 += FUNC_11(FUNC_1(
            &VAR_3->tcd), VAR_0, VAR_1->pdev,
            VAR_1);

  FUNC_8(&VAR_0->comp_ring);
  VAR_3 = VAR_0->comp_ring.base + VAR_0->comp_ring.next2proc;
 }

 if (VAR_2) {
  FUNC_4(&VAR_0->tx_lock);
  if (FUNC_6(FUNC_9(VAR_0, VAR_1) &&
        FUNC_7(&VAR_0->tx_ring) >
        FUNC_2(VAR_0) &&
        FUNC_3(VAR_1->netdev))) {
   FUNC_10(VAR_0, VAR_1);
  }
  FUNC_5(&VAR_0->tx_lock);
 }
 return VAR_2;
}
