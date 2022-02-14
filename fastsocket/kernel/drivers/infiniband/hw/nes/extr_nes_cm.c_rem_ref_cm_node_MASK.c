
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nes_qp {int ibqp; int * cm_node; } ;
struct nes_cm_node {struct nes_qp* nesqp; TYPE_4__* nesvnic; int loc_port; scalar_t__ apbvt_set; TYPE_5__* listener; scalar_t__ recv_entry; int send_entry; scalar_t__ accept_pend; int accelerated; TYPE_1__* cm_core; int list; int ref_count; } ;
struct nes_cm_core {int node_cnt; int ht_node_cnt; } ;
struct TYPE_10__ {int pend_accepts_cnt; } ;
struct TYPE_9__ {TYPE_3__* nesdev; } ;
struct TYPE_8__ {TYPE_2__* pcidev; } ;
struct TYPE_7__ {int devfn; } ;
struct TYPE_6__ {int ht_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (struct nes_cm_node*,int ) ;
 int FUNC_8 (struct nes_cm_node*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct nes_cm_core*,TYPE_5__*,int ) ;
 int FUNC_11 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_15(struct nes_cm_core *VAR_3,
      struct nes_cm_node *VAR_4)
{
 unsigned long VAR_5;
 struct nes_qp *VAR_6;

 if (!VAR_4)
  return -VAR_0;

 FUNC_13(&VAR_4->cm_core->ht_lock, VAR_5);
 if (FUNC_4(&VAR_4->ref_count)) {
  FUNC_14(&VAR_4->cm_core->ht_lock, VAR_5);
  return 0;
 }
 FUNC_9(&VAR_4->list);
 FUNC_3(&VAR_3->ht_node_cnt);
 FUNC_14(&VAR_4->cm_core->ht_lock, VAR_5);


 if (!VAR_4->accelerated && VAR_4->accept_pend) {
  FUNC_0(!VAR_4->listener);
  FUNC_3(&VAR_4->listener->pend_accepts_cnt);
  FUNC_0(FUNC_6(&VAR_4->listener->pend_accepts_cnt) < 0);
 }
 FUNC_2(VAR_4->send_entry);
 if (VAR_4->recv_entry)
  FUNC_7(VAR_4, 0);
 if (VAR_4->listener) {
  FUNC_10(VAR_3, VAR_4->listener, 0);
 } else {
  if (VAR_4->apbvt_set && VAR_4->nesvnic) {
   FUNC_11(VAR_4->nesvnic, VAR_4->loc_port,
      FUNC_1(
       VAR_4->nesvnic->nesdev->pcidev->devfn),
      VAR_1);
  }
 }

 FUNC_3(&VAR_3->node_cnt);
 FUNC_5(&VAR_2);
 VAR_6 = VAR_4->nesqp;
 if (VAR_6) {
  VAR_6->cm_node = ((void*)0);
  FUNC_12(&VAR_6->ibqp);
  VAR_4->nesqp = ((void*)0);
 }

 FUNC_8(VAR_4);
 return 0;
}
