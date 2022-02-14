
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nes_vnic {struct nes_device* nesdev; } ;
struct TYPE_8__ {int sq_tail; int sq_size; int sq_head; int rq_tail; int rq_size; int rq_head; TYPE_2__* rq_vbase; TYPE_1__* sq_vbase; int qp_id; } ;
struct nes_qp {TYPE_3__ hwqp; scalar_t__ skip_lsmm; int ibqp; } ;
struct nes_hw_cqe {scalar_t__* cqe_words; } ;
struct nes_device {scalar_t__ regs; TYPE_4__* nesadapter; } ;
struct TYPE_10__ {int cq_head; int cq_size; int cq_number; struct nes_hw_cqe* cq_vbase; } ;
struct nes_cq {int polled_completions; int lock; TYPE_5__ hw_cq; } ;
struct ib_wc {int status; int byte_len; int wr_id; int opcode; int src_qp; int * qp; } ;
struct ib_cq {int device; } ;
struct TYPE_9__ {int max_qp_wr; } ;
struct TYPE_7__ {scalar_t__* wqe_words; } ;
struct TYPE_6__ {scalar_t__* wqe_words; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 int VAR_27 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ib_wc*,int ,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct nes_cq* FUNC_8 (struct ib_cq*) ;
 struct nes_vnic* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct ib_cq *VAR_28, int VAR_29, struct ib_wc *VAR_30)
{
 u64 VAR_31;
 u64 VAR_32;
 unsigned long VAR_33 = 0;
 struct nes_vnic *VAR_34 = FUNC_9(VAR_28->device);
 struct nes_device *VAR_35 = VAR_34->nesdev;
 struct nes_cq *VAR_36 = FUNC_8(VAR_28);
 struct nes_qp *VAR_37;
 struct nes_hw_cqe VAR_38;
 u32 VAR_39;
 u32 VAR_40 = 0;
 u32 VAR_41;
 u32 VAR_42 = 0;
 u32 VAR_43;
 u32 VAR_44;
 u32 VAR_45 = 1;
 u32 VAR_46;

 FUNC_3(VAR_16, "\n");

 FUNC_6(&VAR_36->lock, VAR_33);

 VAR_39 = VAR_36->hw_cq.cq_head;
 VAR_41 = VAR_36->hw_cq.cq_size;

