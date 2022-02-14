
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct ehca_shca {int ib_device; int ipz_hca_handle; } ;
struct ehca_pd {int fw_pd; } ;
struct ehca_mr_pginfo {int num_hwpages; int num_kpages; int hwpage_size; int type; } ;
struct ehca_mr_hipzout_parms {int rkey; int lkey; scalar_t__ vaddr; } ;
struct TYPE_5__ {int lkey; } ;
struct TYPE_6__ {TYPE_2__ ib_mr; } ;
struct TYPE_4__ {int handle; } ;
struct ehca_mr {scalar_t__* start; int acl; scalar_t__ size; int hwpage_size; int num_hwpages; int num_kpages; TYPE_3__ ib; TYPE_1__ ipz_mr_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct ehca_mr_pginfo*,int ,scalar_t__*) ;
 int FUNC_6 (int *,char*,scalar_t__,struct ehca_mr*) ;
 scalar_t__ FUNC_7 (int ,struct ehca_mr*,scalar_t__,scalar_t__,int ,int ,scalar_t__,struct ehca_mr_hipzout_parms*) ;
 scalar_t__ FUNC_8 (scalar_t__*) ;

inline int FUNC_9(struct ehca_shca *VAR_5,
    struct ehca_mr *VAR_6,
    u64 *VAR_7,
    u64 VAR_8,
    u32 VAR_9,
    struct ehca_pd *VAR_10,
    struct ehca_mr_pginfo *VAR_11,
    u32 *VAR_12,
    u32 *VAR_13)
{
 int VAR_14;
 u64 VAR_15;
 u32 VAR_16;
 u64 *VAR_17;
 u64 VAR_18;
 struct ehca_mr_pginfo VAR_19;
 struct ehca_mr_hipzout_parms VAR_20;

 FUNC_3(VAR_9, &VAR_16);
 FUNC_4(VAR_11->hwpage_size, &VAR_16);

 VAR_17 = FUNC_0(VAR_3);
 if (!VAR_17) {
  FUNC_1(&VAR_5->ib_device, "kpage alloc failed");
  VAR_14 = -VAR_2;
  goto ehca_rereg_mr_rereg1_exit0;
 }

 VAR_19 = *VAR_11;
 VAR_14 = FUNC_5(VAR_11, VAR_11->num_hwpages, VAR_17);
 if (VAR_14) {
  FUNC_1(&VAR_5->ib_device, "set pagebuf failed, e_mr=%p "
    "pginfo=%p type=%x num_kpages=%llx num_hwpages=%llx "
    "kpage=%p", VAR_6, VAR_11, VAR_11->type,
    VAR_11->num_kpages, VAR_11->num_hwpages, VAR_17);
  goto ehca_rereg_mr_rereg1_exit1;
 }
 VAR_18 = FUNC_8(VAR_17);
 if (!VAR_18) {
  FUNC_1(&VAR_5->ib_device, "kpage=%p", VAR_17);
  VAR_14 = -VAR_1;
  goto ehca_rereg_mr_rereg1_exit1;
 }
 VAR_15 = FUNC_7(VAR_5->ipz_hca_handle, VAR_6,
          (u64)VAR_7, VAR_8, VAR_16,
          VAR_10->fw_pd, VAR_18, &VAR_20);
 if (VAR_15 != VAR_4) {





  FUNC_6(&VAR_5->ib_device, "hipz_h_reregister_pmr failed "
     "(Rereg1), h_ret=%lli e_mr=%p", VAR_15, VAR_6);
  *VAR_11 = VAR_19;
  VAR_14 = -VAR_0;
 } else if ((u64 *)VAR_20.vaddr != VAR_7) {
  FUNC_1(&VAR_5->ib_device, "PHYP changed iova_start in "
    "rereg_pmr, iova_start=%p iova_start_out=%llx e_mr=%p "
    "mr_handle=%llx lkey=%x lkey_out=%x", VAR_7,
    VAR_20.vaddr, VAR_6, VAR_6->ipz_mr_handle.handle,
    VAR_6->ib.ib_mr.lkey, VAR_20.lkey);
  VAR_14 = -VAR_1;
 } else {




  VAR_6->num_kpages = VAR_11->num_kpages;
  VAR_6->num_hwpages = VAR_11->num_hwpages;
  VAR_6->hwpage_size = VAR_11->hwpage_size;
  VAR_6->start = VAR_7;
  VAR_6->size = VAR_8;
  VAR_6->acl = VAR_9;
  *VAR_12 = VAR_20.lkey;
  *VAR_13 = VAR_20.rkey;
 }

ehca_rereg_mr_rereg1_exit1:
 FUNC_2(VAR_17);
ehca_rereg_mr_rereg1_exit0:
 if ( VAR_14 && (VAR_14 != -VAR_0) )
  FUNC_1(&VAR_5->ib_device, "ret=%i lkey=%x rkey=%x "
    "pginfo=%p num_kpages=%llx num_hwpages=%llx",
    VAR_14, *VAR_12, *VAR_13, VAR_11, VAR_11->num_kpages,
    VAR_11->num_hwpages);
 return VAR_14;
}
