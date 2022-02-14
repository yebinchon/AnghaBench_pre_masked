
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef unsigned long u32 ;
struct nes_vnic {struct nes_device* nesdev; } ;
struct nes_qp_context {int dummy; } ;
struct TYPE_2__ {int sq_pbase; int sq_vbase; int rq_pbase; void* rq_vbase; scalar_t__ q2_pbase; int * q2_vbase; } ;
struct nes_qp {int qp_mem_size; int sq_kmapped; TYPE_1__ hwqp; scalar_t__ nesqp_context_pbase; int * nesqp_context; scalar_t__ page; int * pbl_vbase; scalar_t__ pbl_pbase; } ;
struct nes_pbl {int pbl_size; scalar_t__ pbl_pbase; int * pbl_vbase; scalar_t__ page; } ;
struct nes_hw_qp_wqe {int dummy; } ;
struct nes_device {int pcidev; struct nes_adapter* nesadapter; } ;
struct nes_adapter {int pbl_lock; int free_256pbl; } ;
typedef int __le64 ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nes_pbl*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,char*,...) ;
 void* FUNC_7 (int ,int,scalar_t__*) ;
 int FUNC_8 (int ,int,int *,scalar_t__) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct nes_qp *VAR_3, struct nes_pbl *VAR_4,
  struct nes_vnic *VAR_5, int VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 void *VAR_9;
 __le64 *VAR_10 = ((void*)0);
 __le64 *VAR_11;
 __le64 *VAR_12;
 struct nes_device *VAR_13 = VAR_5->nesdev;
 struct nes_adapter *VAR_14 = VAR_13->nesadapter;
 u32 VAR_15;
 u8 VAR_16;
 u8 VAR_17;

 VAR_15 = VAR_4->pbl_size >> 3;
 FUNC_6(VAR_1, "Userspace PBL, pbl_size=%u, pbl_entries = %d pbl_vbase=%p, pbl_pbase=%lx\n",
   VAR_4->pbl_size, VAR_15,
   (void *)VAR_4->pbl_vbase,
   (unsigned long) VAR_4->pbl_pbase);
 VAR_10 = (__le64 *) VAR_4->pbl_vbase;


 VAR_16 = (VAR_7 * sizeof(struct nes_hw_qp_wqe)) >> 12;
 VAR_17 = (VAR_6 * sizeof(struct nes_hw_qp_wqe)) >> 12;
 VAR_3->hwqp.sq_pbase = (FUNC_3(((__le32 *)VAR_10)[0])) | ((u64)((FUNC_3(((__le32 *)VAR_10)[1]))) << 32);
 if (!VAR_4->page) {
  FUNC_6(VAR_1, "QP nespbl->page is NULL \n");
  FUNC_0(VAR_4);
  return -VAR_0;
 }

 VAR_3->hwqp.sq_vbase = FUNC_1(VAR_4->page);
 VAR_3->page = VAR_4->page;
 if (!VAR_3->hwqp.sq_vbase) {
  FUNC_6(VAR_1, "QP sq_vbase kmap failed\n");
  FUNC_0(VAR_4);
  return -VAR_0;
 }



 VAR_10 += VAR_17;
 VAR_3->hwqp.rq_pbase = (FUNC_3(((__le32 *)VAR_10)[0])) | ((u64)((FUNC_3(((__le32 *)VAR_10)[1]))) << 32);



 FUNC_6(VAR_1, "QP sq_vbase= %p sq_pbase=%lx rq_vbase=%p rq_pbase=%lx\n",
    VAR_3->hwqp.sq_vbase, (unsigned long) VAR_3->hwqp.sq_pbase,
    VAR_3->hwqp.rq_vbase, (unsigned long) VAR_3->hwqp.rq_pbase);
 FUNC_9(&VAR_14->pbl_lock, VAR_8);
 if (!VAR_14->free_256pbl) {
  FUNC_8(VAR_13->pcidev, VAR_4->pbl_size, VAR_4->pbl_vbase,
    VAR_4->pbl_pbase);
  FUNC_10(&VAR_14->pbl_lock, VAR_8);
  FUNC_2(VAR_3->page);
  FUNC_0(VAR_4);
  return -VAR_0;
 }
 VAR_14->free_256pbl--;
 FUNC_10(&VAR_14->pbl_lock, VAR_8);

 VAR_3->pbl_vbase = FUNC_7(VAR_13->pcidev, 256, &VAR_3->pbl_pbase);
 VAR_12 = VAR_3->pbl_vbase;
 if (!VAR_3->pbl_vbase) {

  FUNC_8(VAR_13->pcidev, VAR_4->pbl_size, VAR_4->pbl_vbase,
        VAR_4->pbl_pbase);
  FUNC_0(VAR_4);
  FUNC_9(&VAR_14->pbl_lock, VAR_8);
  VAR_14->free_256pbl++;
  FUNC_10(&VAR_14->pbl_lock, VAR_8);
  FUNC_2(VAR_3->page);
  return -VAR_0;
 }
 FUNC_5(VAR_3->pbl_vbase, 0, 256);

 VAR_11 = VAR_12 + 16;
 VAR_10 = (__le64 *)VAR_4->pbl_vbase;
 while (VAR_17--)
  *VAR_11++ = *VAR_10++;
 VAR_11 = VAR_12;
 while (VAR_16--)
  *VAR_11++ = *VAR_10++;


 FUNC_8(VAR_13->pcidev, VAR_4->pbl_size, VAR_4->pbl_vbase,
       VAR_4->pbl_pbase);
 FUNC_0(VAR_4);

 VAR_3->qp_mem_size =
   FUNC_4((u32)sizeof(struct nes_qp_context), ((u32)256)) + 256;

 VAR_3->qp_mem_size += VAR_2 - 1;
 VAR_3->qp_mem_size &= ~(VAR_2 - 1);

 VAR_9 = FUNC_7(VAR_13->pcidev, VAR_3->qp_mem_size,
   &VAR_3->hwqp.q2_pbase);

 if (!VAR_9) {
  FUNC_8(VAR_13->pcidev, 256, VAR_3->pbl_vbase, VAR_3->pbl_pbase);
  VAR_3->pbl_vbase = ((void*)0);
  FUNC_9(&VAR_14->pbl_lock, VAR_8);
  VAR_14->free_256pbl++;
  FUNC_10(&VAR_14->pbl_lock, VAR_8);
  FUNC_2(VAR_3->page);
  return -VAR_0;
 }
 VAR_3->sq_kmapped = 1;
 VAR_3->hwqp.q2_vbase = VAR_9;
 VAR_9 += 256;
 FUNC_5(VAR_3->hwqp.q2_vbase, 0, 256);
 VAR_3->nesqp_context = VAR_9;
 FUNC_5(VAR_3->nesqp_context, 0, sizeof(*VAR_3->nesqp_context));
 VAR_3->nesqp_context_pbase = VAR_3->hwqp.q2_pbase + 256;

 return 0;
}
