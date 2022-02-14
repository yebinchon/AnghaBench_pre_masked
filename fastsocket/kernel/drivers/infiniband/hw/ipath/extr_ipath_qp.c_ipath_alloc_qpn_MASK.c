
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_qp_table {int max; int lock; struct ipath_qp** table; } ;
struct TYPE_2__ {int qp_num; } ;
struct ipath_qp {int refcount; struct ipath_qp* next; TYPE_1__ ibqp; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;


 int FUNC_0 (struct ipath_qp_table*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ipath_qp_table *VAR_0, struct ipath_qp *VAR_1,
      enum ib_qp_type VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_2);
 if (VAR_4 < 0)
  goto bail;
 VAR_1->ibqp.qp_num = VAR_4;


 FUNC_2(&VAR_0->lock, VAR_3);

 VAR_4 %= VAR_0->max;
 VAR_1->next = VAR_0->table[VAR_4];
 VAR_0->table[VAR_4] = VAR_1;
 FUNC_1(&VAR_1->refcount);

 FUNC_3(&VAR_0->lock, VAR_3);
 VAR_4 = 0;

bail:
 return VAR_4;
}
