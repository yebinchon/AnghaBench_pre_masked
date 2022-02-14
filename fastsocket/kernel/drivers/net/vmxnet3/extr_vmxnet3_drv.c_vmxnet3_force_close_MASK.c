
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_adapter {int num_rx_queues; int netdev; TYPE_1__* rx_queue; int state; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

void
FUNC_4(struct vmxnet3_adapter *VAR_1)
{
 int VAR_2;





 FUNC_0(FUNC_3(VAR_0, &VAR_1->state));


 for (VAR_2 = 0; VAR_2 < VAR_1->num_rx_queues; VAR_2++)
  FUNC_2(&VAR_1->rx_queue[VAR_2].napi);
 FUNC_1(VAR_1->netdev);
}
