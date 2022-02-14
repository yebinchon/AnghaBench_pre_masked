
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_net {struct hlist_head* sock_list; } ;
struct net {int dummy; } ;
struct hlist_head {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ) ;
 struct vxlan_net* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

__attribute__((used)) static inline struct hlist_head *FUNC_3(struct net *VAR_2, __be16 VAR_3)
{
 struct vxlan_net *VAR_4 = FUNC_1(VAR_2, VAR_1);

 return &VAR_4->sock_list[FUNC_0(FUNC_2(VAR_3), VAR_0)];
}
