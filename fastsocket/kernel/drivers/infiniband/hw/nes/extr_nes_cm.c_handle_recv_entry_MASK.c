
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nes_timer_entry {scalar_t__ skb; } ;
struct TYPE_2__ {int qp_id; } ;
struct nes_qp {int refcount; TYPE_1__ hwqp; int lock; int ibqp_state; int last_aeq; int hw_tcp_state; scalar_t__ cm_id; } ;
struct nes_cm_node {struct nes_timer_entry* recv_entry; struct iw_cm_id* cm_id; int cm_core; } ;
struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nes_timer_entry*) ;
 int FUNC_2 (struct nes_qp*) ;
 int FUNC_3 (int ,char*,int ,struct iw_cm_id*,int ) ;
 int FUNC_4 (int ,struct nes_cm_node*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct iw_cm_id*) ;

__attribute__((used)) static void FUNC_8(struct nes_cm_node *VAR_4, u32 VAR_5)
{
 struct nes_timer_entry *VAR_6 = VAR_4->recv_entry;
 struct iw_cm_id *VAR_7 = VAR_4->cm_id;
 struct nes_qp *VAR_8;
 unsigned long VAR_9;

 if (!VAR_6)
  return;
 VAR_8 = (struct nes_qp *)VAR_6->skb;
 if (VAR_8) {
  FUNC_5(&VAR_8->lock, VAR_9);
  if (VAR_8->cm_id) {
   FUNC_3(VAR_3, "QP%u: cm_id = %p, "
      "refcount = %d: HIT A "
      "NES_TIMER_TYPE_CLOSE with something "
      "to do!!!\n", VAR_8->hwqp.qp_id, VAR_7,
      FUNC_0(&VAR_8->refcount));
   VAR_8->hw_tcp_state = VAR_2;
   VAR_8->last_aeq = VAR_1;
   VAR_8->ibqp_state = VAR_0;
   FUNC_6(&VAR_8->lock, VAR_9);
   FUNC_2(VAR_8);
  } else {
   FUNC_6(&VAR_8->lock, VAR_9);
   FUNC_3(VAR_3, "QP%u: cm_id = %p, "
      "refcount = %d: HIT A "
      "NES_TIMER_TYPE_CLOSE with nothing "
      "to do!!!\n", VAR_8->hwqp.qp_id, VAR_7,
      FUNC_0(&VAR_8->refcount));
  }
 } else if (VAR_5) {

  FUNC_4(VAR_4->cm_core, VAR_4);
 }
 if (VAR_4->cm_id)
  VAR_7->rem_ref(VAR_7);
 FUNC_1(VAR_6);
 VAR_4->recv_entry = ((void*)0);
}
