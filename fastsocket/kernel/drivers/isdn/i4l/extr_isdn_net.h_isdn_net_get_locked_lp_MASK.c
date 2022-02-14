
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int xmit_lock; struct TYPE_6__* next; } ;
typedef TYPE_1__ isdn_net_local ;
struct TYPE_7__ {int queue_lock; TYPE_1__* queue; } ;
typedef TYPE_2__ isdn_net_dev ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static __inline__ isdn_net_local * FUNC_5(isdn_net_dev *VAR_0)
{
 unsigned long VAR_1;
 isdn_net_local *VAR_2;

 FUNC_3(&VAR_0->queue_lock, VAR_1);
 VAR_2 = VAR_0->queue;
 while (FUNC_0(VAR_0->queue)) {
  VAR_0->queue = VAR_0->queue->next;
  if (VAR_0->queue == VAR_2) {
   VAR_2 = ((void*)0);
   goto errout;
  }
 }
 VAR_2 = VAR_0->queue;
 VAR_0->queue = VAR_0->queue->next;
 FUNC_4(&VAR_0->queue_lock, VAR_1);
 FUNC_2(&VAR_2->xmit_lock);
 FUNC_1();
 return VAR_2;
errout:
 FUNC_4(&VAR_0->queue_lock, VAR_1);
 return VAR_2;
}
