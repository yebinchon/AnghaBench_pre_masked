
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_pgoff; struct nes_ucontext* vm_private_data; int vm_page_prot; scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct nes_vnic {struct nes_device* nesdev; } ;
struct TYPE_4__ {int sq_vbase; } ;
struct nes_ucontext {int mmap_wq_offset; int* mmap_db_index; int allocated_doorbells; TYPE_2__ hwqp; struct nes_ucontext** mmap_nesqp; int allocated_wqs; } ;
struct nes_qp {int mmap_wq_offset; int* mmap_db_index; int allocated_doorbells; TYPE_2__ hwqp; struct nes_qp** mmap_nesqp; int allocated_wqs; } ;
struct nes_hw_qp_wqe {int dummy; } ;
struct nes_device {int doorbell_start; int base_doorbell_index; TYPE_1__* nesadapter; } ;
struct ib_ucontext {int device; } ;
struct TYPE_3__ {int max_qp_wr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,scalar_t__,int,int,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*,scalar_t__,int,scalar_t__,int ) ;
 int FUNC_4 (unsigned long,int ) ;
 struct nes_ucontext* FUNC_5 (struct ib_ucontext*) ;
 struct nes_vnic* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ib_ucontext *VAR_6, struct vm_area_struct *VAR_7)
{
 unsigned long VAR_8;
 struct nes_vnic *VAR_9 = FUNC_6(VAR_6->device);
 struct nes_device *VAR_10 = VAR_9->nesdev;

 struct nes_ucontext *VAR_11;
 struct nes_qp *VAR_12;

 VAR_11 = FUNC_5(VAR_6);


 if (VAR_7->vm_pgoff >= VAR_11->mmap_wq_offset) {
  VAR_8 = (VAR_7->vm_pgoff - VAR_11->mmap_wq_offset) * VAR_5;
  VAR_8 /= ((sizeof(struct nes_hw_qp_wqe) * VAR_10->nesadapter->max_qp_wr * 2) +
    VAR_5-1) & (~(VAR_5-1));
  if (!FUNC_4(VAR_8, VAR_11->allocated_wqs)) {
   FUNC_1(VAR_3, "wq %lu not allocated\n", VAR_8);
   return -VAR_1;
  }
  VAR_12 = VAR_11->mmap_nesqp[VAR_8];
  if (VAR_12 == ((void*)0)) {
   FUNC_1(VAR_3, "wq %lu has a NULL QP base.\n", VAR_8);
   return -VAR_1;
  }
  if (FUNC_3(VAR_7, VAR_7->vm_start,
    FUNC_7(VAR_12->hwqp.sq_vbase) >> VAR_4,
    VAR_7->vm_end - VAR_7->vm_start,
    VAR_7->vm_page_prot)) {
   FUNC_1(VAR_3, "remap_pfn_range failed.\n");
   return -VAR_0;
  }
  VAR_7->vm_private_data = VAR_12;
  return 0;
 } else {
  VAR_8 = VAR_7->vm_pgoff;
  if (!FUNC_4(VAR_8, VAR_11->allocated_doorbells))
   return -VAR_1;

  VAR_7->vm_page_prot = FUNC_2(VAR_7->vm_page_prot);
  if (FUNC_0(VAR_7, VAR_7->vm_start,
    (VAR_10->doorbell_start +
    ((VAR_11->mmap_db_index[VAR_8] - VAR_10->base_doorbell_index) * 4096))
    >> VAR_4, VAR_5, VAR_7->vm_page_prot))
   return -VAR_0;
  VAR_7->vm_private_data = VAR_11;
  return 0;
 }

 return -VAR_2;
}
