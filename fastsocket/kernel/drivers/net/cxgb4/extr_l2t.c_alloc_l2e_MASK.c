
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2t_entry {scalar_t__ state; size_t hash; struct l2t_entry* next; struct l2t_entry* first; int refcnt; } ;
struct l2t_data {struct l2t_entry* l2tab; int nfree; struct l2t_entry* rover; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static struct l2t_entry *FUNC_2(struct l2t_data *VAR_3)
{
 struct l2t_entry *VAR_4, *VAR_5, **VAR_6;

 if (!FUNC_1(&VAR_3->nfree))
  return ((void*)0);


 for (VAR_5 = VAR_3->rover, VAR_4 = &VAR_3->l2tab[VAR_0]; VAR_5 != VAR_4; ++VAR_5)
  if (FUNC_1(&VAR_5->refcnt) == 0)
   goto found;

 for (VAR_5 = VAR_3->l2tab; FUNC_1(&VAR_5->refcnt); ++VAR_5)
  ;
found:
 VAR_3->rover = VAR_5 + 1;
 FUNC_0(&VAR_3->nfree);





 if (VAR_5->state < VAR_1)
  for (VAR_6 = &VAR_3->l2tab[VAR_5->hash].first; *VAR_6; VAR_6 = &(*VAR_6)->next)
   if (*VAR_6 == VAR_5) {
    *VAR_6 = VAR_5->next;
    VAR_5->next = ((void*)0);
    break;
   }

 VAR_5->state = VAR_2;
 return VAR_5;
}
