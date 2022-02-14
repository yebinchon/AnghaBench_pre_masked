
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pd {int dummy; } ;
struct qib_ibdev {int n_pds_lock; int n_pds_allocated; } ;
struct ib_pd {int device; } ;


 int FUNC_0 (struct qib_pd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct qib_ibdev* FUNC_3 (int ) ;
 struct qib_pd* FUNC_4 (struct ib_pd*) ;

__attribute__((used)) static int FUNC_5(struct ib_pd *VAR_0)
{
 struct qib_pd *VAR_1 = FUNC_4(VAR_0);
 struct qib_ibdev *VAR_2 = FUNC_3(VAR_0->device);

 FUNC_1(&VAR_2->n_pds_lock);
 VAR_2->n_pds_allocated--;
 FUNC_2(&VAR_2->n_pds_lock);

 FUNC_0(VAR_1);

 return 0;
}
