
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_net {int sock_lock; } ;
struct vxlan_dev {int next; int hlist; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct vxlan_net* FUNC_4 (int ,int ) ;
 struct vxlan_dev* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_1)
{
 struct vxlan_net *VAR_2 = FUNC_4(FUNC_0(VAR_1), VAR_0);
 struct vxlan_dev *VAR_3 = FUNC_5(VAR_1);

 FUNC_6(&VAR_2->sock_lock);
 if (!FUNC_2(&VAR_3->hlist))
  FUNC_1(&VAR_3->hlist);
 FUNC_7(&VAR_2->sock_lock);

 FUNC_3(&VAR_3->next);
 FUNC_8(VAR_1);
}
