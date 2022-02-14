
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int kobj; } ;
struct net_device {int flags; TYPE_3__ dev; struct iw_handler_def* wireless_handlers; int dev_addr; int * ethtool_ops; int * netdev_ops; struct lbs_private* ml_priv; } ;
struct lbs_private {TYPE_2__* dev; struct net_device* mesh_dev; } ;
struct iw_handler_def {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct net_device* FUNC_1 (int ,char*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct lbs_private *VAR_9)
{
 struct net_device *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 FUNC_3(VAR_3);


 if (!(VAR_10 = FUNC_1(0, "msh%d", VAR_4))) {
  FUNC_5("init mshX device failed\n");
  VAR_11 = -VAR_0;
  goto done;
 }
 VAR_10->ml_priv = VAR_9;
 VAR_9->mesh_dev = VAR_10;

 VAR_10->netdev_ops = &VAR_8;
 VAR_10->ethtool_ops = &VAR_5;
 FUNC_8(VAR_10->dev_addr, VAR_9->dev->dev_addr,
   sizeof(VAR_9->dev->dev_addr));

 FUNC_0(VAR_9->mesh_dev, VAR_9->dev->dev.parent);




 VAR_10->flags |= VAR_1 | VAR_2;

 VAR_11 = FUNC_9(VAR_10);
 if (VAR_11) {
  FUNC_7("cannot register mshX virtual interface\n");
  goto err_free;
 }

 VAR_11 = FUNC_10(&(VAR_10->dev.kobj), &VAR_6);
 if (VAR_11)
  goto err_unregister;

 FUNC_6(VAR_10);


 VAR_11 = 0;
 goto done;

err_unregister:
 FUNC_11(VAR_10);

err_free:
 FUNC_2(VAR_10);

done:
 FUNC_4(VAR_3, "ret %d", VAR_11);
 return VAR_11;
}
