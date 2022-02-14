
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int q2_pbase; int * q2_vbase; int sq_pbase; int * sq_vbase; } ;
struct nes_qp {int qp_mem_size; int page; scalar_t__ sq_kmapped; int * pbl_vbase; int pbl_pbase; TYPE_1__ hwqp; } ;
struct nes_device {int pcidev; struct nes_adapter* nesadapter; } ;
struct nes_adapter {int pbl_lock; int free_256pbl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int *,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct nes_device *VAR_0,
  struct nes_qp *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 struct nes_adapter *VAR_4 = VAR_0->nesadapter;
 if (!VAR_2) {
  FUNC_1(VAR_0->pcidev, VAR_1->qp_mem_size,
    VAR_1->hwqp.sq_vbase, VAR_1->hwqp.sq_pbase);
 }else {
  FUNC_2(&VAR_4->pbl_lock, VAR_3);
  VAR_4->free_256pbl++;
  FUNC_3(&VAR_4->pbl_lock, VAR_3);
  FUNC_1(VAR_0->pcidev, VAR_1->qp_mem_size, VAR_1->hwqp.q2_vbase, VAR_1->hwqp.q2_pbase);
  FUNC_1(VAR_0->pcidev, 256, VAR_1->pbl_vbase, VAR_1->pbl_pbase );
  VAR_1->pbl_vbase = ((void*)0);
  if (VAR_1->sq_kmapped) {
   VAR_1->sq_kmapped = 0;
   FUNC_0(VAR_1->page);
  }
 }
}
