
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;
struct efx_nic {scalar_t__ link_advertising; int wanted_fc; int mac_lock; TYPE_2__* type; int net_dev; TYPE_1__* phy_op; } ;
struct TYPE_4__ {int (* reconfigure_mac ) (struct efx_nic*) ;} ;
struct TYPE_3__ {int (* reconfigure ) (struct efx_nic*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct efx_nic*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct efx_nic*,int) ;
 scalar_t__ FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*,int ) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (struct efx_nic*) ;
 int FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct efx_nic* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_12 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_13 (struct efx_nic*) ;
 int FUNC_14 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_7,
          struct ethtool_pauseparam *VAR_8)
{
 struct efx_nic *VAR_9 = FUNC_10(VAR_7);
 u8 VAR_10, VAR_11;
 u32 VAR_12;
 bool VAR_13;
 int VAR_14 = 0;

 FUNC_8(&VAR_9->mac_lock);

 VAR_10 = ((VAR_8->rx_pause ? VAR_1 : 0) |
       (VAR_8->tx_pause ? VAR_2 : 0) |
       (VAR_8->autoneg ? VAR_0 : 0));

 if ((VAR_10 & VAR_2) && !(VAR_10 & VAR_1)) {
  FUNC_11(VAR_9, VAR_6, VAR_9->net_dev,
     "Flow control unsupported: tx ON rx OFF\n");
  VAR_14 = -VAR_4;
  goto out;
 }

 if ((VAR_10 & VAR_0) && !VAR_9->link_advertising) {
  FUNC_11(VAR_9, VAR_6, VAR_9->net_dev,
     "Autonegotiation is disabled\n");
  VAR_14 = -VAR_4;
  goto out;
 }






 VAR_13 = (VAR_10 & VAR_2) && !(VAR_9->wanted_fc & VAR_2);
 if (FUNC_0(VAR_9) && VAR_13) {
  if (FUNC_2(VAR_9) == VAR_3) {

   FUNC_7(VAR_9);
   FUNC_4(VAR_9);
   FUNC_5(VAR_9);
   FUNC_6(VAR_9);
  } else {

   FUNC_3(VAR_9, VAR_5);
  }
 }

 VAR_12 = VAR_9->link_advertising;
 VAR_11 = VAR_9->wanted_fc;
 FUNC_1(VAR_9, VAR_10);
 if (VAR_9->link_advertising != VAR_12 ||
     (VAR_9->wanted_fc ^ VAR_11) & VAR_0) {
  VAR_14 = VAR_9->phy_op->reconfigure(VAR_9);
  if (VAR_14) {
   FUNC_12(VAR_9, VAR_6, VAR_9->net_dev,
      "Unable to advertise requested flow "
      "control setting\n");
   goto out;
  }
 }




 VAR_9->type->reconfigure_mac(VAR_9);

out:
 FUNC_9(&VAR_9->mac_lock);

 return VAR_14;
}
