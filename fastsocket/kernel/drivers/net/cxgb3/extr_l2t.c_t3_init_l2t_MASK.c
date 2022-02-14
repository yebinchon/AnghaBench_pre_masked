
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2t_entry {int dummy; } ;
struct l2t_data {unsigned int nentries; TYPE_1__* l2tab; int lock; int nfree; TYPE_1__* rover; } ;
struct TYPE_2__ {int idx; int refcnt; int lock; int arpq; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 struct l2t_data* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct l2t_data *FUNC_5(unsigned int VAR_1)
{
 struct l2t_data *VAR_2;
 int VAR_3, VAR_4 = sizeof(*VAR_2) + VAR_1 * sizeof(struct l2t_entry);

 VAR_2 = FUNC_2(VAR_4);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->nentries = VAR_1;
 VAR_2->rover = &VAR_2->l2tab[1];
 FUNC_1(&VAR_2->nfree, VAR_1 - 1);
 FUNC_3(&VAR_2->lock);

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  VAR_2->l2tab[VAR_3].idx = VAR_3;
  VAR_2->l2tab[VAR_3].state = VAR_0;
  FUNC_0(&VAR_2->l2tab[VAR_3].arpq);
  FUNC_4(&VAR_2->l2tab[VAR_3].lock);
  FUNC_1(&VAR_2->l2tab[VAR_3].refcnt, 0);
 }
 return VAR_2;
}
