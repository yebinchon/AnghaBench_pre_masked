
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_ibdev {scalar_t__ n_ahs_allocated; int n_ahs_lock; } ;
struct ib_ah {int dummy; } ;
struct ib_ah_attr {int dummy; } ;
struct qib_ah {struct ib_ah ibah; int refcount; struct ib_ah_attr attr; } ;
struct ib_pd {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_ah* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct qib_ah*) ;
 struct qib_ah* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ,struct ib_ah_attr*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct qib_ibdev* FUNC_7 (int ) ;

__attribute__((used)) static struct ib_ah *FUNC_8(struct ib_pd *VAR_4,
       struct ib_ah_attr *VAR_5)
{
 struct qib_ah *VAR_6;
 struct ib_ah *VAR_7;
 struct qib_ibdev *VAR_8 = FUNC_7(VAR_4->device);
 unsigned long VAR_9;

 if (FUNC_4(VAR_4->device, VAR_5)) {
  VAR_7 = FUNC_0(-VAR_0);
  goto bail;
 }

 VAR_6 = FUNC_3(sizeof *VAR_6, VAR_2);
 if (!VAR_6) {
  VAR_7 = FUNC_0(-VAR_1);
  goto bail;
 }

 FUNC_5(&VAR_8->n_ahs_lock, VAR_9);
 if (VAR_8->n_ahs_allocated == VAR_3) {
  FUNC_6(&VAR_8->n_ahs_lock, VAR_9);
  FUNC_2(VAR_6);
  VAR_7 = FUNC_0(-VAR_1);
  goto bail;
 }

 VAR_8->n_ahs_allocated++;
 FUNC_6(&VAR_8->n_ahs_lock, VAR_9);


 VAR_6->attr = *VAR_5;
 FUNC_1(&VAR_6->refcount, 0);

 VAR_7 = &VAR_6->ibah;

bail:
 return VAR_7;
}
