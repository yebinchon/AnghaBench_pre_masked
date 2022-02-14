
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxlan_sock {int dummy; } ;
struct vxlan_net {int dummy; } ;
struct TYPE_2__ {int remote_ip; } ;
struct vxlan_dev {int age_timer; int igmp_leave; TYPE_1__ default_dst; struct vxlan_sock* vn_sock; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct vxlan_net* FUNC_4 (int ,int ) ;
 struct vxlan_dev* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct vxlan_dev*) ;
 int FUNC_9 (struct vxlan_net*,int ) ;
 int VAR_0 ;
 int FUNC_10 (struct vxlan_sock*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_2)
{
 struct vxlan_net *VAR_3 = FUNC_4(FUNC_3(VAR_2), VAR_0);
 struct vxlan_dev *VAR_4 = FUNC_5(VAR_2);
 struct vxlan_sock *VAR_5 = VAR_4->vn_sock;

 if (VAR_5 && FUNC_0(FUNC_6(VAR_4->default_dst.remote_ip)) &&
     ! FUNC_9(VAR_3, VAR_4->default_dst.remote_ip)) {
  FUNC_10(VAR_5);
  FUNC_2(VAR_2);
  FUNC_7(VAR_1, &VAR_4->igmp_leave);
 }

 FUNC_1(&VAR_4->age_timer);

 FUNC_8(VAR_4);

 return 0;
}
