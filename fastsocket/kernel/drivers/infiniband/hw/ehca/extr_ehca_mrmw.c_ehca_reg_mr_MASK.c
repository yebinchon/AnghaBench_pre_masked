
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_3__ {int handle; } ;
struct ehca_shca {int ib_device; TYPE_1__ ipz_hca_handle; } ;
struct ehca_pd {int fw_pd; } ;
struct ehca_mr_pginfo {int num_hwpages; int num_kpages; int hwpage_size; } ;
struct ehca_mr_hipzout_parms {int lkey; int rkey; int handle; } ;
struct ehca_mr {scalar_t__* start; int acl; scalar_t__ size; int hwpage_size; int num_hwpages; int num_kpages; int ipz_mr_handle; } ;
typedef enum ehca_reg_type { ____Placeholder_ehca_reg_type } ehca_reg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (struct ehca_shca*,struct ehca_mr*,struct ehca_mr_pginfo*) ;
 int FUNC_5 (struct ehca_shca*,struct ehca_mr*,struct ehca_mr_pginfo*) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (TYPE_1__,struct ehca_mr*,scalar_t__,scalar_t__,int,int ,struct ehca_mr_hipzout_parms*) ;
 scalar_t__ FUNC_7 (TYPE_1__,struct ehca_mr*) ;

int FUNC_8(struct ehca_shca *VAR_5,
  struct ehca_mr *VAR_6,
  u64 *VAR_7,
  u64 VAR_8,
  int VAR_9,
  struct ehca_pd *VAR_10,
  struct ehca_mr_pginfo *VAR_11,
  u32 *VAR_12,
  u32 *VAR_13,
  enum ehca_reg_type VAR_14)
{
 int VAR_15;
 u64 VAR_16;
 u32 VAR_17;
 struct ehca_mr_hipzout_parms VAR_18;

 FUNC_2(VAR_9, &VAR_17);
 FUNC_3(VAR_11->hwpage_size, &VAR_17);
 if (VAR_4 == 1)
  VAR_17 |= 0x00000001;

 VAR_16 = FUNC_6(VAR_5->ipz_hca_handle, VAR_6,
      (u64)VAR_7, VAR_8, VAR_17,
      VAR_10->fw_pd, &VAR_18);
 if (VAR_16 != VAR_3) {
  FUNC_1(&VAR_5->ib_device, "hipz_alloc_mr failed, h_ret=%lli "
    "hca_hndl=%llx", VAR_16, VAR_5->ipz_hca_handle.handle);
  VAR_15 = FUNC_0(VAR_16);
  goto ehca_reg_mr_exit0;
 }

 VAR_6->ipz_mr_handle = VAR_18.handle;

 if (VAR_14 == VAR_0)
  VAR_15 = FUNC_4(VAR_5, VAR_6, VAR_11);
 else if (VAR_14 == VAR_1)
  VAR_15 = FUNC_5(VAR_5, VAR_6, VAR_11);
 else
  VAR_15 = -VAR_2;

 if (VAR_15)
  goto ehca_reg_mr_exit1;


 VAR_6->num_kpages = VAR_11->num_kpages;
 VAR_6->num_hwpages = VAR_11->num_hwpages;
 VAR_6->hwpage_size = VAR_11->hwpage_size;
 VAR_6->start = VAR_7;
 VAR_6->size = VAR_8;
 VAR_6->acl = VAR_9;
 *VAR_12 = VAR_18.lkey;
 *VAR_13 = VAR_18.rkey;
 return 0;

ehca_reg_mr_exit1:
 VAR_16 = FUNC_7(VAR_5->ipz_hca_handle, VAR_6);
 if (VAR_16 != VAR_3) {
  FUNC_1(&VAR_5->ib_device, "h_ret=%lli shca=%p e_mr=%p "
    "iova_start=%p size=%llx acl=%x e_pd=%p lkey=%x "
    "pginfo=%p num_kpages=%llx num_hwpages=%llx ret=%i",
    VAR_16, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
    VAR_18.lkey, VAR_11, VAR_11->num_kpages,
    VAR_11->num_hwpages, VAR_15);
  FUNC_1(&VAR_5->ib_device, "internal error in ehca_reg_mr, "
    "not recoverable");
 }
ehca_reg_mr_exit0:
 if (VAR_15)
  FUNC_1(&VAR_5->ib_device, "ret=%i shca=%p e_mr=%p "
    "iova_start=%p size=%llx acl=%x e_pd=%p pginfo=%p "
    "num_kpages=%llx num_hwpages=%llx",
    VAR_15, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
    VAR_11->num_kpages, VAR_11->num_hwpages);
 return VAR_15;
}
