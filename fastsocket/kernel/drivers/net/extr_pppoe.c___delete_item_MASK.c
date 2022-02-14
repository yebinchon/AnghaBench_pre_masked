
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppox_sock {int pppoe_ifindex; struct pppox_sock* next; int pppoe_pa; } ;
struct pppoe_net {struct pppox_sock** hash_table; } ;
typedef int __be16 ;


 scalar_t__ FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static struct pppox_sock *FUNC_2(struct pppoe_net *VAR_0, __be16 VAR_1,
     char *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_1(VAR_1, VAR_2);
 struct pppox_sock *VAR_5, **VAR_6;

 VAR_5 = VAR_0->hash_table[VAR_4];
 VAR_6 = &VAR_0->hash_table[VAR_4];

 while (VAR_5) {
  if (FUNC_0(&VAR_5->pppoe_pa, VAR_1, VAR_2) &&
      VAR_5->pppoe_ifindex == VAR_3) {
   *VAR_6 = VAR_5->next;
   break;
  }

  VAR_6 = &VAR_5->next;
  VAR_5 = VAR_5->next;
 }

 return VAR_5;
}
