
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_ibdev {int n_ahs_lock; int n_ahs_allocated; } ;
struct ipath_ah {int dummy; } ;
struct ib_ah {int device; } ;


 int FUNC_0 (struct ipath_ah*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct ipath_ah* FUNC_3 (struct ib_ah*) ;
 struct ipath_ibdev* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ib_ah *VAR_0)
{
 struct ipath_ibdev *VAR_1 = FUNC_4(VAR_0->device);
 struct ipath_ah *VAR_2 = FUNC_3(VAR_0);
 unsigned long VAR_3;

 FUNC_1(&VAR_1->n_ahs_lock, VAR_3);
 VAR_1->n_ahs_allocated--;
 FUNC_2(&VAR_1->n_ahs_lock, VAR_3);

 FUNC_0(VAR_2);

 return 0;
}
