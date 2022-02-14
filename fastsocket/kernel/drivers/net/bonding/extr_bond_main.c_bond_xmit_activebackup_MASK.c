
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bonding {int lock; int curr_slave_lock; TYPE_1__* curr_active_slave; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct bonding*) ;
 int VAR_0 ;
 int FUNC_1 (struct bonding*,struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct bonding* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct bonding *VAR_3 = FUNC_3(VAR_2);
 int VAR_4 = 1;

 FUNC_4(&VAR_3->lock);
 FUNC_4(&VAR_3->curr_slave_lock);

 if (!FUNC_0(VAR_3))
  goto out;

 if (!VAR_3->curr_active_slave)
  goto out;

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_3->curr_active_slave->dev);

out:
 if (VAR_4)

  FUNC_2(VAR_1);

 FUNC_5(&VAR_3->curr_slave_lock);
 FUNC_5(&VAR_3->lock);
 return VAR_0;
}
