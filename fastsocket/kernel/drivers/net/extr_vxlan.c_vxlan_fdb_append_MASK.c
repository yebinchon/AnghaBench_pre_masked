
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_rdst {int list; void* remote_ifindex; void* remote_vni; int remote_port; int remote_ip; } ;
struct vxlan_fdb {int remotes; } ;
typedef void* __u32 ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 struct vxlan_rdst* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 struct vxlan_rdst* FUNC_2 (struct vxlan_fdb*,int ,int ,void*,void*) ;

__attribute__((used)) static int FUNC_3(struct vxlan_fdb *VAR_2,
       __be32 VAR_3, __be16 VAR_4, __u32 VAR_5, __u32 VAR_6)
{
 struct vxlan_rdst *VAR_7;

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7)
  return 0;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;
 VAR_7->remote_ip = VAR_3;
 VAR_7->remote_port = VAR_4;
 VAR_7->remote_vni = VAR_5;
 VAR_7->remote_ifindex = VAR_6;

 FUNC_1(&VAR_7->list, &VAR_2->remotes);

 return 1;
}