 while (VAR_42 < VAR_29) {
  if ((FUNC_1(VAR_36->hw_cq.cq_vbase[VAR_39].cqe_words[VAR_12]) &
    VAR_15) == 0)
   break;





  FUNC_5();

  VAR_38 = VAR_36->hw_cq.cq_vbase[VAR_39];
  VAR_44 = FUNC_1(VAR_38.cqe_words[VAR_10]);
  VAR_43 = VAR_44 & (VAR_35->nesadapter->max_qp_wr - 1);
  VAR_44 &= ~(VAR_27-1);

  VAR_31 = (((u64)(FUNC_1(VAR_38.cqe_words[VAR_9])))<<32) |
    ((u64)VAR_44);

  if (VAR_31) {
   VAR_37 = (struct nes_qp *)(unsigned long)VAR_31;
   FUNC_2(VAR_30, 0, sizeof *VAR_30);
   if (VAR_38.cqe_words[VAR_11] == 0) {
    VAR_30->status = VAR_6;
   } else {
    VAR_46 = FUNC_1(VAR_38.cqe_words[VAR_11]);
    if (VAR_17 == (VAR_46 >> 16)) {
     VAR_30->status = VAR_46 & 0x0000ffff;


     VAR_36->hw_cq.cq_vbase[VAR_39].cqe_words[VAR_11] =
      FUNC_0((VAR_18 << 16) |
           VAR_19);
    } else
     VAR_30->status = VAR_7;
   }

   VAR_30->qp = &VAR_37->ibqp;
   VAR_30->src_qp = VAR_37->hwqp.qp_id;

   if (FUNC_1(VAR_38.cqe_words[VAR_12]) & VAR_14) {
    if (VAR_37->skip_lsmm) {
     VAR_37->skip_lsmm = 0;
     VAR_37->hwqp.sq_tail++;
    }


    VAR_32 = (((u64)(FUNC_0((u32)VAR_37->hwqp.sq_vbase[VAR_43].
      wqe_words[VAR_22]))) << 32) |
      ((u64)(FUNC_0((u32)VAR_37->hwqp.sq_vbase[VAR_43].
      wqe_words[VAR_23])));
    VAR_30->byte_len = FUNC_1(VAR_37->hwqp.sq_vbase[VAR_43].
      wqe_words[VAR_26]);

    switch (FUNC_1(VAR_37->hwqp.sq_vbase[VAR_43].
      wqe_words[VAR_24]) & 0x3f) {
     case 132:
      FUNC_3(VAR_16, "Operation = RDMA WRITE.\n");
      VAR_30->opcode = VAR_3;
      break;
     case 133:
      FUNC_3(VAR_16, "Operation = RDMA READ.\n");
      VAR_30->opcode = VAR_2;
      VAR_30->byte_len = FUNC_1(VAR_37->hwqp.sq_vbase[VAR_43].
        wqe_words[VAR_25]);
      break;
     case 130:
     case 128:
     case 131:
     case 129:
      FUNC_3(VAR_16, "Operation = Send.\n");
      VAR_30->opcode = VAR_5;
      break;
     case 134:
      VAR_30->opcode = VAR_1;
      break;
     case 135:
      VAR_30->opcode = VAR_0;
      break;
    }

    VAR_37->hwqp.sq_tail = (VAR_43+1)&(VAR_37->hwqp.sq_size - 1);
    if ((VAR_30->status != VAR_6) && (VAR_37->hwqp.sq_tail != VAR_37->hwqp.sq_head)) {
     VAR_45 = 0;
     VAR_40 = VAR_37->hwqp.sq_tail;
    }
   } else {

    VAR_30->byte_len = FUNC_1(VAR_38.cqe_words[VAR_13]);
    VAR_32 = ((u64)(FUNC_1(VAR_37->hwqp.rq_vbase[VAR_43].wqe_words[VAR_21]))) |
     ((u64)(FUNC_1(VAR_37->hwqp.rq_vbase[VAR_43].wqe_words[VAR_20]))<<32);
     VAR_30->opcode = VAR_4;

    VAR_37->hwqp.rq_tail = (VAR_43+1)&(VAR_37->hwqp.rq_size - 1);
    if ((VAR_30->status != VAR_6) && (VAR_37->hwqp.rq_tail != VAR_37->hwqp.rq_head)) {
     VAR_45 = 0;
     VAR_40 = VAR_37->hwqp.rq_tail;
    }
   }

   VAR_30->wr_id = VAR_32;
   VAR_30++;
   VAR_42++;
  }

  if (VAR_45) {
   VAR_36->hw_cq.cq_vbase[VAR_39].cqe_words[VAR_12] = 0;
   if (++VAR_39 >= VAR_41)
    VAR_39 = 0;
   VAR_36->polled_completions++;

   if ((VAR_36->polled_completions > (VAR_41 / 2)) ||
     (VAR_36->polled_completions == 255)) {
    FUNC_3(VAR_16, "CQ%u Issuing CQE Allocate since more than half of cqes"
     " are pending %u of %u.\n",
     VAR_36->hw_cq.cq_number, VAR_36->polled_completions, VAR_41);
    FUNC_4(VAR_35->regs+VAR_8,
     VAR_36->hw_cq.cq_number | (VAR_36->polled_completions << 16));
    VAR_36->polled_completions = 0;
   }
  } else {

   VAR_43 = FUNC_1(VAR_38.cqe_words[VAR_10]);
   VAR_43 = (VAR_43 & (~(VAR_35->nesadapter->max_qp_wr - 1))) | VAR_40;
   VAR_36->hw_cq.cq_vbase[VAR_39].cqe_words[VAR_10] =
    FUNC_0(VAR_43);
   VAR_45 = 1;
  }
 }

 if (VAR_36->polled_completions) {
  FUNC_4(VAR_35->regs+VAR_8,
    VAR_36->hw_cq.cq_number | (VAR_36->polled_completions << 16));
  VAR_36->polled_completions = 0;
 }

 VAR_36->hw_cq.cq_head = VAR_39;
 FUNC_3(VAR_16, "Reporting %u completions for CQ%u.\n",
   VAR_42, VAR_36->hw_cq.cq_number);

 FUNC_7(&VAR_36->lock, VAR_33);

 return VAR_42;
}
