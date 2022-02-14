
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_ibdev {int n_ahs_lock; int n_ahs_allocated; } ;
struct qib_ah {int refcount; } ;
struct ib_ah {int device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct qib_ah*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct qib_ah* FUNC_4 (struct ib_ah*) ;
 struct qib_ibdev* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ib_ah *VAR_1)
{
 struct qib_ibdev *VAR_2 = FUNC_5(VAR_1->device);
 struct qib_ah *VAR_3 = FUNC_4(VAR_1);
 unsigned long VAR_4;

 if (FUNC_0(&VAR_3->refcount) != 0)
  return -VAR_0;

 FUNC_2(&VAR_2->n_ahs_lock, VAR_4);
 VAR_2->n_ahs_allocated--;
 FUNC_3(&VAR_2->n_ahs_lock, VAR_4);

 FUNC_1(VAR_3);

 return 0;
}
