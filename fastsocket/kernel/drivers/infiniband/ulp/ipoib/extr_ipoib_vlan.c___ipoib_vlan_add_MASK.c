
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u16 ;
struct ipoib_dev_priv {int pkey; int child_type; TYPE_1__* dev; int child_intfs; int list; TYPE_1__* parent; int port; TYPE_3__* ca; int flags; int admin_mtu; int mcast_mtu; int max_ib_mtu; } ;
struct TYPE_13__ {int name; } ;
struct TYPE_12__ {int* broadcast; int ifindex; int iflink; int dev; int dev_addr; int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_3__*,int ) ;
 int FUNC_9 (struct ipoib_dev_priv*,TYPE_3__*) ;
 int FUNC_10 (struct ipoib_dev_priv*,char*,int,...) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (TYPE_1__*) ;

int FUNC_16(struct ipoib_dev_priv *VAR_5, struct ipoib_dev_priv *VAR_6,
       u16 VAR_7, int VAR_8)
{
 int VAR_9;

 VAR_6->max_ib_mtu = VAR_5->max_ib_mtu;

 VAR_6->dev->mtu = FUNC_0(VAR_6->max_ib_mtu);
 VAR_6->mcast_mtu = VAR_6->admin_mtu = VAR_6->dev->mtu;
 FUNC_14(VAR_2, &VAR_6->flags);

 VAR_9 = FUNC_9(VAR_6, VAR_5->ca);
 if (VAR_9)
  goto err;

 VAR_6->pkey = VAR_7;

 FUNC_12(VAR_6->dev->dev_addr, VAR_5->dev->dev_addr, VAR_1);
 VAR_6->dev->broadcast[8] = VAR_7 >> 8;
 VAR_6->dev->broadcast[9] = VAR_7 & 0xff;

 VAR_9 = FUNC_8(VAR_6->dev, VAR_5->ca, VAR_5->port);
 if (VAR_9 < 0) {
  FUNC_10(VAR_5, "failed to initialize subinterface: "
      "device %s, port %d",
      VAR_5->ca->name, VAR_5->port);
  goto err;
 }

 VAR_9 = FUNC_13(VAR_6->dev);
 if (VAR_9) {
  FUNC_10(VAR_6, "failed to initialize; error %i", VAR_9);
  goto register_failed;
 }

 VAR_6->parent = VAR_5->dev;

 FUNC_5(VAR_6->dev);


 if (VAR_8 == VAR_3) {
  if (FUNC_4(VAR_6->dev))
   goto sysfs_failed;
  if (FUNC_2(VAR_6->dev))
   goto sysfs_failed;
  if (FUNC_3(VAR_6->dev))
   goto sysfs_failed;

  if (FUNC_1(&VAR_6->dev->dev, &VAR_4))
   goto sysfs_failed;
 }

 VAR_6->child_type = VAR_8;
 VAR_6->dev->iflink = VAR_5->dev->ifindex;
 FUNC_11(&VAR_6->list, &VAR_5->child_intfs);

 return 0;

sysfs_failed:
 VAR_9 = -VAR_0;
 FUNC_6(VAR_6->dev);
 FUNC_15(VAR_6->dev);

register_failed:
 FUNC_7(VAR_6->dev);

err:
 return VAR_9;
}
