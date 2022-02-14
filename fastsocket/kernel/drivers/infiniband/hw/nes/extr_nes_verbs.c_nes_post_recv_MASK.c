
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nes_vnic {struct nes_device* nesdev; } ;
struct TYPE_6__ {int rq_size; int rq_head; int rq_tail; int qp_id; struct nes_hw_qp_wqe* rq_vbase; } ;
struct nes_qp {scalar_t__ ibqp_state; int lock; TYPE_3__ hwqp; scalar_t__ term_flags; } ;
struct nes_hw_qp_wqe {int wqe_words; } ;
struct nes_device {scalar_t__ regs; TYPE_1__* nesadapter; } ;
struct ib_recv_wr {int num_sge; struct ib_recv_wr* next; TYPE_2__* sg_list; scalar_t__ wr_id; } ;
struct ib_qp {int device; } ;
struct TYPE_5__ {int length; int lkey; scalar_t__ addr; } ;
struct TYPE_4__ {int max_sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct nes_hw_qp_wqe*,struct nes_qp*,int) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int ,scalar_t__,int) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct nes_qp* FUNC_9 (struct ib_qp*) ;
 struct nes_vnic* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct ib_qp *VAR_10, struct ib_recv_wr *VAR_11,
  struct ib_recv_wr **VAR_12)
{
 u64 VAR_13;
 unsigned long VAR_14 = 0;
 struct nes_vnic *VAR_15 = FUNC_10(VAR_10->device);
 struct nes_device *VAR_16 = VAR_15->nesdev;
 struct nes_qp *VAR_17 = FUNC_9(VAR_10);
 struct nes_hw_qp_wqe *VAR_18;
 int VAR_19 = 0;
 int VAR_20;
 u32 VAR_21 = VAR_17->hwqp.rq_size;
 u32 VAR_22;
 u32 VAR_23 = 0;
 u32 VAR_24;
 u32 VAR_25;

 if (VAR_17->ibqp_state > VAR_2) {
  VAR_19 = -VAR_0;
  goto out;
 }

 FUNC_7(&VAR_17->lock, VAR_14);

 VAR_22 = VAR_17->hwqp.rq_head;

 while (VAR_11) {

  if (VAR_17->term_flags) {
   VAR_19 = -VAR_0;
   break;
  }

  if (VAR_11->num_sge > VAR_16->nesadapter->max_sge) {
   VAR_19 = -VAR_0;
   break;
  }

  if (((VAR_22 + (2 * VAR_21) - VAR_17->hwqp.rq_tail) % VAR_21) == (VAR_21 - 1)) {
   VAR_19 = -VAR_1;
   break;
  }

  FUNC_2(VAR_3, "ibwr sge count = %u.\n", VAR_11->num_sge);
  VAR_18 = &VAR_17->hwqp.rq_vbase[VAR_22];



  FUNC_3(VAR_18, VAR_17, VAR_22);
  VAR_13 = (u64)(VAR_11->wr_id);
  FUNC_6(VAR_18->wqe_words, VAR_8,
     VAR_13);
  VAR_25 = 0;
  for (VAR_20=0; VAR_20 < VAR_11->num_sge; VAR_20++) {
   FUNC_6(VAR_18->wqe_words, VAR_4+(VAR_20*4),
     VAR_11->sg_list[VAR_20].addr);
   FUNC_5(VAR_18->wqe_words, VAR_5+(VAR_20*4),
     VAR_11->sg_list[VAR_20].length);
   FUNC_5(VAR_18->wqe_words,VAR_6+(VAR_20*4),
     VAR_11->sg_list[VAR_20].lkey);

   VAR_25 += VAR_11->sg_list[VAR_20].length;
  }
  FUNC_5(VAR_18->wqe_words, VAR_7,
     VAR_25);

  VAR_11 = VAR_11->next;
  VAR_22++;
  VAR_23++;
  if (VAR_22 >= VAR_21)
   VAR_22 = 0;
 }

 VAR_17->hwqp.rq_head = VAR_22;
 FUNC_0();
 while (VAR_23) {
  VAR_24 = FUNC_1(VAR_23, ((u32)255));
  VAR_23 -= VAR_24;
  FUNC_4(VAR_16->regs+VAR_9, (VAR_24<<24) | VAR_17->hwqp.qp_id);
 }

 FUNC_8(&VAR_17->lock, VAR_14);

out:
 if (VAR_19)
  *VAR_12 = VAR_11;
 return VAR_19;
}
