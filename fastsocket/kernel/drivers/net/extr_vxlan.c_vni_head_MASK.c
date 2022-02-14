
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vxlan_sock {struct hlist_head* vni_list; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ) ;

__attribute__((used)) static inline struct hlist_head *FUNC_1(struct vxlan_sock *VAR_1, u32 VAR_2)
{
 return &VAR_1->vni_list[FUNC_0(VAR_2, VAR_0)];
}
