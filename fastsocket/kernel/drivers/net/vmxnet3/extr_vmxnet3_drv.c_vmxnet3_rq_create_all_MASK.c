
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_adapter {int num_rx_queues; TYPE_1__* netdev; int * rx_queue; } ;
struct TYPE_2__ {int name; int dev; } ;


 int FUNC_0 (int *,char*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,struct vmxnet3_adapter*) ;
 int FUNC_3 (struct vmxnet3_adapter*) ;

__attribute__((used)) static int
FUNC_4(struct vmxnet3_adapter *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_rx_queues; VAR_1++) {
  VAR_2 = FUNC_2(&VAR_0->rx_queue[VAR_1], VAR_0);
  if (FUNC_1(VAR_2)) {
   FUNC_0(&VAR_0->netdev->dev,
    "%s: failed to create rx queue%i\n",
    VAR_0->netdev->name, VAR_1);
   goto err_out;
  }
 }
 return VAR_2;
err_out:
 FUNC_3(VAR_0);
 return VAR_2;

}
