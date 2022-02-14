
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxlan_sock {int del_work; int hlist; int refcnt; TYPE_1__* sock; } ;
struct vxlan_net {int sock_lock; } ;
struct TYPE_2__ {int sk; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vxlan_net* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_7(struct vxlan_sock *VAR_2)
{
 struct vxlan_net *VAR_3 = FUNC_2(FUNC_4(VAR_2->sock->sk), VAR_0);

 if (!FUNC_0(&VAR_2->refcnt))
  return;

 FUNC_5(&VAR_3->sock_lock);
 FUNC_1(&VAR_2->hlist);
 FUNC_6(&VAR_3->sock_lock);

 FUNC_3(VAR_1, &VAR_2->del_work);
}
