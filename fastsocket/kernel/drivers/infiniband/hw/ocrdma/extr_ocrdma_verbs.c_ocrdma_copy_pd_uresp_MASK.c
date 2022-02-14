
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocrdma_ucontext {int dummy; } ;
struct ocrdma_pd {int id; struct ocrdma_ucontext* uctx; scalar_t__ dpp_enabled; TYPE_2__* dev; } ;
struct ocrdma_alloc_pd_uresp {int id; scalar_t__ dpp_page_addr_lo; int dpp_page_addr_hi; scalar_t__ dpp_enabled; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {int dummy; } ;
typedef int rsp ;
struct TYPE_3__ {int db_page_size; scalar_t__ dpp_unmapped_addr; scalar_t__ unmapped_db; } ;
struct TYPE_4__ {TYPE_1__ nic_info; } ;


 int VAR_0 ;
 struct ocrdma_ucontext* FUNC_0 (struct ib_ucontext*) ;
 int FUNC_1 (struct ib_udata*,struct ocrdma_alloc_pd_uresp*,int) ;
 int FUNC_2 (struct ocrdma_alloc_pd_uresp*,int ,int) ;
 int FUNC_3 (struct ocrdma_ucontext*,scalar_t__,int) ;
 int FUNC_4 (struct ocrdma_ucontext*,scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct ocrdma_pd *VAR_1,
    struct ib_ucontext *VAR_2,
    struct ib_udata *VAR_3)
{
 int VAR_4;
 u64 VAR_5;
 u64 VAR_6 = 0;
 u32 VAR_7;
 struct ocrdma_alloc_pd_uresp VAR_8;
 struct ocrdma_ucontext *VAR_9 = FUNC_0(VAR_2);

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.id = VAR_1->id;
 VAR_8.dpp_enabled = VAR_1->dpp_enabled;
 VAR_5 = VAR_1->dev->nic_info.unmapped_db +
   (VAR_1->id * VAR_1->dev->nic_info.db_page_size);
 VAR_7 = VAR_1->dev->nic_info.db_page_size;

 VAR_4 = FUNC_3(VAR_9, VAR_5, VAR_7);
 if (VAR_4)
  return VAR_4;

 if (VAR_1->dpp_enabled) {
  VAR_6 = VAR_1->dev->nic_info.dpp_unmapped_addr +
    (VAR_1->id * VAR_0);
  VAR_4 = FUNC_3(VAR_9, VAR_6,
     VAR_0);
  if (VAR_4)
   goto dpp_map_err;
  VAR_8.dpp_page_addr_hi = FUNC_5(VAR_6);
  VAR_8.dpp_page_addr_lo = VAR_6;
 }

 VAR_4 = FUNC_1(VAR_3, &VAR_8, sizeof(VAR_8));
 if (VAR_4)
  goto ucopy_err;

 VAR_1->uctx = VAR_9;
 return 0;

ucopy_err:
 if (VAR_1->dpp_enabled)
  FUNC_4(VAR_1->uctx, VAR_6, VAR_0);
dpp_map_err:
 FUNC_4(VAR_1->uctx, VAR_5, VAR_7);
 return VAR_4;
}
