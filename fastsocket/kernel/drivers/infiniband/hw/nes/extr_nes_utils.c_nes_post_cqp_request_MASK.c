
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef size_t u32 ;
struct nes_hw_cqp_wqe {int * wqe_words; } ;
struct TYPE_3__ {int sq_tail; int sq_size; int sq_head; int qp_id; int lock; struct nes_hw_cqp_wqe* sq_vbase; } ;
struct nes_device {TYPE_1__ cqp; int cqp_pending_reqs; scalar_t__ regs; } ;
struct TYPE_4__ {int * wqe_words; } ;
struct nes_cqp_request {int list; TYPE_2__ cqp_wqe; int refcount; int waiting; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct nes_hw_cqp_wqe*,TYPE_2__*,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int *,int,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

void FUNC_11(struct nes_device *VAR_8,
     struct nes_cqp_request *VAR_9)
{
 struct nes_hw_cqp_wqe *VAR_10;
 unsigned long VAR_11;
 u32 VAR_12;
 u64 VAR_13;
 u32 VAR_14;
 int VAR_15 = VAR_2;

 FUNC_9(&VAR_8->cqp.lock, VAR_11);

 if (((((VAR_8->cqp.sq_tail+(VAR_8->cqp.sq_size*2))-VAR_8->cqp.sq_head) &
   (VAR_8->cqp.sq_size - 1)) != 1)
   && (FUNC_4(&VAR_8->cqp_pending_reqs))) {
  VAR_12 = VAR_8->cqp.sq_head++;
  VAR_8->cqp.sq_head &= VAR_8->cqp.sq_size-1;
  VAR_10 = &VAR_8->cqp.sq_vbase[VAR_12];
  FUNC_5(VAR_10, &VAR_9->cqp_wqe, sizeof(*VAR_10));
  VAR_14 = FUNC_2(VAR_10->wqe_words[VAR_5]);
  if ((VAR_14 & VAR_1) == VAR_0)
   VAR_15 = VAR_3;
  FUNC_1();
  VAR_13 = (unsigned long)VAR_9;
  FUNC_8(VAR_10->wqe_words, VAR_15, VAR_13);
  FUNC_6(VAR_6, "CQP request (opcode 0x%02X), line 1 = 0x%08X put on CQPs SQ,"
   " request = %p, cqp_head = %u, cqp_tail = %u, cqp_size = %u,"
   " waiting = %d, refcount = %d.\n",
   VAR_14 & VAR_1,
   FUNC_2(VAR_10->wqe_words[VAR_4]), VAR_9,
   VAR_8->cqp.sq_head, VAR_8->cqp.sq_tail, VAR_8->cqp.sq_size,
   VAR_9->waiting, FUNC_0(&VAR_9->refcount));

  FUNC_1();


  FUNC_7(VAR_8->regs+VAR_7, 0x01800000 | VAR_8->cqp.qp_id);

  FUNC_1();
 } else {
  FUNC_6(VAR_6, "CQP request %p (opcode 0x%02X), line 1 = 0x%08X"
    " put on the pending queue.\n",
    VAR_9,
    FUNC_2(VAR_9->cqp_wqe.wqe_words[VAR_5])&0x3f,
    FUNC_2(VAR_9->cqp_wqe.wqe_words[VAR_4]));
  FUNC_3(&VAR_9->list, &VAR_8->cqp_pending_reqs);
 }

 FUNC_10(&VAR_8->cqp.lock, VAR_11);

 return;
}
