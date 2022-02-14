
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct fc_exch_pool {scalar_t__ total_exches; int lock; void* next_index; void* right; void* left; } ;
struct fc_exch {int xid; int ex_list; TYPE_1__* em; struct fc_exch_pool* pool; } ;
struct TYPE_2__ {int min_xid; } ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct fc_exch_pool*,void*,int *) ;
 int FUNC_2 (struct fc_exch*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct fc_exch *VAR_2)
{
 struct fc_exch_pool *VAR_3;
 u16 VAR_4;

 VAR_3 = VAR_2->pool;
 FUNC_4(&VAR_3->lock);
 FUNC_0(VAR_3->total_exches <= 0);
 VAR_3->total_exches--;


 VAR_4 = (VAR_2->xid - VAR_2->em->min_xid) >> VAR_1;
 if (VAR_3->left == VAR_0)
  VAR_3->left = VAR_4;
 else if (VAR_3->right == VAR_0)
  VAR_3->right = VAR_4;
 else
  VAR_3->next_index = VAR_4;

 FUNC_1(VAR_3, VAR_4, ((void*)0));
 FUNC_3(&VAR_2->ex_list);
 FUNC_5(&VAR_3->lock);
 FUNC_2(VAR_2);
}
