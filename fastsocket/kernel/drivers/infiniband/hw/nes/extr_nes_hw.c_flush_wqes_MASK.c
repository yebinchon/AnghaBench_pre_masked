
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int qp_id; } ;
struct nes_qp {int term_sq_flush_code; int term_rq_flush_code; TYPE_1__ hwqp; } ;
struct nes_hw_cqp_wqe {void** wqe_words; } ;
struct nes_device {int dummy; } ;
struct nes_cqp_request {int waiting; scalar_t__ request_done; int minor_code; int major_code; int waitq; struct nes_hw_cqp_wqe cqp_wqe; int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct nes_hw_cqp_wqe*,struct nes_device*) ;
 struct nes_cqp_request* FUNC_4 (struct nes_device*) ;
 int FUNC_5 (struct nes_device*,struct nes_cqp_request*) ;
 int FUNC_6 (struct nes_device*,struct nes_cqp_request*) ;
 int FUNC_7 (int ,int,int ) ;

void FUNC_8(struct nes_device *VAR_13, struct nes_qp *VAR_14,
  u32 VAR_15, u32 VAR_16)
{
 struct nes_cqp_request *VAR_17;
 struct nes_hw_cqp_wqe *VAR_18;
 u32 VAR_19 = (VAR_11 << 16) | VAR_12;
 u32 VAR_20 = (VAR_11 << 16) | VAR_12;
 int VAR_21;

 VAR_17 = FUNC_4(VAR_13);
 if (VAR_17 == ((void*)0)) {
  FUNC_2(VAR_9, "Failed to get a cqp_request.\n");
  return;
 }
 if (VAR_16) {
  VAR_17->waiting = 1;
  FUNC_0(&VAR_17->refcount, 2);
 } else {
  VAR_17->waiting = 0;
 }
 VAR_18 = &VAR_17->cqp_wqe;
 FUNC_3(VAR_18, VAR_13);


 if ((VAR_14->term_sq_flush_code) && (VAR_15 & VAR_3)) {
  VAR_15 |= VAR_1;
  VAR_19 = (VAR_0 << 16) | VAR_14->term_sq_flush_code;
  VAR_14->term_sq_flush_code = 0;
 }

 if ((VAR_14->term_rq_flush_code) && (VAR_15 & VAR_2)) {
  VAR_15 |= VAR_1;
  VAR_20 = (VAR_0 << 16) | VAR_14->term_rq_flush_code;
  VAR_14->term_rq_flush_code = 0;
 }

 if (VAR_15 & VAR_1) {
  VAR_18->wqe_words[VAR_6] = FUNC_1(VAR_19);
  VAR_18->wqe_words[VAR_5] = FUNC_1(VAR_20);
 }

 VAR_18->wqe_words[VAR_8] =
   FUNC_1(VAR_4 | VAR_15);
 VAR_18->wqe_words[VAR_7] = FUNC_1(VAR_14->hwqp.qp_id);

 FUNC_5(VAR_13, VAR_17);

 if (VAR_16) {

  VAR_21 = FUNC_7(VAR_17->waitq, (VAR_17->request_done != 0),
    VAR_10);
  FUNC_2(VAR_9, "Flush SQ QP WQEs completed, ret=%u,"
    " CQP Major:Minor codes = 0x%04X:0x%04X\n",
    VAR_21, VAR_17->major_code, VAR_17->minor_code);
  FUNC_6(VAR_13, VAR_17);
 }
}
