
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nic {scalar_t__ mac; int flags; int watchdog; int netdev; int cmd_lock; TYPE_2__* csr; int mii; } ;
struct ethtool_cmd {scalar_t__ duplex; int cmd; } ;
struct TYPE_3__ {int cmd_hi; } ;
struct TYPE_4__ {TYPE_1__ scb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct nic*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nic*) ;
 int FUNC_3 (struct nic*) ;
 scalar_t__ FUNC_4 (struct ethtool_cmd*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int *) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct ethtool_cmd*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ,char*,...) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct nic*,int ,int ,int ,char*,scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_17(unsigned long VAR_13)
{
 struct nic *VAR_14 = (struct nic *)VAR_13;
 struct ethtool_cmd VAR_15 = { .cmd = VAR_3 };
 u32 VAR_16;

 FUNC_13(VAR_14, VAR_12, VAR_4, VAR_14->netdev,
       "right now = %ld\n", VAR_10);



 FUNC_8(&VAR_14->mii, &VAR_15);
 VAR_16 = FUNC_4(&VAR_15);

 if (FUNC_9(&VAR_14->mii) && !FUNC_12(VAR_14->netdev)) {
  FUNC_11(VAR_14->netdev, "NIC Link is Up %u Mbps %s Duplex\n",
       VAR_16 == VAR_6 ? 100 : 10,
       VAR_15.duplex == VAR_0 ? "Full" : "Half");
 } else if (!FUNC_9(&VAR_14->mii) && FUNC_12(VAR_14->netdev)) {
  FUNC_11(VAR_14->netdev, "NIC Link is Down\n");
 }

 FUNC_7(&VAR_14->mii);






 FUNC_15(&VAR_14->cmd_lock);
 FUNC_6(FUNC_5(&VAR_14->csr->scb.cmd_hi) | VAR_9,&VAR_14->csr->scb.cmd_hi);
 FUNC_3(VAR_14);
 FUNC_16(&VAR_14->cmd_lock);

 FUNC_2(VAR_14);
 FUNC_0(VAR_14, VAR_16, VAR_15.duplex);

 if (VAR_14->mac <= VAR_11)

  FUNC_1(VAR_14->netdev);

 if (VAR_14->flags & VAR_7 && VAR_16 == VAR_5 && VAR_15.duplex == VAR_1)

  VAR_14->flags |= VAR_8;
 else
  VAR_14->flags &= ~VAR_8;

 FUNC_10(&VAR_14->watchdog,
    FUNC_14(VAR_10 + VAR_2));
}
