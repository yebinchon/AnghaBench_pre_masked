
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct vio_dev {struct device dev; } ;
struct veth_port {int lpar_map; int kobject; int mac_addr; struct device* dev; scalar_t__ stopped_map; int mcast_gate; int queue_lock; } ;
struct TYPE_2__ {int kobj; } ;
struct net_device {int name; TYPE_1__ dev; int * netdev_ops; int mtu; int * dev_addr; } ;
typedef int HvLpVirtualLanIndexMap ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,int *) ;
 int FUNC_2 (struct net_device*,struct device*) ;
 int VAR_2 ;
 struct net_device* FUNC_3 (int) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int *,int *,char*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,unsigned char const*,int ) ;
 struct veth_port* FUNC_8 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_4 ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char* FUNC_14 (struct vio_dev*,char*,int *) ;

__attribute__((used)) static struct net_device *FUNC_15(int VAR_7,
  struct vio_dev *VAR_8)
{
 struct net_device *VAR_9;
 struct veth_port *VAR_10;
 struct device *VAR_11 = &VAR_8->dev;
 int VAR_12, VAR_13;
 const unsigned char *VAR_14;

 VAR_14 = FUNC_14(VAR_8, "local-mac-address", ((void*)0));
 if (VAR_14 == ((void*)0))
  VAR_14 = FUNC_14(VAR_8, "mac-address", ((void*)0));
 if (VAR_14 == ((void*)0)) {
  FUNC_12("Unable to fetch MAC address from device tree.\n");
  return ((void*)0);
 }

 VAR_9 = FUNC_3(sizeof (struct veth_port));
 if (! VAR_9) {
  FUNC_12("Unable to allocate net_device structure!\n");
  return ((void*)0);
 }

 VAR_10 = FUNC_8(VAR_9);

 FUNC_11(&VAR_10->queue_lock);
 FUNC_10(&VAR_10->mcast_gate);
 VAR_10->stopped_map = 0;

 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  HvLpVirtualLanIndexMap VAR_15;

  if (VAR_12 == VAR_4)
   continue;
  VAR_15 = FUNC_0(VAR_12);
  if (VAR_15 & (0x8000 >> VAR_7))
   VAR_10->lpar_map |= (1 << VAR_12);
 }
 VAR_10->dev = VAR_11;

 FUNC_7(VAR_9->dev_addr, VAR_14, VAR_0);

 VAR_9->mtu = VAR_2;

 FUNC_7(&VAR_10->mac_addr, VAR_14, VAR_0);

 VAR_9->netdev_ops = &VAR_5;
 FUNC_1(VAR_9, &VAR_3);

 FUNC_2(VAR_9, VAR_11);

 VAR_13 = FUNC_9(VAR_9);
 if (VAR_13 != 0) {
  FUNC_12("Failed registering net device for vlan%d.\n", VAR_7);
  FUNC_4(VAR_9);
  return ((void*)0);
 }

 FUNC_6(&VAR_10->kobject, &VAR_6);
 if (0 != FUNC_5(&VAR_10->kobject, &VAR_9->dev.kobj, "veth_port"))
  FUNC_12("Failed adding port for %s to sysfs.\n", VAR_9->name);

 FUNC_13("%s attached to iSeries vlan %d (LPAR map = 0x%.4X)\n",
   VAR_9->name, VAR_7, VAR_10->lpar_map);

 return VAR_9;
}
