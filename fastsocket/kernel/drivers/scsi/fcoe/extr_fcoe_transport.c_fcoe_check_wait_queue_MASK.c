
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ qlen; int lock; } ;
struct fcoe_port {int fcoe_pending_queue_active; scalar_t__ min_queue_depth; scalar_t__ max_queue_depth; TYPE_1__ fcoe_pending_queue; int timer; } ;
struct fc_lport {int qfull; } ;


 struct sk_buff* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_2 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 struct fcoe_port* FUNC_4 (struct fc_lport*) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct fc_lport *VAR_1, struct sk_buff *VAR_2)
{
 struct fcoe_port *VAR_3 = FUNC_4(VAR_1);
 int VAR_4;

 FUNC_6(&VAR_3->fcoe_pending_queue.lock);

 if (VAR_2)
  FUNC_2(&VAR_3->fcoe_pending_queue, VAR_2);

 if (VAR_3->fcoe_pending_queue_active)
  goto out;
 VAR_3->fcoe_pending_queue_active = 1;

 while (VAR_3->fcoe_pending_queue.qlen) {

  VAR_3->fcoe_pending_queue.qlen++;
  VAR_2 = FUNC_0(&VAR_3->fcoe_pending_queue);

  FUNC_7(&VAR_3->fcoe_pending_queue.lock);
  VAR_4 = FUNC_3(VAR_2);
  FUNC_6(&VAR_3->fcoe_pending_queue.lock);

  if (VAR_4) {
   FUNC_1(&VAR_3->fcoe_pending_queue, VAR_2);

   VAR_3->fcoe_pending_queue.qlen--;
   break;
  }

  VAR_3->fcoe_pending_queue.qlen--;
 }

 if (VAR_3->fcoe_pending_queue.qlen < VAR_3->min_queue_depth)
  VAR_1->qfull = 0;
 if (VAR_3->fcoe_pending_queue.qlen && !FUNC_8(&VAR_3->timer))
  FUNC_5(&VAR_3->timer, VAR_0 + 2);
 VAR_3->fcoe_pending_queue_active = 0;
out:
 if (VAR_3->fcoe_pending_queue.qlen > VAR_3->max_queue_depth)
  VAR_1->qfull = 1;
 FUNC_7(&VAR_3->fcoe_pending_queue.lock);
}
