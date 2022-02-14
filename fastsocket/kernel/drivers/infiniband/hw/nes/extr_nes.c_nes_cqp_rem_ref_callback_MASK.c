
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t qp_id; int sq_pbase; int * sq_vbase; int q2_pbase; int * q2_vbase; } ;
struct nes_qp {int qp_mem_size; int allocated_buffer; TYPE_1__ hwqp; int * pbl_vbase; int pbl_pbase; } ;
struct nes_device {int pcidev; struct nes_adapter* nesadapter; } ;
struct nes_cqp_request {struct nes_qp* cqp_callback_pointer; } ;
struct nes_adapter {int ** qp_table; int allocated_qps; int pbl_lock; int free_256pbl; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nes_adapter*,int ,size_t) ;
 int FUNC_3 (int ,int,int *,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct nes_device *VAR_2, struct nes_cqp_request *VAR_3)
{
 unsigned long VAR_4;
 struct nes_qp *VAR_5 = VAR_3->cqp_callback_pointer;
 struct nes_adapter *VAR_6 = VAR_2->nesadapter;

 FUNC_0(&VAR_1);



 if (VAR_5->pbl_vbase) {
  FUNC_3(VAR_2->pcidev, VAR_5->qp_mem_size,
    VAR_5->hwqp.q2_vbase, VAR_5->hwqp.q2_pbase);
  FUNC_4(&VAR_6->pbl_lock, VAR_4);
  VAR_6->free_256pbl++;
  FUNC_5(&VAR_6->pbl_lock, VAR_4);
  FUNC_3(VAR_2->pcidev, 256, VAR_5->pbl_vbase, VAR_5->pbl_pbase);
  VAR_5->pbl_vbase = ((void*)0);

 } else {
  FUNC_3(VAR_2->pcidev, VAR_5->qp_mem_size,
    VAR_5->hwqp.sq_vbase, VAR_5->hwqp.sq_pbase);
 }
 FUNC_2(VAR_6, VAR_6->allocated_qps, VAR_5->hwqp.qp_id);

 VAR_6->qp_table[VAR_5->hwqp.qp_id-VAR_0] = ((void*)0);
 FUNC_1(VAR_5->allocated_buffer);

}
