
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int irq; } ;
struct ibmveth_adapter {scalar_t__ buffer_list_addr; int rx_no_buffer; TYPE_1__* vdev; int pool_config; int napi; } ;
struct TYPE_2__ {int unit_address; } ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (long) ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct net_device*) ;
 long FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ibmveth_adapter*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,char*) ;
 int FUNC_7 (struct net_device*,char*,long) ;
 struct ibmveth_adapter* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3)
{
 struct ibmveth_adapter *VAR_4 = FUNC_8(VAR_3);
 long VAR_5;

 FUNC_6(VAR_3, "close starting\n");

 FUNC_5(&VAR_4->napi);

 if (!VAR_4->pool_config)
  FUNC_9(VAR_3);

 FUNC_3(VAR_4->vdev->unit_address, VAR_2);

 do {
  VAR_5 = FUNC_2(VAR_4->vdev->unit_address);
 } while (FUNC_0(VAR_5) || (VAR_5 == VAR_0));

 if (VAR_5 != VAR_1) {
  FUNC_7(VAR_3, "h_free_logical_lan failed with %lx, "
      "continuing with close\n", VAR_5);
 }

 FUNC_1(VAR_3->irq, VAR_3);

 VAR_4->rx_no_buffer = *(u64 *)(((char *)VAR_4->buffer_list_addr) +
      4096 - 8);

 FUNC_4(VAR_4);

 FUNC_6(VAR_3, "close complete\n");

 return 0;
}
