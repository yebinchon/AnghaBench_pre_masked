
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int mc_count; int name; } ;
struct TYPE_3__ {int multicast_num_addrs; } ;
typedef TYPE_1__ mace_private ;


 int FUNC_0 (int ,char*,int ,int) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
  mace_private *VAR_2 = FUNC_1(VAR_1);
  VAR_2->multicast_num_addrs = VAR_1->mc_count;
  FUNC_2(VAR_1);

}
