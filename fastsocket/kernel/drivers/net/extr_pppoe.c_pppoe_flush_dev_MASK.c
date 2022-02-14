
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; int (* sk_state_change ) (struct sock*) ;} ;
struct pppox_sock {struct net_device* pppoe_dev; struct pppox_sock* next; } ;
struct pppoe_net {int hash_lock; struct pppox_sock** hash_table; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sock*) ;
 struct pppoe_net* FUNC_4 (int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 struct sock* FUNC_7 (struct pppox_sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct net_device *VAR_4)
{
 struct pppoe_net *VAR_5;
 int VAR_6;

 FUNC_0(VAR_4 == ((void*)0));

 VAR_5 = FUNC_4(FUNC_1(VAR_4));
 if (!VAR_5)
  return;

 FUNC_11(&VAR_5->hash_lock);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct pppox_sock *VAR_7 = VAR_5->hash_table[VAR_6];
  struct sock *VAR_8;

  while (VAR_7) {
   while (VAR_7 && VAR_7->pppoe_dev != VAR_4) {
    VAR_7 = VAR_7->next;
   }

   if (!VAR_7)
    break;

   VAR_8 = FUNC_7(VAR_7);
   FUNC_8(VAR_8);
   FUNC_12(&VAR_5->hash_lock);
   FUNC_3(VAR_8);

   if (VAR_7->pppoe_dev == VAR_4
       && VAR_8->sk_state & (VAR_2 | VAR_1)) {
    FUNC_5(VAR_8);
    VAR_8->sk_state = VAR_3;
    VAR_8->sk_state_change(VAR_8);
    VAR_7->pppoe_dev = ((void*)0);
    FUNC_2(VAR_4);
   }

   FUNC_6(VAR_8);
   FUNC_9(VAR_8);






   FUNC_0(FUNC_4(FUNC_1(VAR_4)) == ((void*)0));
   FUNC_11(&VAR_5->hash_lock);
   VAR_7 = VAR_5->hash_table[VAR_6];
  }
 }
 FUNC_12(&VAR_5->hash_lock);
}
