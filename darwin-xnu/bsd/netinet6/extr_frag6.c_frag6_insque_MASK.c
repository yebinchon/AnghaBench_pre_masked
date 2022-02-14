
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6q {struct ip6q* ip6q_next; struct ip6q* ip6q_prev; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(struct ip6q *VAR_2, struct ip6q *VAR_3)
{
 FUNC_0(&VAR_1, VAR_0);

 VAR_2->ip6q_prev = VAR_3;
 VAR_2->ip6q_next = VAR_3->ip6q_next;
 VAR_3->ip6q_next->ip6q_prev= VAR_2;
 VAR_3->ip6q_next = VAR_2;
}
