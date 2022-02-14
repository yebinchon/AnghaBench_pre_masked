
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int size; int * base; int basePA; } ;
struct TYPE_5__ {int size; int * base; int basePA; } ;
struct TYPE_4__ {int size; int * base; int basePA; } ;
struct vmxnet3_tx_queue {int * buf_info; TYPE_3__ comp_ring; TYPE_2__ data_ring; TYPE_1__ tx_ring; } ;
struct vmxnet3_adapter {int pdev; } ;
struct Vmxnet3_TxDesc {int dummy; } ;
struct Vmxnet3_TxDataDesc {int dummy; } ;
struct Vmxnet3_TxCompDesc {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct vmxnet3_tx_queue *VAR_0,
     struct vmxnet3_adapter *VAR_1)
{
 if (VAR_0->tx_ring.base) {
  FUNC_1(VAR_1->pdev, VAR_0->tx_ring.size *
        sizeof(struct Vmxnet3_TxDesc),
        VAR_0->tx_ring.base, VAR_0->tx_ring.basePA);
  VAR_0->tx_ring.base = ((void*)0);
 }
 if (VAR_0->data_ring.base) {
  FUNC_1(VAR_1->pdev, VAR_0->data_ring.size *
        sizeof(struct Vmxnet3_TxDataDesc),
        VAR_0->data_ring.base, VAR_0->data_ring.basePA);
  VAR_0->data_ring.base = ((void*)0);
 }
 if (VAR_0->comp_ring.base) {
  FUNC_1(VAR_1->pdev, VAR_0->comp_ring.size *
        sizeof(struct Vmxnet3_TxCompDesc),
        VAR_0->comp_ring.base, VAR_0->comp_ring.basePA);
  VAR_0->comp_ring.base = ((void*)0);
 }
 FUNC_0(VAR_0->buf_info);
 VAR_0->buf_info = ((void*)0);
}
