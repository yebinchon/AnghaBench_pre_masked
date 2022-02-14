
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tqe_next; int * tqe_prev; } ;
struct TYPE_4__ {int * cur; int list; } ;
struct pf_rule {TYPE_1__ entries; TYPE_2__ rpool; int * overload_tbl; int * kif; int * anchor; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pf_rule*,struct pf_rule*,int) ;

__attribute__((used)) static void
FUNC_2(struct pf_rule *VAR_0, struct pf_rule *VAR_1)
{
 FUNC_1(VAR_0, VAR_1, sizeof (struct pf_rule));

 VAR_1->anchor = ((void*)0);
 VAR_1->kif = ((void*)0);
 VAR_1->overload_tbl = ((void*)0);

 FUNC_0(&VAR_1->rpool.list);
 VAR_1->rpool.cur = ((void*)0);

 VAR_1->entries.tqe_prev = ((void*)0);
 VAR_1->entries.tqe_next = ((void*)0);
}
