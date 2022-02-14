
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_8__ {int handle; } ;
struct ehca_shca {int ib_device; TYPE_4__ ipz_hca_handle; } ;
struct ehca_pd {int dummy; } ;
struct ehca_mr_pginfo {scalar_t__ num_hwpages; int num_kpages; } ;
struct TYPE_6__ {int lkey; } ;
struct TYPE_7__ {TYPE_2__ ib_mr; } ;
struct TYPE_5__ {int handle; } ;
struct ehca_mr {scalar_t__ num_hwpages; int flags; int fmr_map_cnt; int fmr_max_maps; int fmr_max_pages; int fmr_page_size; int hwpage_size; TYPE_3__ ib; TYPE_1__ ipz_mr_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct ehca_mr*) ;
 int FUNC_4 (struct ehca_shca*,struct ehca_mr*,scalar_t__*,scalar_t__,int,struct ehca_pd*,struct ehca_mr_pginfo*,scalar_t__*,scalar_t__*,int ) ;
 int FUNC_5 (struct ehca_shca*,struct ehca_mr*,scalar_t__*,scalar_t__,int,struct ehca_pd*,struct ehca_mr_pginfo*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_6 (TYPE_4__,struct ehca_mr*) ;
 int FUNC_7 (int*,int*,scalar_t__) ;

int FUNC_8(struct ehca_shca *VAR_5,
    struct ehca_mr *VAR_6,
    u64 *VAR_7,
    u64 VAR_8,
    int VAR_9,
    struct ehca_pd *VAR_10,
    struct ehca_mr_pginfo *VAR_11,
    u32 *VAR_12,
    u32 *VAR_13)
{
 int VAR_14 = 0;
 u64 VAR_15;
 int VAR_16 = 1;
 int VAR_17 = 0;


 if ((VAR_11->num_hwpages > VAR_4) ||
     (VAR_6->num_hwpages > VAR_4) ||
     (VAR_11->num_hwpages > VAR_6->num_hwpages)) {
  FUNC_1(&VAR_5->ib_device, "Rereg3 case, "
    "pginfo->num_hwpages=%llx e_mr->num_hwpages=%x",
    VAR_11->num_hwpages, VAR_6->num_hwpages);
  VAR_16 = 0;
  VAR_17 = 1;
 }

 if (VAR_6->flags & VAR_1) {
  VAR_16 = 0;
  VAR_17 = 1;
  VAR_6->flags &= ~VAR_1;
  FUNC_2(&VAR_5->ib_device, "Rereg MR for max-MR! e_mr=%p",
    VAR_6);
 }

 if (VAR_16) {
  VAR_14 = FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8,
        VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
  if (VAR_14) {
   if (VAR_14 == -VAR_0)
    VAR_17 = 1;
   else
    goto ehca_rereg_mr_exit0;
  }
 }

 if (VAR_17) {
  struct ehca_mr VAR_18;


  VAR_15 = FUNC_6(VAR_5->ipz_hca_handle, VAR_6);
  if (VAR_15 != VAR_3) {
   FUNC_2(&VAR_5->ib_device, "hipz_free_mr failed, "
     "h_ret=%lli e_mr=%p hca_hndl=%llx mr_hndl=%llx "
     "mr->lkey=%x",
     VAR_15, VAR_6, VAR_5->ipz_hca_handle.handle,
     VAR_6->ipz_mr_handle.handle,
     VAR_6->ib.ib_mr.lkey);
   VAR_14 = FUNC_0(VAR_15);
   goto ehca_rereg_mr_exit0;
  }

  VAR_18 = *VAR_6;
  FUNC_3(VAR_6);


  VAR_6->flags = VAR_18.flags;
  VAR_6->hwpage_size = VAR_18.hwpage_size;
  VAR_6->fmr_page_size = VAR_18.fmr_page_size;
  VAR_6->fmr_max_pages = VAR_18.fmr_max_pages;
  VAR_6->fmr_max_maps = VAR_18.fmr_max_maps;
  VAR_6->fmr_map_cnt = VAR_18.fmr_map_cnt;

  VAR_14 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
      VAR_10, VAR_11, VAR_12, VAR_13, VAR_2);
  if (VAR_14) {
   u32 VAR_19 = (u64)(&VAR_6->flags) - (u64)VAR_6;
   FUNC_7(&VAR_6->flags, &(VAR_18.flags),
          sizeof(struct ehca_mr) - VAR_19);
   goto ehca_rereg_mr_exit0;
  }
 }

ehca_rereg_mr_exit0:
 if (VAR_14)
  FUNC_2(&VAR_5->ib_device, "ret=%i shca=%p e_mr=%p "
    "iova_start=%p size=%llx acl=%x e_pd=%p pginfo=%p "
    "num_kpages=%llx lkey=%x rkey=%x rereg_1_hcall=%x "
    "rereg_3_hcall=%x", VAR_14, VAR_5, VAR_6, VAR_7, VAR_8,
    VAR_9, VAR_10, VAR_11, VAR_11->num_kpages, *VAR_12, *VAR_13,
    VAR_16, VAR_17);
 return VAR_14;
}
