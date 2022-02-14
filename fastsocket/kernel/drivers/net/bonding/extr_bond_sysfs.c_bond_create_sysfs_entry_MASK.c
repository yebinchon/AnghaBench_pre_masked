
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct net_device {TYPE_1__ dev; } ;
struct bonding {struct net_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(struct bonding *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->dev;
 int VAR_3;

 VAR_3 = FUNC_1(&(VAR_2->dev.kobj), &VAR_0);
 if (VAR_3)
  FUNC_0("eek! didn't create group!\n");

 return VAR_3;
}
