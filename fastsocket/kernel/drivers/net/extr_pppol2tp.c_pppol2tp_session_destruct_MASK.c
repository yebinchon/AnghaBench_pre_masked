
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {struct pppol2tp_session* sk_user_data; } ;
struct pppol2tp_tunnel {scalar_t__ magic; int hlist_lock; } ;
struct TYPE_2__ {scalar_t__ s_session; } ;
struct pppol2tp_session {scalar_t__ magic; int * tunnel_sock; struct pppol2tp_tunnel* tunnel; int hlist; TYPE_1__ tunnel_addr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pppol2tp_session*) ;
 int VAR_2 ;
 int FUNC_4 (struct pppol2tp_tunnel*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_3)
{
 struct pppol2tp_session *VAR_4 = ((void*)0);

 if (VAR_3->sk_user_data != ((void*)0)) {
  struct pppol2tp_tunnel *VAR_5;

  VAR_4 = VAR_3->sk_user_data;
  if (VAR_4 == ((void*)0))
   goto out;

  FUNC_0(VAR_4->magic != VAR_0);







  VAR_5 = VAR_4->tunnel;
  if (VAR_5 != ((void*)0)) {
   FUNC_0(VAR_5->magic != VAR_1);






   if (VAR_4->tunnel_addr.s_session != 0) {



    FUNC_5(&VAR_5->hlist_lock);
    FUNC_2(&VAR_4->hlist);
    FUNC_6(&VAR_5->hlist_lock);

    FUNC_1(&VAR_2);
   }




   VAR_4->tunnel = ((void*)0);
   VAR_4->tunnel_sock = ((void*)0);
   FUNC_4(VAR_5);
  }
 }

 FUNC_3(VAR_4);
out:
 return;
}
