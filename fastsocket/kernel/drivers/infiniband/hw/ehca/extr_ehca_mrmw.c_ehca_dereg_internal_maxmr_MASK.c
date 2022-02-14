
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_pd {int usecnt; } ;
struct ehca_shca {struct ehca_mr* maxmr; int ib_device; } ;
struct TYPE_4__ {int lkey; struct ib_pd* pd; } ;
struct TYPE_3__ {TYPE_2__ ib_mr; } ;
struct ehca_mr {TYPE_1__ ib; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,char*,...) ;

int FUNC_3(struct ehca_shca *VAR_1)
{
 int VAR_2;
 struct ehca_mr *VAR_3;
 struct ib_pd *VAR_4;

 if (!VAR_1->maxmr) {
  FUNC_2(&VAR_1->ib_device, "bad call, shca=%p", VAR_1);
  VAR_2 = -VAR_0;
  goto ehca_dereg_internal_maxmr_exit0;
 }

 VAR_3 = VAR_1->maxmr;
 VAR_4 = VAR_3->ib.ib_mr.pd;
 VAR_1->maxmr = ((void*)0);

 VAR_2 = FUNC_1(&VAR_3->ib.ib_mr);
 if (VAR_2) {
  FUNC_2(&VAR_1->ib_device, "dereg internal max-MR failed, "
    "ret=%i e_maxmr=%p shca=%p lkey=%x",
    VAR_2, VAR_3, VAR_1, VAR_3->ib.ib_mr.lkey);
  VAR_1->maxmr = VAR_3;
  goto ehca_dereg_internal_maxmr_exit0;
 }

 FUNC_0(&VAR_4->usecnt);

ehca_dereg_internal_maxmr_exit0:
 if (VAR_2)
  FUNC_2(&VAR_1->ib_device, "ret=%i shca=%p shca->maxmr=%p",
    VAR_2, VAR_1, VAR_1->maxmr);
 return VAR_2;
}
