
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_sock {int dummy; } ;
struct vxlan_dev {int stats; struct vxlan_sock* vn_sock; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct vxlan_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct vxlan_dev*) ;
 int FUNC_3 (struct vxlan_sock*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct vxlan_dev *VAR_1 = FUNC_1(VAR_0);
 struct vxlan_sock *VAR_2 = VAR_1->vn_sock;

 FUNC_2(VAR_1);

 if (VAR_2)
  FUNC_3(VAR_2);
 FUNC_0(VAR_1->stats);
}
