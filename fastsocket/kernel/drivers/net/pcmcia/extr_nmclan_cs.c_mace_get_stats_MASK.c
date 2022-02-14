
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device_stats {int dummy; } ;
struct net_device {int name; int base_addr; } ;
struct TYPE_3__ {struct net_device_stats linux_stats; int mace_stats; } ;
typedef TYPE_1__ mace_private ;


 int FUNC_0 (int,char*,int ) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device_stats*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_5(struct net_device *VAR_0)
{
  mace_private *VAR_1 = FUNC_1(VAR_0);

  FUNC_4(VAR_0->base_addr, VAR_0);

  FUNC_0(1, "%s: updating the statistics.\n", VAR_0->name);
  FUNC_2(&VAR_1->linux_stats);
  FUNC_3(&VAR_1->mace_stats);

  return &VAR_1->linux_stats;
}
