
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; } ;
struct TYPE_6__ {int len; int pa; struct ocrdma_alloc_ucontext_resp* va; } ;
struct ib_ucontext {int dummy; } ;
struct ocrdma_ucontext {TYPE_3__ ah_tbl; struct ib_ucontext ibucontext; int mm_list_lock; int mm_head; struct ocrdma_dev* dev; } ;
struct TYPE_5__ {int fw_ver; int wqe_size; int rqe_size; int max_inline_data; } ;
struct TYPE_4__ {struct pci_dev* pdev; } ;
struct ocrdma_dev {TYPE_2__ attr; int id; TYPE_1__ nic_info; } ;
struct ocrdma_alloc_ucontext_resp {int ah_tbl_len; int fw_ver; int dpp_wqe_size; int rqe_size; int wqe_size; int max_inline_data; int dev_id; int ah_tbl_page; } ;
struct ib_udata {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int resp ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_ucontext* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 struct ocrdma_alloc_ucontext_resp* FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (int *,int,struct ocrdma_alloc_ucontext_resp*,int ) ;
 struct ocrdma_dev* FUNC_4 (struct ib_device*) ;
 int FUNC_5 (struct ib_udata*,struct ocrdma_alloc_ucontext_resp*,int) ;
 int FUNC_6 (struct ocrdma_ucontext*) ;
 struct ocrdma_ucontext* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct ocrdma_alloc_ucontext_resp*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct ocrdma_ucontext*,int ,int) ;
 int FUNC_12 (struct ocrdma_ucontext*,int ,int) ;
 int FUNC_13 (int,int ) ;

struct ib_ucontext *FUNC_14(struct ib_device *VAR_4,
       struct ib_udata *VAR_5)
{
 int VAR_6;
 struct ocrdma_ucontext *VAR_7;
 struct ocrdma_alloc_ucontext_resp VAR_8;
 struct ocrdma_dev *VAR_9 = FUNC_4(VAR_4);
 struct pci_dev *VAR_10 = VAR_9->nic_info.pdev;
 u32 VAR_11 = FUNC_13(sizeof(u32) * 2048, VAR_3);

 if (!VAR_5)
  return FUNC_0(-VAR_0);
 VAR_7 = FUNC_7(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);
 VAR_7->dev = VAR_9;
 FUNC_1(&VAR_7->mm_head);
 FUNC_10(&VAR_7->mm_list_lock);

 VAR_7->ah_tbl.va = FUNC_2(&VAR_10->dev, VAR_11,
         &VAR_7->ah_tbl.pa, VAR_2);
 if (!VAR_7->ah_tbl.va) {
  FUNC_6(VAR_7);
  return FUNC_0(-VAR_1);
 }
 FUNC_9(VAR_7->ah_tbl.va, 0, VAR_11);
 VAR_7->ah_tbl.len = VAR_11;

 FUNC_9(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.ah_tbl_len = VAR_7->ah_tbl.len;
 VAR_8.ah_tbl_page = VAR_7->ah_tbl.pa;

 VAR_6 = FUNC_11(VAR_7, VAR_8.ah_tbl_page, VAR_8.ah_tbl_len);
 if (VAR_6)
  goto map_err;
 VAR_8.dev_id = VAR_9->id;
 VAR_8.max_inline_data = VAR_9->attr.max_inline_data;
 VAR_8.wqe_size = VAR_9->attr.wqe_size;
 VAR_8.rqe_size = VAR_9->attr.rqe_size;
 VAR_8.dpp_wqe_size = VAR_9->attr.wqe_size;

 FUNC_8(VAR_8.fw_ver, VAR_9->attr.fw_ver, sizeof(VAR_8.fw_ver));
 VAR_6 = FUNC_5(VAR_5, &VAR_8, sizeof(VAR_8));
 if (VAR_6)
  goto cpy_err;
 return &VAR_7->ibucontext;

cpy_err:
 FUNC_12(VAR_7, VAR_7->ah_tbl.pa, VAR_7->ah_tbl.len);
map_err:
 FUNC_3(&VAR_10->dev, VAR_7->ah_tbl.len, VAR_7->ah_tbl.va,
     VAR_7->ah_tbl.pa);
 FUNC_6(VAR_7);
 return FUNC_0(VAR_6);
}
