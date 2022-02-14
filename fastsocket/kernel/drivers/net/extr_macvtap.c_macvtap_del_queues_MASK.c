
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct macvtap_queue {int sk; int vlan; } ;
struct macvlan_dev {int tap; } ;


 struct macvlan_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;
 struct macvtap_queue* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct macvlan_dev *VAR_1 = FUNC_0(VAR_0);
 struct macvtap_queue *VAR_2;

 VAR_2 = FUNC_2(VAR_1->tap);
 if (!VAR_2)
  return;

 FUNC_1(VAR_1->tap, ((void*)0));
 FUNC_1(VAR_2->vlan, ((void*)0));

 FUNC_4();
 FUNC_3(&VAR_2->sk);
}
