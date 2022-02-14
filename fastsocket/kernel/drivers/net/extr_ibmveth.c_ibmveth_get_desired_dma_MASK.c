
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_dev {int dev; } ;
struct net_device {int mtu; } ;
struct ibmveth_rx_q_entry {int dummy; } ;
struct ibmveth_adapter {TYPE_1__* rx_buff_pool; } ;
struct TYPE_2__ {unsigned long size; int buff_size; scalar_t__ active; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int) ;
 struct net_device* FUNC_1 (int *) ;
 struct ibmveth_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static unsigned long FUNC_3(struct vio_dev *VAR_4)
{
 struct net_device *VAR_5 = FUNC_1(&VAR_4->dev);
 struct ibmveth_adapter *VAR_6;
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9 = 1;


 if (VAR_5 == ((void*)0))
  return FUNC_0(VAR_2);

 VAR_6 = FUNC_2(VAR_5);

 VAR_7 = VAR_0 + VAR_1;
 VAR_7 += FUNC_0(VAR_5->mtu);

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {

  if (VAR_6->rx_buff_pool[VAR_8].active)
   VAR_7 +=
       VAR_6->rx_buff_pool[VAR_8].size *
       FUNC_0(VAR_6->rx_buff_pool[VAR_8].
               buff_size);
  VAR_9 += VAR_6->rx_buff_pool[VAR_8].size;
 }

 VAR_7 += FUNC_0(VAR_9 * sizeof(struct ibmveth_rx_q_entry));

 return VAR_7;
}
