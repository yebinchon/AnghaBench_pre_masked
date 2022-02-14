
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int qp_id; } ;
struct nes_qp {TYPE_1__ hwqp; scalar_t__ nesqp_context_pbase; int refcount; } ;
struct nes_hw_cqp_wqe {int * wqe_words; } ;
struct nes_device {int dummy; } ;
struct nes_cqp_request {int waiting; scalar_t__ request_done; int major_code; int minor_code; int waitq; int refcount; struct nes_hw_cqp_wqe cqp_wqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct nes_hw_cqp_wqe*,struct nes_device*) ;
 struct nes_cqp_request* FUNC_5 (struct nes_device*) ;
 int FUNC_6 (struct nes_device*,struct nes_cqp_request*) ;
 int FUNC_7 (struct nes_device*,struct nes_cqp_request*) ;
 int FUNC_8 (int *,size_t,int) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int ,int,int ) ;

int FUNC_11(struct nes_device *VAR_15, struct nes_qp *VAR_16,
  u32 VAR_17, u32 VAR_18, u32 VAR_19)
{
 struct nes_hw_cqp_wqe *VAR_20;


 struct nes_cqp_request *VAR_21;
 int VAR_22;
 u16 VAR_23;

 FUNC_3(VAR_13, "QP%u, refcount=%d\n",
   VAR_16->hwqp.qp_id, FUNC_0(&VAR_16->refcount));

 VAR_21 = FUNC_5(VAR_15);
 if (VAR_21 == ((void*)0)) {
  FUNC_3(VAR_13, "Failed to get a cqp_request.\n");
  return -VAR_1;
 }
 if (VAR_19) {
  VAR_21->waiting = 1;
 } else {
  VAR_21->waiting = 0;
 }
 VAR_20 = &VAR_21->cqp_wqe;

 FUNC_8(VAR_20->wqe_words, VAR_12,
   VAR_3 | VAR_8 | VAR_17);
 FUNC_3(VAR_13, "using next_iwarp_state=%08x, wqe_words=%08x\n",
   VAR_17, FUNC_2(VAR_20->wqe_words[VAR_12]));
 FUNC_4(VAR_20, VAR_15);
 FUNC_8(VAR_20->wqe_words, VAR_11, VAR_16->hwqp.qp_id);
 FUNC_9(VAR_20->wqe_words, VAR_9, (u64)VAR_16->nesqp_context_pbase);


 if (((VAR_17 & VAR_5) == VAR_6) &&
     !(VAR_17 & VAR_7)) {
  VAR_18 = ((VAR_18 + 3) >> 2) << VAR_4;
  FUNC_8(VAR_20->wqe_words, VAR_10, VAR_18);
 }

 FUNC_1(&VAR_21->refcount, 2);
 FUNC_6(VAR_15, VAR_21);


 if (VAR_19) {


  VAR_22 = FUNC_10(VAR_21->waitq, (VAR_21->request_done != 0),
    VAR_14);
  FUNC_3(VAR_13, "Modify iwarp QP%u completed, wait_event_timeout ret=%u, "
    "CQP Major:Minor codes = 0x%04X:0x%04X.\n",
    VAR_16->hwqp.qp_id, VAR_22, VAR_21->major_code, VAR_21->minor_code);
  VAR_23 = VAR_21->major_code;
  if (VAR_23) {
   FUNC_3(VAR_13, "Modify iwarp QP%u failed"
     "CQP Major:Minor codes = 0x%04X:0x%04X, intended next state = 0x%08X.\n",
     VAR_16->hwqp.qp_id, VAR_21->major_code,
     VAR_21->minor_code, VAR_17);
  }

  FUNC_7(VAR_15, VAR_21);

  if (!VAR_22)
   return -VAR_2;
  else if (VAR_23)
   return -VAR_0;
  else
   return 0;
 } else {
  return 0;
 }
}
