
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; void* base; int basePA; } ;
struct vmxnet3_rx_queue {TYPE_2__* rx_ring; struct vmxnet3_rx_buf_info** buf_info; TYPE_1__ comp_ring; } ;
struct vmxnet3_rx_buf_info {int dummy; } ;
struct vmxnet3_adapter {int netdev; int pdev; } ;
struct Vmxnet3_RxDesc {int dummy; } ;
struct Vmxnet3_RxCompDesc {int dummy; } ;
struct TYPE_4__ {int size; void* base; int basePA; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmxnet3_rx_buf_info* FUNC_0 (size_t,int ) ;
 int FUNC_1 (int ,char*,...) ;
 void* FUNC_2 (int ,size_t,int *) ;
 int FUNC_3 (struct vmxnet3_rx_queue*,struct vmxnet3_adapter*) ;

__attribute__((used)) static int
FUNC_4(struct vmxnet3_rx_queue *VAR_2, struct vmxnet3_adapter *VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 struct vmxnet3_rx_buf_info *VAR_6;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {

  VAR_5 = VAR_2->rx_ring[VAR_4].size * sizeof(struct Vmxnet3_RxDesc);
  VAR_2->rx_ring[VAR_4].base = FUNC_2(VAR_3->pdev, VAR_5,
       &VAR_2->rx_ring[VAR_4].basePA);
  if (!VAR_2->rx_ring[VAR_4].base) {
   FUNC_1(VAR_3->netdev,
       "failed to allocate rx ring %d\n", VAR_4);
   goto err;
  }
 }

 VAR_5 = VAR_2->comp_ring.size * sizeof(struct Vmxnet3_RxCompDesc);
 VAR_2->comp_ring.base = FUNC_2(VAR_3->pdev, VAR_5,
        &VAR_2->comp_ring.basePA);
 if (!VAR_2->comp_ring.base) {
  FUNC_1(VAR_3->netdev, "failed to allocate rx comp ring\n");
  goto err;
 }

 VAR_5 = sizeof(struct vmxnet3_rx_buf_info) * (VAR_2->rx_ring[0].size +
         VAR_2->rx_ring[1].size);
 VAR_6 = FUNC_0(VAR_5, VAR_1);
 if (!VAR_6)
  goto err;

 VAR_2->buf_info[0] = VAR_6;
 VAR_2->buf_info[1] = VAR_6 + VAR_2->rx_ring[0].size;

 return 0;

err:
 FUNC_3(VAR_2, VAR_3);
 return -VAR_0;
}
