
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_rdst {int list; int remote_vni; int remote_ip; } ;
struct vxlan_fdb {int remotes; int state; } ;
struct vxlan_dev {int dummy; } ;
struct net_device {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 struct vxlan_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct vxlan_dev*,struct vxlan_fdb*,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3, __be32 VAR_4)
{
 struct vxlan_dev *VAR_5 = FUNC_2(VAR_3);
 struct vxlan_fdb VAR_6 = {
  .state = VAR_0,
 };
 struct vxlan_rdst VAR_7 = {
  .remote_ip = VAR_4,
  .remote_vni = VAR_2,
 };

 FUNC_0(&VAR_6.remotes);
 FUNC_1(&VAR_7.list, &VAR_6.remotes);

 FUNC_3(VAR_5, &VAR_6, VAR_1);
}
