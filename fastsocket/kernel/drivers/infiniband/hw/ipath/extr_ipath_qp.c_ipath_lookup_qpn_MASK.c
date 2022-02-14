
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ipath_qp_table {size_t max; int lock; struct ipath_qp** table; } ;
struct TYPE_2__ {size_t qp_num; } ;
struct ipath_qp {int refcount; TYPE_1__ ibqp; struct ipath_qp* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct ipath_qp *FUNC_3(struct ipath_qp_table *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;
 struct ipath_qp *VAR_3;

 FUNC_1(&VAR_0->lock, VAR_2);

 for (VAR_3 = VAR_0->table[VAR_1 % VAR_0->max]; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3->ibqp.qp_num == VAR_1) {
   FUNC_0(&VAR_3->refcount);
   break;
  }
 }

 FUNC_2(&VAR_0->lock, VAR_2);
 return VAR_3;
}
