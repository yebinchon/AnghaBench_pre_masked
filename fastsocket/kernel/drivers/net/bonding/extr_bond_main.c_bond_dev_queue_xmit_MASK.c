
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; int queue_mapping; } ;
struct netpoll {int dummy; } ;
struct net_device {TYPE_1__* npinfo; } ;
struct bonding {TYPE_3__* dev; } ;
struct TYPE_6__ {TYPE_1__* npinfo; } ;
struct TYPE_5__ {int bond_queue_mapping; } ;
struct TYPE_4__ {struct netpoll* netpoll; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct netpoll*,struct sk_buff*,struct net_device*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct bonding *VAR_0, struct sk_buff *VAR_1,
   struct net_device *VAR_2)
{
 VAR_1->queue_mapping = FUNC_3(VAR_1)->bond_queue_mapping;
 VAR_1->dev = VAR_2;







  FUNC_0(VAR_1);

 return 0;
}
