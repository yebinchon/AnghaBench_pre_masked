
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int iftype; struct wiphy* wiphy; } ;
struct wiphy {int perm_addr; } ;
struct orinoco_private {int dev; struct net_device* ndev; int wireless_data; } ;
struct net_device_ops {int dummy; } ;
struct net_device {unsigned long base_addr; unsigned int irq; int name; int dev_addr; int needed_headroom; struct net_device_ops const* netdev_ops; int * wireless_data; int * wireless_handlers; int watchdog_timeo; struct wireless_dev* ieee80211_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,int ) ;
 struct wireless_dev* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_5 ;
 struct net_device_ops const VAR_6 ;
 struct wiphy* FUNC_7 (struct orinoco_private*) ;
 int FUNC_8 (struct net_device*) ;

int FUNC_9(struct orinoco_private *VAR_7,
     unsigned long VAR_8,
     unsigned int VAR_9,
     const struct net_device_ops *VAR_10)
{
 struct wiphy *VAR_11 = FUNC_7(VAR_7);
 struct wireless_dev *VAR_12;
 struct net_device *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_1(sizeof(struct wireless_dev));

 if (!VAR_13)
  return -VAR_1;


 VAR_12 = FUNC_5(VAR_13);
 VAR_12->wiphy = VAR_11;
 VAR_12->iftype = VAR_4;


 VAR_13->ieee80211_ptr = VAR_12;
 VAR_13->watchdog_timeo = VAR_3;
 VAR_13->wireless_handlers = &VAR_5;




 if (VAR_10)
  VAR_13->netdev_ops = VAR_10;
 else
  VAR_13->netdev_ops = &VAR_6;




 VAR_13->needed_headroom = VAR_0;

 FUNC_6(VAR_13);

 FUNC_4(VAR_13->dev_addr, VAR_11->perm_addr, VAR_2);

 VAR_13->base_addr = VAR_8;
 VAR_13->irq = VAR_9;

 FUNC_0(VAR_13, VAR_7->dev);
 VAR_14 = FUNC_8(VAR_13);
 if (VAR_14)
  goto fail;

 VAR_7->ndev = VAR_13;


 FUNC_2(VAR_7->dev, "Registerred interface %s.\n", VAR_13->name);

 return 0;

 fail:
 FUNC_3(VAR_13);
 return VAR_14;
}
