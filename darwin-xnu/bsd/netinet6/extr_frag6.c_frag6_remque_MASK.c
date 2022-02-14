
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ip6q {TYPE_2__* ip6q_prev; TYPE_1__* ip6q_next; } ;
struct TYPE_4__ {TYPE_1__* ip6q_next; } ;
struct TYPE_3__ {TYPE_2__* ip6q_prev; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(struct ip6q *VAR_2)
{
 FUNC_0(&VAR_1, VAR_0);

 VAR_2->ip6q_prev->ip6q_next = VAR_2->ip6q_next;
 VAR_2->ip6q_next->ip6q_prev = VAR_2->ip6q_prev;
}
