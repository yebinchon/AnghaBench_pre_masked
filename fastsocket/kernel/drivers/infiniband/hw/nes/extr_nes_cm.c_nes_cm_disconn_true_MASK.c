
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct nes_vnic {int nesdev; } ;
struct TYPE_6__ {int qp_id; int sq_tail; int sq_head; } ;
struct TYPE_5__ {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct nes_qp {scalar_t__ hw_tcp_state; scalar_t__ ibqp_state; scalar_t__ last_aeq; int flush_issued; scalar_t__ destroyed; scalar_t__ hw_iwarp_state; int refcount; TYPE_3__ hwqp; TYPE_2__ ibqp; int terminate_eventtype; scalar_t__ term_flags; int lock; struct iw_cm_id* cm_id; int terminate_timer; } ;
struct iw_cm_id {int (* event_handler ) (struct iw_cm_id*,struct iw_cm_event*) ;int (* rem_ref ) (struct iw_cm_id*) ;int remote_addr; int local_addr; struct nes_qp* provider_data; } ;
struct iw_cm_event {int status; scalar_t__ private_data_len; int * private_data; int remote_addr; int local_addr; struct nes_qp* provider_data; int event; } ;
struct TYPE_4__ {TYPE_2__* qp; } ;
struct ib_event {TYPE_1__ element; int event; int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct nes_qp*,int ,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct nes_qp*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct ib_event*,int ) ;
 int FUNC_9 (struct iw_cm_id*,struct iw_cm_event*) ;
 int FUNC_10 (struct iw_cm_id*,struct iw_cm_event*) ;
 int FUNC_11 (struct iw_cm_id*) ;
 struct nes_vnic* FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct nes_qp *VAR_15)
{
 unsigned long VAR_16;
 int VAR_17 = 0;
 struct iw_cm_id *VAR_18;
 struct iw_cm_event VAR_19;
 struct nes_vnic *VAR_20;
 u16 VAR_21;
 u8 VAR_22;
 u8 VAR_23;
 int VAR_24 = 0;
 int VAR_25 = 0;
 int VAR_26 = 0;
 int VAR_27 = 0;
 u32 VAR_28 = VAR_10;
 struct ib_event VAR_29;

 if (!VAR_15) {
  FUNC_4(VAR_12, "disconnect_worker nesqp is NULL\n");
  return -1;
 }

 FUNC_6(&VAR_15->lock, VAR_16);
 VAR_18 = VAR_15->cm_id;

 if (!VAR_18) {
  FUNC_4(VAR_12, "QP%u disconnect_worker cmid is NULL\n",
     VAR_15->hwqp.qp_id);
  FUNC_7(&VAR_15->lock, VAR_16);
  return -1;
 }

 VAR_20 = FUNC_12(VAR_15->ibqp.device);
 FUNC_4(VAR_12, "Disconnecting QP%u\n", VAR_15->hwqp.qp_id);

 VAR_22 = VAR_15->hw_tcp_state;
 VAR_23 = VAR_15->ibqp_state;
 VAR_21 = VAR_15->last_aeq;

 if (VAR_15->term_flags) {
  VAR_25 = 1;
  VAR_26 = 1;
  VAR_15->cm_id = ((void*)0);
  FUNC_2(&VAR_15->terminate_timer);
  if (VAR_15->flush_issued == 0) {
   VAR_15->flush_issued = 1;
   VAR_27 = 1;
  }
 } else if ((VAR_22 == VAR_8) ||
   ((VAR_23 == VAR_1) &&
   (VAR_21 == VAR_4))) {
  VAR_25 = 1;
  if (VAR_21 == VAR_4)
   VAR_24 = -VAR_0;
 }

 if (((VAR_22 == VAR_7) ||
   (VAR_22 == VAR_9) ||
   (VAR_21 == VAR_5) ||
   (VAR_21 == VAR_4))) {
  VAR_26 = 1;
  VAR_15->cm_id = ((void*)0);
  if (VAR_15->flush_issued == 0) {
   VAR_15->flush_issued = 1;
   VAR_27 = 1;
  }
 }

 FUNC_7(&VAR_15->lock, VAR_16);

 if ((VAR_27) && (VAR_15->destroyed == 0)) {

  if (VAR_15->hw_iwarp_state >= VAR_6)
   VAR_28 |= VAR_11;
  FUNC_3(VAR_20->nesdev, VAR_15, VAR_28, 1);

  if (VAR_15->term_flags) {
   VAR_29.device = VAR_15->ibqp.device;
   VAR_29.event = VAR_15->terminate_eventtype;
   VAR_29.element.qp = &VAR_15->ibqp;
   if (VAR_15->ibqp.event_handler)
    VAR_15->ibqp.event_handler(&VAR_29, VAR_15->ibqp.qp_context);
  }
 }

 if ((VAR_18) && (VAR_18->event_handler)) {
  if (VAR_25) {
   FUNC_0(&VAR_14);
   VAR_19.event = VAR_3;
   VAR_19.status = VAR_24;
   VAR_19.local_addr = VAR_18->local_addr;
   VAR_19.remote_addr = VAR_18->remote_addr;
   VAR_19.private_data = ((void*)0);
   VAR_19.private_data_len = 0;

   FUNC_4(VAR_12, "Generating a CM Disconnect Event"
      " for  QP%u, SQ Head = %u, SQ Tail = %u. "
      "cm_id = %p, refcount = %u.\n",
      VAR_15->hwqp.qp_id, VAR_15->hwqp.sq_head,
      VAR_15->hwqp.sq_tail, VAR_18,
      FUNC_1(&VAR_15->refcount));

   VAR_17 = VAR_18->event_handler(VAR_18, &VAR_19);
   if (VAR_17)
    FUNC_4(VAR_12, "OFA CM event_handler "
       "returned, ret=%d\n", VAR_17);
  }

  if (VAR_26) {
   FUNC_0(&VAR_13);
   FUNC_5(VAR_15, 1);

   VAR_18->provider_data = VAR_15;

   VAR_19.event = VAR_2;
   VAR_19.status = 0;
   VAR_19.provider_data = VAR_18->provider_data;
   VAR_19.local_addr = VAR_18->local_addr;
   VAR_19.remote_addr = VAR_18->remote_addr;
   VAR_19.private_data = ((void*)0);
   VAR_19.private_data_len = 0;

   VAR_17 = VAR_18->event_handler(VAR_18, &VAR_19);
   if (VAR_17)
    FUNC_4(VAR_12, "OFA CM event_handler returned, ret=%d\n", VAR_17);

   VAR_18->rem_ref(VAR_18);
  }
 }

 return 0;
}
