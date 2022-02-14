
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nes_ucontext {size_t first_free_wq; int ** mmap_nesqp; int allocated_wqs; } ;
struct TYPE_3__ {int qp_id; } ;
struct nes_qp {int destroyed; scalar_t__ ibqp_state; size_t mmap_sq_db_index; scalar_t__ nesscq; scalar_t__ nesrcq; int ibqp; int page; scalar_t__ sq_kmapped; scalar_t__ pbl_pbase; scalar_t__ user_mode; int refcount; TYPE_1__ hwqp; struct iw_cm_id* cm_id; } ;
struct iw_cm_id {int (* event_handler ) (struct iw_cm_id*,struct iw_cm_event*) ;int (* rem_ref ) (struct iw_cm_id*) ;int remote_addr; int local_addr; } ;
struct iw_cm_event {scalar_t__ private_data_len; int * private_data; int remote_addr; int local_addr; int status; int event; } ;
struct ib_qp_attr {int qp_state; } ;
struct ib_qp {TYPE_2__* uobject; } ;
struct TYPE_4__ {scalar_t__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nes_qp*,scalar_t__) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (int *,struct ib_qp_attr*,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct iw_cm_id*) ;
 int FUNC_9 (struct iw_cm_id*,struct iw_cm_event*) ;
 int VAR_8 ;
 struct nes_qp* FUNC_10 (struct ib_qp*) ;
 struct nes_ucontext* FUNC_11 (scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct ib_qp *VAR_9)
{
 struct nes_qp *VAR_10 = FUNC_10(VAR_9);
 struct nes_ucontext *VAR_11;
 struct ib_qp_attr VAR_12;
 struct iw_cm_id *VAR_13;
 struct iw_cm_event VAR_14;
 int VAR_15 = 0;

 FUNC_0(&VAR_8);
 VAR_10->destroyed = 1;


 if (VAR_10->ibqp_state >= VAR_2 && VAR_10->ibqp_state <= VAR_4) {

  VAR_12.qp_state = VAR_1;
  FUNC_6(&VAR_10->ibqp, &VAR_12, VAR_5, ((void*)0));
 }

 if (((VAR_10->ibqp_state == VAR_2) ||
   (VAR_10->ibqp_state == VAR_3)) && (VAR_10->cm_id)) {
  VAR_13 = VAR_10->cm_id;
  VAR_14.event = VAR_6;
  VAR_14.status = -VAR_0;
  VAR_14.local_addr = VAR_13->local_addr;
  VAR_14.remote_addr = VAR_13->remote_addr;
  VAR_14.private_data = ((void*)0);
  VAR_14.private_data_len = 0;

  FUNC_5(VAR_7, "Generating a CM Timeout Event for "
    "QP%u. cm_id = %p, refcount = %u. \n",
    VAR_10->hwqp.qp_id, VAR_13, FUNC_1(&VAR_10->refcount));

  VAR_13->rem_ref(VAR_13);
  VAR_15 = VAR_13->event_handler(VAR_13, &VAR_14);
  if (VAR_15)
   FUNC_5(VAR_7, "OFA CM event_handler returned, ret=%d\n", VAR_15);
 }

 if (VAR_10->user_mode) {
  if ((VAR_9->uobject)&&(VAR_9->uobject->context)) {
   VAR_11 = FUNC_11(VAR_9->uobject->context);
   FUNC_2(VAR_10->mmap_sq_db_index, VAR_11->allocated_wqs);
   VAR_11->mmap_nesqp[VAR_10->mmap_sq_db_index] = ((void*)0);
   if (VAR_11->first_free_wq > VAR_10->mmap_sq_db_index) {
    VAR_11->first_free_wq = VAR_10->mmap_sq_db_index;
   }
  }
  if (VAR_10->pbl_pbase && VAR_10->sq_kmapped) {
   VAR_10->sq_kmapped = 0;
   FUNC_3(VAR_10->page);
  }
 } else {

  if (VAR_10->nesscq)
   FUNC_4(VAR_10, VAR_10->nesscq);

  if ((VAR_10->nesrcq) && (VAR_10->nesrcq != VAR_10->nesscq))
   FUNC_4(VAR_10, VAR_10->nesrcq);
 }
 FUNC_7(&VAR_10->ibqp);
 return 0;
}
