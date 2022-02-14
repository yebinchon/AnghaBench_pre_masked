
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_pd {int dummy; } ;
struct qib_pd {struct ib_pd ibpd; int user; } ;
struct qib_ibdev {scalar_t__ n_pds_allocated; int n_pds_lock; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct ib_pd* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct qib_pd*) ;
 struct qib_pd* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct qib_ibdev* FUNC_5 (struct ib_device*) ;

__attribute__((used)) static struct ib_pd *FUNC_6(struct ib_device *VAR_3,
      struct ib_ucontext *VAR_4,
      struct ib_udata *VAR_5)
{
 struct qib_ibdev *VAR_6 = FUNC_5(VAR_3);
 struct qib_pd *VAR_7;
 struct ib_pd *VAR_8;
 VAR_7 = FUNC_2(sizeof *VAR_7, VAR_1);
 if (!VAR_7) {
  VAR_8 = FUNC_0(-VAR_0);
  goto bail;
 }

 FUNC_3(&VAR_6->n_pds_lock);
 if (VAR_6->n_pds_allocated == VAR_2) {
  FUNC_4(&VAR_6->n_pds_lock);
  FUNC_1(VAR_7);
  VAR_8 = FUNC_0(-VAR_0);
  goto bail;
 }

 VAR_6->n_pds_allocated++;
 FUNC_4(&VAR_6->n_pds_lock);


 VAR_7->user = VAR_5 != ((void*)0);

 VAR_8 = &VAR_7->ibpd;

bail:
 return VAR_8;
}
