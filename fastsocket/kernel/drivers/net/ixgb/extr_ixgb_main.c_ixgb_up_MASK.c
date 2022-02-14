
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int mtu; int name; int dev_addr; } ;
struct ixgb_hw {int max_frame_size; } ;
struct ixgb_adapter {int have_msi; int watchdog_timer; int napi; int flags; TYPE_1__* pdev; struct ixgb_hw hw; int rx_ring; struct net_device* netdev; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ixgb_hw*,int ) ;
 int VAR_9 ;
 int FUNC_3 (struct ixgb_hw*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct ixgb_adapter*,int ) ;
 int FUNC_6 (struct ixgb_adapter*) ;
 int FUNC_7 (struct ixgb_adapter*) ;
 int VAR_14 ;
 int FUNC_8 (struct ixgb_adapter*) ;
 int FUNC_9 (struct ixgb_hw*,int ,int ) ;
 int FUNC_10 (struct ixgb_adapter*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct ixgb_adapter*) ;
 int VAR_15 ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int ,int *,int,int ,struct net_device*) ;

int
FUNC_19(struct ixgb_adapter *VAR_16)
{
 struct net_device *VAR_17 = VAR_16->netdev;
 int VAR_18, VAR_19 = VAR_5;
 int VAR_20 = VAR_17->mtu + VAR_2 + VAR_1;
 struct ixgb_hw *VAR_21 = &VAR_16->hw;



 FUNC_9(VAR_21, VAR_17->dev_addr, 0);
 FUNC_11(VAR_17);

 FUNC_10(VAR_16);

 FUNC_7(VAR_16);
 FUNC_12(VAR_16);
 FUNC_6(VAR_16);
 FUNC_5(VAR_16, FUNC_1(&VAR_16->rx_ring));


 FUNC_3(&VAR_16->hw, VAR_4, 0xffffffff);


 if (FUNC_2(&VAR_16->hw, VAR_12) & VAR_9) {
  VAR_18 = FUNC_17(VAR_16->pdev);
  if (!VAR_18) {
   VAR_16->have_msi = 1;
   VAR_19 = 0;
  }

 }

 VAR_18 = FUNC_18(VAR_16->pdev->irq, &VAR_14, VAR_19,
                   VAR_17->name, VAR_17);
 if (VAR_18) {
  if (VAR_16->have_msi)
   FUNC_16(VAR_16->pdev);
  FUNC_0(VAR_11, VAR_3,
   "Unable to allocate interrupt Error: %d\n", VAR_18);
  return VAR_18;
 }

 if ((VAR_21->max_frame_size != VAR_20) ||
  (VAR_21->max_frame_size !=
  (FUNC_2(VAR_21, VAR_10) >> VAR_8))) {

  VAR_21->max_frame_size = VAR_20;

  FUNC_3(VAR_21, VAR_10, VAR_21->max_frame_size << VAR_8);

  if (VAR_21->max_frame_size >
     VAR_7 + VAR_1) {
   u32 VAR_22 = FUNC_2(VAR_21, VAR_0);

   if (!(VAR_22 & VAR_6)) {
    VAR_22 |= VAR_6;
    FUNC_3(VAR_21, VAR_0, VAR_22);
   }
  }
 }

 FUNC_4(VAR_13, &VAR_16->flags);

 FUNC_14(&VAR_16->napi);
 FUNC_8(VAR_16);

 FUNC_15(VAR_17);

 FUNC_13(&VAR_16->watchdog_timer, VAR_15);

 return 0;
}
