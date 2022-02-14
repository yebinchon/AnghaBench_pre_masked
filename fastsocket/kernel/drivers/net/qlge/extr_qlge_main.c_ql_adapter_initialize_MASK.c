
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ql_adapter {int rx_ring_count; int rss_ring_count; int tx_ring_count; TYPE_3__* rx_ring; int ndev; TYPE_2__* nic_ops; int * tx_ring; int wol; TYPE_1__* pdev; } ;
struct TYPE_6__ {int napi; } ;
struct TYPE_5__ {int (* port_initialize ) (struct ql_adapter*) ;} ;
struct TYPE_4__ {int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*,...) ;
 int FUNC_2 (struct ql_adapter*) ;
 int FUNC_3 (struct ql_adapter*,int ) ;
 int FUNC_4 (struct ql_adapter*) ;
 int FUNC_5 (struct ql_adapter*,TYPE_3__*) ;
 int FUNC_6 (struct ql_adapter*,int *) ;
 int FUNC_7 (struct ql_adapter*,int ,int) ;
 int FUNC_8 (struct ql_adapter*) ;

__attribute__((used)) static int FUNC_9(struct ql_adapter *VAR_28)
{
 u32 VAR_29, VAR_30;
 int VAR_31;
 int VAR_32 = 0;




 VAR_29 = VAR_24 | VAR_25;
 VAR_30 = VAR_29 << 16;
 FUNC_7(VAR_28, VAR_23, VAR_30 | VAR_29);


 VAR_29 = VAR_14 | VAR_16;
 VAR_30 = VAR_15 | (VAR_16 << 16);
 FUNC_7(VAR_28, VAR_13, (VAR_30 | VAR_29));


 FUNC_7(VAR_28, VAR_9, (VAR_10 << 16) | VAR_10);


 VAR_29 = VAR_6 | VAR_4 | VAR_5 |
     VAR_3 | VAR_8;
 VAR_29 |= VAR_22;


 VAR_30 = VAR_7 |
     VAR_1 | VAR_2 | (VAR_29 << 16);
 FUNC_7(VAR_28, VAR_0, VAR_30 | VAR_29);

 FUNC_7(VAR_28, VAR_20, VAR_21);






 FUNC_7(VAR_28, VAR_17, VAR_18 | VAR_19);




 VAR_29 = FUNC_3(VAR_28, VAR_11);
 VAR_29 &= ~VAR_12;
 VAR_30 = 0xffff0000;


 FUNC_7(VAR_28, VAR_11, VAR_30);
 FUNC_7(VAR_28, VAR_11, VAR_30 | VAR_29);


 if (VAR_28->pdev->subsystem_device == 0x0068 ||
   VAR_28->pdev->subsystem_device == 0x0180)
  VAR_28->wol = VAR_26;


 for (VAR_31 = 0; VAR_31 < VAR_28->rx_ring_count; VAR_31++) {
  VAR_32 = FUNC_5(VAR_28, &VAR_28->rx_ring[VAR_31]);
  if (VAR_32) {
   FUNC_1(VAR_28, VAR_27, VAR_28->ndev,
      "Failed to start rx ring[%d].\n", VAR_31);
   return VAR_32;
  }
 }




 if (VAR_28->rss_ring_count > 1) {
  VAR_32 = FUNC_4(VAR_28);
  if (VAR_32) {
   FUNC_1(VAR_28, VAR_27, VAR_28->ndev, "Failed to start RSS.\n");
   return VAR_32;
  }
 }


 for (VAR_31 = 0; VAR_31 < VAR_28->tx_ring_count; VAR_31++) {
  VAR_32 = FUNC_6(VAR_28, &VAR_28->tx_ring[VAR_31]);
  if (VAR_32) {
   FUNC_1(VAR_28, VAR_27, VAR_28->ndev,
      "Failed to start tx ring[%d].\n", VAR_31);
   return VAR_32;
  }
 }


 VAR_32 = VAR_28->nic_ops->port_initialize(VAR_28);
 if (VAR_32)
  FUNC_1(VAR_28, VAR_27, VAR_28->ndev, "Failed to start port.\n");


 VAR_32 = FUNC_2(VAR_28);
 if (VAR_32) {
  FUNC_1(VAR_28, VAR_27, VAR_28->ndev,
     "Failed to init CAM/Routing tables.\n");
  return VAR_32;
 }


 for (VAR_31 = 0; VAR_31 < VAR_28->rss_ring_count; VAR_31++)
  FUNC_0(&VAR_28->rx_ring[VAR_31].napi);

 return VAR_32;
}
