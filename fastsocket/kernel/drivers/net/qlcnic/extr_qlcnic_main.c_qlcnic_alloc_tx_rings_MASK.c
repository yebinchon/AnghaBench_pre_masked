
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_host_tx_ring {int irq; struct qlcnic_adapter* adapter; struct qlcnic_cmd_buffer* cmd_buf_arr; int txq; int num_desc; } ;
struct qlcnic_cmd_buffer {int dummy; } ;
struct qlcnic_adapter {int max_drv_tx_rings; int flags; int max_sds_rings; TYPE_1__* msix_entries; struct qlcnic_host_tx_ring* tx_ring; int num_txd; } ;
struct net_device {int dev; } ;
struct TYPE_2__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_host_tx_ring*) ;
 int FUNC_1 (int *,char*) ;
 struct qlcnic_host_tx_ring* FUNC_2 (int,int ) ;
 int FUNC_3 (struct qlcnic_cmd_buffer*,int ,int ) ;
 int FUNC_4 (struct net_device*,int) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 struct qlcnic_cmd_buffer* FUNC_7 (int ) ;

int FUNC_8(struct qlcnic_adapter *VAR_3,
     struct net_device *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 struct qlcnic_host_tx_ring *VAR_9;
 struct qlcnic_cmd_buffer *VAR_10;

 VAR_6 = VAR_3->max_drv_tx_rings * sizeof(struct qlcnic_host_tx_ring);
 VAR_9 = FUNC_2(VAR_6, VAR_1);
 if (VAR_9 == ((void*)0)) {
  FUNC_1(&VAR_4->dev, "failed to allocate tx rings\n");
  return -VAR_0;
 }
 VAR_3->tx_ring = VAR_9;

 for (VAR_5 = 0; VAR_5 < VAR_3->max_drv_tx_rings; VAR_5++) {
  VAR_9 = &VAR_3->tx_ring[VAR_5];
  VAR_9->num_desc = VAR_3->num_txd;
  VAR_9->txq = FUNC_4(VAR_4, VAR_5);
  VAR_10 = FUNC_7(FUNC_0(VAR_9));
  if (VAR_10 == ((void*)0)) {
   FUNC_1(&VAR_4->dev,
    "failed to allocate cmd buffer ring\n");
   FUNC_6(VAR_3);
   return -VAR_0;
  }
  FUNC_3(VAR_10, 0, FUNC_0(VAR_9));
  VAR_9->cmd_buf_arr = VAR_10;
 }

 if (FUNC_5(VAR_3)) {
  for (VAR_5 = 0; VAR_5 < VAR_3->max_drv_tx_rings; VAR_5++) {
   VAR_9 = &VAR_3->tx_ring[VAR_5];
   VAR_9->adapter = VAR_3;
   if (VAR_3->flags & VAR_2) {
    VAR_8 = VAR_3->max_sds_rings + VAR_5;
    VAR_7 = VAR_3->msix_entries[VAR_8].vector;
    VAR_9->irq = VAR_7;
   }
  }
 }
 return 0;
}
