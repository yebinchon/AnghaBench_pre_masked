
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxlan_sock {int dummy; } ;
struct TYPE_2__ {int remote_vni; } ;
struct vxlan_dev {int hlist; struct vxlan_sock* vn_sock; TYPE_1__ default_dst; } ;
typedef int __u32 ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct vxlan_sock*,int ) ;

__attribute__((used)) static void FUNC_2(struct vxlan_sock *VAR_0, struct vxlan_dev *VAR_1)
{
 __u32 VAR_2 = VAR_1->default_dst.remote_vni;

 VAR_1->vn_sock = VAR_0;
 FUNC_0(&VAR_1->hlist, FUNC_1(VAR_0, VAR_2));
}
