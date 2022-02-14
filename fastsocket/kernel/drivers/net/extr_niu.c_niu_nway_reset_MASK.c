
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ autoneg; } ;
struct niu {TYPE_1__ link_config; } ;
struct net_device {int dummy; } ;


 struct niu* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct niu*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct niu *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->link_config.autoneg)
  return FUNC_1(VAR_1);

 return 0;
}
