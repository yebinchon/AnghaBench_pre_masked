
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {struct lbs_private* ml_priv; int * netdev_ops; int type; int dev_addr; } ;
struct lbs_private {struct net_device* rtap_net_dev; TYPE_2__* dev; int current_addr; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct net_device* FUNC_1 (int ,char*,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct lbs_private *VAR_7)
{
 int VAR_8 = 0;
 struct net_device *VAR_9;

 FUNC_3(VAR_4);
 if (VAR_7->rtap_net_dev) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_9 = FUNC_1(0, "rtap%d", VAR_5);
 if (VAR_9 == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto out;
 }

 FUNC_5(VAR_9->dev_addr, VAR_7->current_addr, VAR_3);
 VAR_9->type = VAR_0;
 VAR_9->netdev_ops = &VAR_6;
 VAR_9->ml_priv = VAR_7;
 FUNC_0(VAR_9, VAR_7->dev->dev.parent);

 VAR_8 = FUNC_6(VAR_9);
 if (VAR_8) {
  FUNC_2(VAR_9);
  goto out;
 }
 VAR_7->rtap_net_dev = VAR_9;

out:
 FUNC_4(VAR_4, "ret %d", VAR_8);
 return VAR_8;
}
