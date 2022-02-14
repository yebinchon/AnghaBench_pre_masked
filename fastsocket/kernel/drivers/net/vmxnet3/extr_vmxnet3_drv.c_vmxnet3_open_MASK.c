
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_adapter {int num_tx_queues; TYPE_1__* tx_queue; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int tx_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmxnet3_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmxnet3_adapter*) ;
 int FUNC_3 (struct vmxnet3_adapter*,int ,int ,int ) ;
 int FUNC_4 (struct vmxnet3_adapter*) ;
 int FUNC_5 (struct vmxnet3_adapter*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_2)
{
 struct vmxnet3_adapter *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = FUNC_0(VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_3->num_tx_queues; VAR_5++)
  FUNC_1(&VAR_3->tx_queue[VAR_5].tx_lock);

 VAR_4 = FUNC_3(VAR_3, VAR_1,
        VAR_0,
        VAR_0);
 if (VAR_4)
  goto queue_err;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  goto activate_err;

 return 0;

activate_err:
 FUNC_4(VAR_3);
 FUNC_5(VAR_3);
queue_err:
 return VAR_4;
}
