
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2t_data {TYPE_1__* l2tab; int lock; int nfree; TYPE_1__* rover; } ;
struct TYPE_2__ {int idx; int refcnt; int lock; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct l2t_data* FUNC_3 (int) ;

struct l2t_data *FUNC_4(void)
{
 int VAR_2;
 struct l2t_data *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3));
 if (!VAR_3)
  return ((void*)0);

 VAR_3->rover = VAR_3->l2tab;
 FUNC_0(&VAR_3->nfree, VAR_0);
 FUNC_1(&VAR_3->lock);

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  VAR_3->l2tab[VAR_2].idx = VAR_2;
  VAR_3->l2tab[VAR_2].state = VAR_1;
  FUNC_2(&VAR_3->l2tab[VAR_2].lock);
  FUNC_0(&VAR_3->l2tab[VAR_2].refcnt, 0);
 }
 return VAR_3;
}
