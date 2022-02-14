
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {struct net_device* master; } ;
typedef TYPE_1__ isdn_net_local ;
struct TYPE_5__ {struct net_device* dev; TYPE_1__* local; } ;
typedef TYPE_2__ isdn_net_dev ;


 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static __inline__ int FUNC_1(isdn_net_dev *VAR_0)
{
 isdn_net_local *VAR_1 = VAR_0->local;
 struct net_device *VAR_2;

 if (VAR_1->master)
  VAR_2 = VAR_1->master;
 else
  VAR_2 = VAR_0->dev;
 return FUNC_0(VAR_2);
}
