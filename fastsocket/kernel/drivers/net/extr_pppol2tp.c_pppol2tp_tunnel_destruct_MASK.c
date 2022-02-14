
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_destruct ) (struct sock*) ;struct pppol2tp_tunnel* sk_user_data; } ;
struct pppol2tp_tunnel {int (* old_sk_destruct ) (struct sock*) ;int * sock; int name; int debug; } ;
struct TYPE_2__ {int * encap_rcv; scalar_t__ encap_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;
 int FUNC_1 (struct pppol2tp_tunnel*) ;
 int FUNC_2 (struct pppol2tp_tunnel*) ;
 int FUNC_3 (struct sock*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_2)
{
 struct pppol2tp_tunnel *VAR_3;

 VAR_3 = VAR_2->sk_user_data;
 if (VAR_3 == ((void*)0))
  goto end;

 FUNC_0(VAR_3->debug, VAR_1, VAR_0,
        "%s: closing...\n", VAR_3->name);


 FUNC_1(VAR_3);


 (FUNC_4(VAR_2))->encap_type = 0;
 (FUNC_4(VAR_2))->encap_rcv = ((void*)0);


 VAR_3->sock = ((void*)0);
 VAR_2->sk_destruct = VAR_3->old_sk_destruct;
 VAR_2->sk_user_data = ((void*)0);


 if (VAR_2->sk_destruct != ((void*)0))
  (*VAR_2->sk_destruct)(VAR_2);

 FUNC_2(VAR_3);

end:
 return;
}
