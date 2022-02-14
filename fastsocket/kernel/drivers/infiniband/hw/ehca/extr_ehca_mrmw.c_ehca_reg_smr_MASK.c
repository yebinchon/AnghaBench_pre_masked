
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_8__ {int handle; } ;
struct ehca_shca {int ib_device; TYPE_4__ ipz_hca_handle; } ;
struct ehca_pd {int fw_pd; } ;
struct TYPE_7__ {int handle; } ;
struct ehca_mr_hipzout_parms {int rkey; int lkey; TYPE_3__ handle; } ;
struct TYPE_5__ {int lkey; } ;
struct TYPE_6__ {TYPE_1__ ib_mr; } ;
struct ehca_mr {scalar_t__* start; int acl; TYPE_3__ ipz_mr_handle; int size; int hwpage_size; int num_hwpages; int num_kpages; TYPE_2__ ib; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,int,struct ehca_shca*,struct ehca_mr*,struct ehca_mr*,scalar_t__*,int,struct ehca_pd*,...) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (TYPE_4__,struct ehca_mr*,struct ehca_mr*,scalar_t__,int ,int ,struct ehca_mr_hipzout_parms*) ;

int FUNC_5(struct ehca_shca *VAR_1,
   struct ehca_mr *VAR_2,
   struct ehca_mr *VAR_3,
   u64 *VAR_4,
   int VAR_5,
   struct ehca_pd *VAR_6,
   u32 *VAR_7,
   u32 *VAR_8)
{
 int VAR_9 = 0;
 u64 VAR_10;
 u32 VAR_11;
 struct ehca_mr_hipzout_parms VAR_12;

 FUNC_2(VAR_5, &VAR_11);
 FUNC_3(VAR_2->hwpage_size, &VAR_11);

 VAR_10 = FUNC_4(VAR_1->ipz_hca_handle, VAR_3, VAR_2,
        (u64)VAR_4, VAR_11, VAR_6->fw_pd,
        &VAR_12);
 if (VAR_10 != VAR_0) {
  FUNC_1(&VAR_1->ib_device, "hipz_reg_smr failed, h_ret=%lli "
    "shca=%p e_origmr=%p e_newmr=%p iova_start=%p acl=%x "
    "e_pd=%p hca_hndl=%llx mr_hndl=%llx lkey=%x",
    VAR_10, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
    VAR_1->ipz_hca_handle.handle,
    VAR_2->ipz_mr_handle.handle,
    VAR_2->ib.ib_mr.lkey);
  VAR_9 = FUNC_0(VAR_10);
  goto ehca_reg_smr_exit0;
 }

 VAR_3->num_kpages = VAR_2->num_kpages;
 VAR_3->num_hwpages = VAR_2->num_hwpages;
 VAR_3->hwpage_size = VAR_2->hwpage_size;
 VAR_3->start = VAR_4;
 VAR_3->size = VAR_2->size;
 VAR_3->acl = VAR_5;
 VAR_3->ipz_mr_handle = VAR_12.handle;
 *VAR_7 = VAR_12.lkey;
 *VAR_8 = VAR_12.rkey;
 return 0;

ehca_reg_smr_exit0:
 if (VAR_9)
  FUNC_1(&VAR_1->ib_device, "ret=%i shca=%p e_origmr=%p "
    "e_newmr=%p iova_start=%p acl=%x e_pd=%p",
    VAR_9, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 return VAR_9;
}
