
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_state; int sk_receive_queue; } ;
struct TYPE_2__ {int remote; int sid; } ;
struct pppox_sock {int pppoe_ifindex; TYPE_1__ pppoe_pa; int * pppoe_dev; } ;
struct pppoe_net {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pppoe_net*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sock*) ;
 struct pppoe_net* FUNC_3 (struct net*) ;
 struct pppox_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct sock*,int ) ;
 struct net* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_5)
{
 struct sock *VAR_6 = VAR_5->sk;
 struct pppox_sock *VAR_7;
 struct pppoe_net *VAR_8;
 struct net *VAR_9 = ((void*)0);

 if (!VAR_6)
  return 0;

 FUNC_2(VAR_6);
 if (FUNC_8(VAR_6, VAR_4)) {
  FUNC_6(VAR_6);
  return -VAR_0;
 }

 VAR_7 = FUNC_4(VAR_6);

 if (VAR_6->sk_state & (VAR_2 | VAR_1)) {
  FUNC_1(VAR_7->pppoe_dev);
  VAR_7->pppoe_dev = ((void*)0);
 }

 FUNC_5(VAR_6);


 VAR_6->sk_state = VAR_3;

 VAR_9 = FUNC_9(VAR_6);
 VAR_8 = FUNC_3(VAR_9);





 FUNC_0(VAR_8, VAR_7->pppoe_pa.sid, VAR_7->pppoe_pa.remote,
      VAR_7->pppoe_ifindex);

 FUNC_10(VAR_6);
 VAR_5->sk = ((void*)0);

 FUNC_7(&VAR_6->sk_receive_queue);
 FUNC_6(VAR_6);
 FUNC_11(VAR_6);

 return 0;
}
