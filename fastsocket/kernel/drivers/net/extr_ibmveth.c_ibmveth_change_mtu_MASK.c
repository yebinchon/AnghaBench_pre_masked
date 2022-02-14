
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_dev {int dummy; } ;
struct net_device {int mtu; } ;
struct ibmveth_adapter {int pool_config; int netdev; TYPE_1__* rx_buff_pool; struct vio_dev* vdev; } ;
struct TYPE_2__ {int buff_size; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vio_dev*) ;
 int FUNC_2 (int ) ;
 struct ibmveth_adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct vio_dev*,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4, int VAR_5)
{
 struct ibmveth_adapter *VAR_6 = FUNC_3(VAR_4);
 struct vio_dev *VAR_7 = VAR_6->vdev;
 int VAR_8 = VAR_5 + VAR_1;
 int VAR_9, VAR_10;
 int VAR_11 = 0;

 if (VAR_5 < VAR_2)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  if (VAR_8 < VAR_6->rx_buff_pool[VAR_9].buff_size)
   break;

 if (VAR_9 == VAR_3)
  return -VAR_0;



 if (FUNC_4(VAR_6->netdev)) {
  VAR_11 = 1;
  VAR_6->pool_config = 1;
  FUNC_0(VAR_6->netdev);
  VAR_6->pool_config = 0;
 }


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_6->rx_buff_pool[VAR_9].active = 1;

  if (VAR_8 < VAR_6->rx_buff_pool[VAR_9].buff_size) {
   VAR_4->mtu = VAR_5;
   FUNC_5(VAR_7,
      FUNC_1
      (VAR_7));
   if (VAR_11) {
    return FUNC_2(VAR_6->netdev);
   }
   return 0;
  }
 }

 if (VAR_11 && (VAR_10 = FUNC_2(VAR_6->netdev)))
  return VAR_10;

 return -VAR_0;
}
