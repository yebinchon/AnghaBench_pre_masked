
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
struct ehca_shca {TYPE_4__ ipz_hca_handle; int ib_device; struct ehca_mr* maxmr; } ;
struct ehca_pd {int fw_pd; } ;
struct TYPE_7__ {int handle; } ;
struct ehca_mr_hipzout_parms {int rkey; int lkey; TYPE_3__ handle; } ;
struct TYPE_5__ {int lkey; } ;
struct TYPE_6__ {TYPE_1__ ib_mr; } ;
struct ehca_mr {scalar_t__* start; int acl; TYPE_3__ ipz_mr_handle; int size; int hwpage_size; int num_hwpages; int num_kpages; TYPE_2__ ib; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,scalar_t__,struct ehca_mr*,int ,int ,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (TYPE_4__,struct ehca_mr*,struct ehca_mr*,scalar_t__,int ,int ,struct ehca_mr_hipzout_parms*) ;

int FUNC_5(struct ehca_shca *VAR_1,
     struct ehca_mr *VAR_2,
     u64 *VAR_3,
     int VAR_4,
     struct ehca_pd *VAR_5,
     u32 *VAR_6,
     u32 *VAR_7)
{
 u64 VAR_8;
 struct ehca_mr *VAR_9 = VAR_1->maxmr;
 u32 VAR_10;
 struct ehca_mr_hipzout_parms VAR_11;

 FUNC_2(VAR_4, &VAR_10);
 FUNC_3(VAR_9->hwpage_size, &VAR_10);

 VAR_8 = FUNC_4(VAR_1->ipz_hca_handle, VAR_2, VAR_9,
        (u64)VAR_3, VAR_10, VAR_5->fw_pd,
        &VAR_11);
 if (VAR_8 != VAR_0) {
  FUNC_1(&VAR_1->ib_device, "hipz_reg_smr failed, h_ret=%lli "
    "e_origmr=%p hca_hndl=%llx mr_hndl=%llx lkey=%x",
    VAR_8, VAR_9, VAR_1->ipz_hca_handle.handle,
    VAR_9->ipz_mr_handle.handle,
    VAR_9->ib.ib_mr.lkey);
  return FUNC_0(VAR_8);
 }

 VAR_2->num_kpages = VAR_9->num_kpages;
 VAR_2->num_hwpages = VAR_9->num_hwpages;
 VAR_2->hwpage_size = VAR_9->hwpage_size;
 VAR_2->start = VAR_3;
 VAR_2->size = VAR_9->size;
 VAR_2->acl = VAR_4;
 VAR_2->ipz_mr_handle = VAR_11.handle;
 *VAR_6 = VAR_11.lkey;
 *VAR_7 = VAR_11.rkey;
 return 0;
}
