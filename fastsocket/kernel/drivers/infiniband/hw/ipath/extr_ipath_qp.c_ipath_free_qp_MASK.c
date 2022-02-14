
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_qp_table {size_t max; int lock; struct ipath_qp** table; } ;
struct TYPE_2__ {size_t qp_num; } ;
struct ipath_qp {int refcount; struct ipath_qp* next; TYPE_1__ ibqp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ipath_qp_table *VAR_0, struct ipath_qp *VAR_1)
{
 struct ipath_qp *VAR_2, **VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_0->lock, VAR_4);


 VAR_3 = &VAR_0->table[VAR_1->ibqp.qp_num % VAR_0->max];
 for (; (VAR_2 = *VAR_3) != ((void*)0); VAR_3 = &VAR_2->next) {
  if (VAR_2 == VAR_1) {
   *VAR_3 = VAR_1->next;
   VAR_1->next = ((void*)0);
   FUNC_0(&VAR_1->refcount);
   break;
  }
 }

 FUNC_2(&VAR_0->lock, VAR_4);
}
