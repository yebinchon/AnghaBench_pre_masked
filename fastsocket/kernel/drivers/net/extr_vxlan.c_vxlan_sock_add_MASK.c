
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vxlan_rcv_t ;
struct vxlan_sock {int refcnt; int * rcv; } ;
struct vxlan_net {int sock_lock; } ;
struct net {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 struct vxlan_sock* FUNC_0 (int ) ;
 int FUNC_1 (struct vxlan_sock*) ;
 int FUNC_2 (int *) ;
 struct vxlan_net* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct vxlan_sock* FUNC_6 (struct net*,int ) ;
 int VAR_2 ;
 struct vxlan_sock* FUNC_7 (struct net*,int ,int *,void*) ;

struct vxlan_sock *FUNC_8(struct net *VAR_3, __be16 VAR_4,
      vxlan_rcv_t *VAR_5, void *VAR_6,
      bool VAR_7)
{
 struct vxlan_net *VAR_8 = FUNC_3(VAR_3, VAR_2);
 struct vxlan_sock *VAR_9;

 VAR_9 = FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6);
 if (!FUNC_1(VAR_9))
  return VAR_9;

 if (VAR_7)
  return VAR_9;

 FUNC_4(&VAR_8->sock_lock);
 VAR_9 = FUNC_6(VAR_3, VAR_4);
 if (VAR_9) {
  if (VAR_9->rcv == VAR_5)
   FUNC_2(&VAR_9->refcnt);
  else
   VAR_9 = FUNC_0(-VAR_0);
 }
 FUNC_5(&VAR_8->sock_lock);

 if (!VAR_9)
  VAR_9 = FUNC_0(-VAR_1);

 return VAR_9;
}
