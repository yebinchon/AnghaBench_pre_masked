
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int remote; int sid; } ;
struct pppox_sock {scalar_t__ pppoe_ifindex; struct pppox_sock* next; TYPE_1__ pppoe_pa; } ;
struct pppoe_net {struct pppox_sock** hash_table; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pppoe_net *VAR_1, struct pppox_sock *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2->pppoe_pa.sid, VAR_2->pppoe_pa.remote);
 struct pppox_sock *VAR_4;

 VAR_4 = VAR_1->hash_table[VAR_3];
 while (VAR_4) {
  if (FUNC_0(&VAR_4->pppoe_pa, &VAR_2->pppoe_pa) &&
      VAR_4->pppoe_ifindex == VAR_2->pppoe_ifindex)
   return -VAR_0;

  VAR_4 = VAR_4->next;
 }

 VAR_2->next = VAR_1->hash_table[VAR_3];
 VAR_1->hash_table[VAR_3] = VAR_2;

 return 0;
}
