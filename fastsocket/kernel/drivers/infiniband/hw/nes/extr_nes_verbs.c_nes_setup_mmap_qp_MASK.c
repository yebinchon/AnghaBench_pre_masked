
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nes_vnic {struct nes_device* nesdev; } ;
struct nes_qp_context {int dummy; } ;
struct TYPE_2__ {void* q2_vbase; scalar_t__ q2_pbase; scalar_t__ rq_pbase; scalar_t__ sq_pbase; void* rq_vbase; void* sq_vbase; } ;
struct nes_qp {int qp_mem_size; void* nesqp_context; TYPE_1__ hwqp; scalar_t__ nesqp_context_pbase; } ;
struct nes_hw_qp_wqe {int dummy; } ;
struct nes_device {int pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int ,char*,void*,unsigned long,int) ;
 void* FUNC_3 (int ,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct nes_qp *VAR_3, struct nes_vnic *VAR_4,
  int VAR_5, int VAR_6)
{
 void *VAR_7;
 struct nes_device *VAR_8 = VAR_4->nesdev;

 VAR_3->qp_mem_size = (sizeof(struct nes_hw_qp_wqe) * VAR_5) +
   (sizeof(struct nes_hw_qp_wqe) * VAR_6) +
   FUNC_0((u32)sizeof(struct nes_qp_context), ((u32)256)) +
   256;

 VAR_3->qp_mem_size += VAR_2 - 1;
 VAR_3->qp_mem_size &= ~(VAR_2 - 1);

 VAR_7 = FUNC_3(VAR_8->pcidev, VAR_3->qp_mem_size,
   &VAR_3->hwqp.sq_pbase);
 if (!VAR_7)
  return -VAR_0;
 FUNC_2(VAR_1, "PCI consistent memory for "
   "host descriptor rings located @ %p (pa = 0x%08lX.) size = %u.\n",
   VAR_7, (unsigned long)VAR_3->hwqp.sq_pbase, VAR_3->qp_mem_size);

 FUNC_1(VAR_7, 0, VAR_3->qp_mem_size);

 VAR_3->hwqp.sq_vbase = VAR_7;
 VAR_7 += sizeof(struct nes_hw_qp_wqe) * VAR_5;

 VAR_3->hwqp.rq_vbase = VAR_7;
 VAR_3->hwqp.rq_pbase = VAR_3->hwqp.sq_pbase +
   sizeof(struct nes_hw_qp_wqe) * VAR_5;
 VAR_7 += sizeof(struct nes_hw_qp_wqe) * VAR_6;

 VAR_3->hwqp.q2_vbase = VAR_7;
 VAR_3->hwqp.q2_pbase = VAR_3->hwqp.rq_pbase +
   sizeof(struct nes_hw_qp_wqe) * VAR_6;
 VAR_7 += 256;
 FUNC_1(VAR_3->hwqp.q2_vbase, 0, 256);

 VAR_3->nesqp_context = VAR_7;
 VAR_3->nesqp_context_pbase = VAR_3->hwqp.q2_pbase + 256;
 FUNC_1(VAR_3->nesqp_context, 0, sizeof(*VAR_3->nesqp_context));
 return 0;
}
