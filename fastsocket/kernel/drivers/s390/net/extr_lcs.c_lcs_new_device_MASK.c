
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; int flags; int * netdev_ops; int dev_addr; struct lcs_card* ml_priv; int dev; } ;
struct TYPE_4__ {int ccwdev; } ;
struct TYPE_3__ {int ccwdev; } ;
struct lcs_card {int state; int lan_type; int ip_assists_supported; TYPE_2__ write; TYPE_1__ read; struct net_device* dev; int mac; int lan_type_trans; } ;
struct ccwgroup_device {int * cdev; int dev; } ;
typedef enum lcs_dev_states { ____Placeholder_lcs_dev_states } lcs_dev_states ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,struct lcs_card**,int) ;
 int FUNC_1 (int,int ,char*) ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct net_device* FUNC_2 (int ) ;
 struct net_device* FUNC_3 (int ) ;
 struct net_device* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*,int,int) ;
 struct lcs_card* FUNC_8 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct lcs_card*) ;
 int FUNC_10 (struct lcs_card*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (struct ccwgroup_device*) ;
 int FUNC_12 (struct lcs_card*,int) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct lcs_card*) ;
 int FUNC_15 (struct lcs_card*) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,int ,char*) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_21(struct ccwgroup_device *VAR_13)
{
 struct lcs_card *VAR_14;
 struct net_device *VAR_15=((void*)0);
 enum lcs_dev_states VAR_16;
 int VAR_17;

 VAR_14 = FUNC_8(&VAR_13->dev);
 if (!VAR_14)
  return -VAR_2;

 FUNC_1(2, VAR_11, "newdev");
 FUNC_0(3, VAR_11, &VAR_14, sizeof(void*));
 VAR_14->read.ccwdev = VAR_13->cdev[0];
 VAR_14->write.ccwdev = VAR_13->cdev[1];

 VAR_16 = VAR_14->state;
 FUNC_6(VAR_14->read.ccwdev);
 FUNC_6(VAR_14->write.ccwdev);

 FUNC_1(3, VAR_11, "lcsnewdv");

 FUNC_14(VAR_14);
 VAR_17 = FUNC_10(VAR_14);
 if (VAR_17) {
  FUNC_1(2, VAR_11, "dtctfail");
  FUNC_7(&VAR_14->dev->dev,
   "Detecting a network adapter for LCS devices"
   " failed with rc=%d (0x%x)\n", VAR_17, VAR_17);
  FUNC_15(VAR_14);
  goto out;
 }
 if (VAR_14->dev) {
  FUNC_1(2, VAR_11, "samedev");
  FUNC_0(3, VAR_11, &VAR_14, sizeof(void*));
  goto netdev_out;
 }
 switch (VAR_14->lan_type) {
 default:
  FUNC_1(3, VAR_11, "errinit");
  FUNC_19(" Initialization failed\n");
  goto out;
 }
 if (!VAR_15)
  goto out;
 VAR_14->dev = VAR_15;
 VAR_14->dev->ml_priv = VAR_14;
 VAR_14->dev->netdev_ops = &VAR_10;
 FUNC_16(VAR_14->dev->dev_addr, VAR_14->mac, VAR_6);




netdev_out:
 FUNC_12(VAR_14,0xffffffff);
 if (VAR_16 == VAR_0) {
  FUNC_13(VAR_14->dev);
  VAR_14->dev->flags |= VAR_3;
  FUNC_17(VAR_14->dev);
  FUNC_18(VAR_14->dev);
  VAR_14->state = VAR_1;
 } else {
  FUNC_15(VAR_14);
 }

 if (FUNC_11(VAR_13) != 0)
  goto out;


 FUNC_20("LCS device %s %s IPv6 support\n", VAR_14->dev->name,
  (VAR_14->ip_assists_supported & VAR_4) ?
  "with" : "without");

 FUNC_20("LCS device %s %s Multicast support\n", VAR_14->dev->name,
  (VAR_14->ip_assists_supported & VAR_5) ?
  "with" : "without");
 return 0;
out:

 FUNC_5(VAR_14->read.ccwdev);
 FUNC_5(VAR_14->write.ccwdev);
 return -VAR_2;
}
