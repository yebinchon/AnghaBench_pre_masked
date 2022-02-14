
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vxlan_sock {int dummy; } ;
struct vxlan_dev {int dummy; } ;
struct net {int dummy; } ;
typedef int __be16 ;


 struct vxlan_sock* FUNC_0 (struct net*,int ) ;
 struct vxlan_dev* FUNC_1 (struct vxlan_sock*,int ) ;

__attribute__((used)) static struct vxlan_dev *FUNC_2(struct net *VAR_0, u32 VAR_1, __be16 VAR_2)
{
 struct vxlan_sock *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 return FUNC_1(VAR_3, VAR_1);
}
