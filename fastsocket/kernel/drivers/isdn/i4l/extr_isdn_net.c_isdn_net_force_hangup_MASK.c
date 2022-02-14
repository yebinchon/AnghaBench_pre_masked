
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {struct net_device* dev; TYPE_1__* local; } ;
typedef TYPE_2__ isdn_net_dev ;
struct TYPE_4__ {scalar_t__ isdn_device; struct net_device* slave; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (struct net_device*) ;
 TYPE_2__* FUNC_1 (char*) ;
 int FUNC_2 (struct net_device*) ;

int
FUNC_3(char *VAR_1)
{
 isdn_net_dev *VAR_2 = FUNC_1(VAR_1);
 struct net_device *VAR_3;

 if (VAR_2) {
  if (VAR_2->local->isdn_device < 0)
   return 1;
  VAR_3 = VAR_2->local->slave;

  while (VAR_3) {
   FUNC_2(VAR_3);
   VAR_3 = FUNC_0(VAR_3);
  }
  FUNC_2(VAR_2->dev);
  return 0;
 }
 return -VAR_0;
}
