
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_8__ {int handle; } ;
struct ehca_shca {TYPE_3__ ipz_hca_handle; int ib_device; } ;
struct ehca_mr_pginfo {int dummy; } ;
struct TYPE_9__ {int handle; } ;
struct TYPE_6__ {int lkey; } ;
struct TYPE_7__ {TYPE_1__ ib_mr; } ;
struct ehca_mr {TYPE_4__ ipz_mr_handle; TYPE_2__ ib; } ;
struct TYPE_10__ {int * top; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__* FUNC_1 (int ) ;
 TYPE_5__* VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (int,scalar_t__*,struct ehca_shca*,struct ehca_mr*,struct ehca_mr_pginfo*) ;

__attribute__((used)) static int FUNC_6(struct ehca_shca *VAR_6,
       struct ehca_mr *VAR_7,
       struct ehca_mr_pginfo *VAR_8)
{
 int VAR_9;
 u64 VAR_10, *VAR_11;

 VAR_11 = FUNC_1(VAR_2);
 if (!VAR_11) {
  FUNC_3(&VAR_6->ib_device, "kpage alloc failed");
  return -VAR_1;
 }
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (!FUNC_2(VAR_5->top[VAR_9]))
   continue;
  VAR_10 = FUNC_5(VAR_9, VAR_11, VAR_6, VAR_7, VAR_8);
  if ((VAR_10 != VAR_3) && (VAR_10 != VAR_4))
   break;
 }

 FUNC_4(VAR_11);

 if (VAR_10 == VAR_4)
  return 0;
 else {
  FUNC_3(&VAR_6->ib_device, "ehca_reg_bmap_mr_rpages failed, "
     "h_ret=%lli e_mr=%p top=%x lkey=%x "
     "hca_hndl=%llx mr_hndl=%llx", VAR_10, VAR_7, VAR_9,
     VAR_7->ib.ib_mr.lkey,
     VAR_6->ipz_hca_handle.handle,
     VAR_7->ipz_mr_handle.handle);
  return FUNC_0(VAR_10);
 }
}
