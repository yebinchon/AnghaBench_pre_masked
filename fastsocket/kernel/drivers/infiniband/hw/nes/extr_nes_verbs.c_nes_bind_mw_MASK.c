
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
struct TYPE_6__ {int sq_head; int sq_tail; int qp_id; struct nes_hw_qp_wqe* sq_vbase; } ;
struct nes_qp {scalar_t__ ibqp_state; int lock; TYPE_3__ hwqp; } ;
struct nes_hw_qp_wqe {scalar_t__* wqe_words; } ;
struct nes_device {scalar_t__ regs; } ;
struct ib_qp {int device; } ;
struct TYPE_5__ {int mw_access_flags; int length; scalar_t__ addr; TYPE_1__* mr; } ;
struct ib_mw_bind {int send_flags; TYPE_2__ bind_info; scalar_t__ wr_id; } ;
struct ib_mw {int rkey; } ;
struct TYPE_4__ {int lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 () ;
 int FUNC_1 (struct nes_hw_qp_wqe*,struct nes_qp*,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 int FUNC_4 (scalar_t__*,int ,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct nes_qp* FUNC_7 (struct ib_qp*) ;
 struct nes_vnic* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct ib_qp *VAR_19, struct ib_mw *VAR_20,
  struct ib_mw_bind *VAR_21)
{
 u64 VAR_22;
 struct nes_vnic *VAR_23 = FUNC_8(VAR_19->device);
 struct nes_device *VAR_24 = VAR_23->nesdev;

 struct nes_qp *VAR_25 = FUNC_7(VAR_19);
 struct nes_hw_qp_wqe *VAR_26;
 unsigned long VAR_27 = 0;
 u32 VAR_28;
 u32 VAR_29 = 0;
 u32 VAR_30;

 if (VAR_25->ibqp_state > VAR_4)
  return -VAR_0;

 FUNC_5(&VAR_25->lock, VAR_27);

 VAR_28 = VAR_25->hwqp.sq_head;
 VAR_30 = VAR_25->hwqp.sq_tail;


 if (((VAR_28 + (2 * VAR_30) - VAR_25->hwqp.sq_tail) % VAR_30) == (VAR_30 - 1)) {
  FUNC_6(&VAR_25->lock, VAR_27);
  return -VAR_1;
 }

 VAR_26 = &VAR_25->hwqp.sq_vbase[VAR_28];

 FUNC_1(VAR_26, VAR_25, VAR_28);
 VAR_22 = VAR_21->wr_id;
 FUNC_4(VAR_26->wqe_words, VAR_14, VAR_22);
 VAR_29 = VAR_13;

 VAR_29 |= VAR_15;

 if (VAR_21->send_flags & VAR_5)
  VAR_29 |= VAR_17;

 if (VAR_21->bind_info.mw_access_flags & VAR_3)
  VAR_29 |= VAR_7;
 if (VAR_21->bind_info.mw_access_flags & VAR_2)
  VAR_29 |= VAR_6;

 FUNC_3(VAR_26->wqe_words, VAR_16, VAR_29);
 FUNC_3(VAR_26->wqe_words, VAR_10,
       VAR_21->bind_info.mr->lkey);
 FUNC_3(VAR_26->wqe_words, VAR_11, VAR_20->rkey);
 FUNC_3(VAR_26->wqe_words, VAR_9,
   VAR_21->bind_info.length);
 VAR_26->wqe_words[VAR_8] = 0;
 VAR_22 = (u64)VAR_21->bind_info.addr;
 FUNC_4(VAR_26->wqe_words, VAR_12, VAR_22);

 VAR_28++;
 if (VAR_28 >= VAR_30)
  VAR_28 = 0;

 VAR_25->hwqp.sq_head = VAR_28;
 FUNC_0();

 FUNC_2(VAR_24->regs+VAR_18,
   (1 << 24) | 0x00800000 | VAR_25->hwqp.qp_id);

 FUNC_6(&VAR_25->lock, VAR_27);

 return 0;
}
