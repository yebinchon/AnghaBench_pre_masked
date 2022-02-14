
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxlan_sock {int dummy; } ;
struct vxlan_net {int dummy; } ;
struct TYPE_2__ {int remote_ip; } ;
struct vxlan_dev {int age_timer; scalar_t__ age_interval; int igmp_join; TYPE_1__ default_dst; struct vxlan_sock* vn_sock; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;
 struct vxlan_net* FUNC_4 (int ,int ) ;
 struct vxlan_dev* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (struct vxlan_net*,int ) ;
 int VAR_3 ;
 int FUNC_9 (struct vxlan_sock*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_5)
{
 struct vxlan_net *VAR_6 = FUNC_4(FUNC_2(VAR_5), VAR_3);
 struct vxlan_dev *VAR_7 = FUNC_5(VAR_5);
 struct vxlan_sock *VAR_8 = VAR_7->vn_sock;


 if (!VAR_8)
  return -VAR_0;

 if (FUNC_0(FUNC_6(VAR_7->default_dst.remote_ip)) &&
     FUNC_8(VAR_6, VAR_7->default_dst.remote_ip)) {
  FUNC_9(VAR_8);
  FUNC_1(VAR_5);
  FUNC_7(VAR_4, &VAR_7->igmp_join);
 }

 if (VAR_7->age_interval)
  FUNC_3(&VAR_7->age_timer, VAR_2 + VAR_1);

 return 0;
}
