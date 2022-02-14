
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
struct ehca_mr_pginfo {int num_hwpages; int num_kpages; int hwpage_size; } ;
struct TYPE_7__ {int handle; } ;
struct TYPE_5__ {int lkey; } ;
struct TYPE_6__ {TYPE_1__ ib_mr; } ;
struct ehca_mr {TYPE_3__ ipz_mr_handle; TYPE_2__ ib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (struct ehca_mr_pginfo*,int,scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_4__,struct ehca_mr*,int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__*) ;

int FUNC_9(struct ehca_shca *VAR_6,
         struct ehca_mr *VAR_7,
         struct ehca_mr_pginfo *VAR_8)
{
 int VAR_9 = 0;
 u64 VAR_10;
 u32 VAR_11;
 u64 VAR_12;
 u32 VAR_13;
 u64 *VAR_14;

 if (!VAR_8->num_hwpages)
  return 0;

 VAR_14 = FUNC_2(VAR_2);
 if (!VAR_14) {
  FUNC_4(&VAR_6->ib_device, "kpage alloc failed");
  VAR_9 = -VAR_1;
  goto ehca_reg_mr_rpages_exit0;
 }


 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_8->num_hwpages, VAR_5); VAR_13++) {

  if (VAR_13 == FUNC_0(VAR_8->num_hwpages, VAR_5) - 1) {
   VAR_11 = VAR_8->num_hwpages % VAR_5;
   if (VAR_11 == 0)
    VAR_11 = VAR_5;
  } else
   VAR_11 = VAR_5;

  VAR_9 = FUNC_6(VAR_8, VAR_11, VAR_14);
  if (VAR_9) {
   FUNC_4(&VAR_6->ib_device, "ehca_set_pagebuf "
     "bad rc, ret=%i rnum=%x kpage=%p",
     VAR_9, VAR_11, VAR_14);
   goto ehca_reg_mr_rpages_exit1;
  }

  if (VAR_11 > 1) {
   VAR_12 = FUNC_8(VAR_14);
   if (!VAR_12) {
    FUNC_4(&VAR_6->ib_device, "kpage=%p i=%x",
      VAR_14, VAR_13);
    VAR_9 = -VAR_0;
    goto ehca_reg_mr_rpages_exit1;
   }
  } else
   VAR_12 = *VAR_14;

  VAR_10 = FUNC_7(
   VAR_6->ipz_hca_handle, VAR_7,
   FUNC_3(VAR_8->hwpage_size),
   0, VAR_12, VAR_11);

  if (VAR_13 == FUNC_0(VAR_8->num_hwpages, VAR_5) - 1) {




   if (VAR_10 != VAR_4) {
    FUNC_4(&VAR_6->ib_device, "last "
      "hipz_reg_rpage_mr failed, h_ret=%lli "
      "e_mr=%p i=%x hca_hndl=%llx mr_hndl=%llx"
      " lkey=%x", VAR_10, VAR_7, VAR_13,
      VAR_6->ipz_hca_handle.handle,
      VAR_7->ipz_mr_handle.handle,
      VAR_7->ib.ib_mr.lkey);
    VAR_9 = FUNC_1(VAR_10);
    break;
   } else
    VAR_9 = 0;
  } else if (VAR_10 != VAR_3) {
   FUNC_4(&VAR_6->ib_device, "hipz_reg_rpage_mr failed, "
     "h_ret=%lli e_mr=%p i=%x lkey=%x hca_hndl=%llx "
     "mr_hndl=%llx", VAR_10, VAR_7, VAR_13,
     VAR_7->ib.ib_mr.lkey,
     VAR_6->ipz_hca_handle.handle,
     VAR_7->ipz_mr_handle.handle);
   VAR_9 = FUNC_1(VAR_10);
   break;
  } else
   VAR_9 = 0;
 }


ehca_reg_mr_rpages_exit1:
 FUNC_5(VAR_14);
ehca_reg_mr_rpages_exit0:
 if (VAR_9)
  FUNC_4(&VAR_6->ib_device, "ret=%i shca=%p e_mr=%p pginfo=%p "
    "num_kpages=%llx num_hwpages=%llx", VAR_9, VAR_6, VAR_7,
    VAR_8, VAR_8->num_kpages, VAR_8->num_hwpages);
 return VAR_9;
}
