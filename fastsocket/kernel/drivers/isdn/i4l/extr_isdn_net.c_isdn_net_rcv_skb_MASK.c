
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int flags; int dialstate; } ;
typedef TYPE_1__ isdn_net_local ;
struct TYPE_5__ {int dev; TYPE_1__* local; } ;
typedef TYPE_2__ isdn_net_dev ;
struct TYPE_6__ {TYPE_2__** rx_netdev; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int ,struct sk_buff*) ;

int
FUNC_1(int VAR_2, struct sk_buff *VAR_3)
{
 isdn_net_dev *VAR_4 = VAR_1->rx_netdev[VAR_2];

 if (VAR_4) {
  isdn_net_local *VAR_5 = VAR_4->local;
  if ((VAR_5->flags & VAR_0) &&
      (!VAR_5->dialstate)) {
   FUNC_0(VAR_4->dev, VAR_3);
   return 1;
  }
 }
 return 0;
}
