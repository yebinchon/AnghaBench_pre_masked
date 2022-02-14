
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct macvlan_dev {TYPE_1__* lowerdev; } ;
struct TYPE_2__ {int mtu; } ;


 int VAR_0 ;
 struct macvlan_dev* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, int VAR_2)
{
 struct macvlan_dev *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 < 68 || VAR_3->lowerdev->mtu < VAR_2)
  return -VAR_0;
 VAR_1->mtu = VAR_2;
 return 0;
}
