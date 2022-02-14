
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* netdev; struct TYPE_7__* last; struct TYPE_7__* next; scalar_t__ master; } ;
typedef TYPE_2__ isdn_net_local ;
struct TYPE_6__ {int queue_lock; TYPE_2__* local; TYPE_2__* queue; } ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static __inline__ void FUNC_3(isdn_net_local *VAR_0)
{
 isdn_net_local *VAR_1 = VAR_0;
 unsigned long VAR_2;

 if (VAR_0->master)
  VAR_1 = FUNC_0(VAR_0);



 FUNC_1(&VAR_1->netdev->queue_lock, VAR_2);
 VAR_0->last->next = VAR_0->next;
 VAR_0->next->last = VAR_0->last;
 if (VAR_1->netdev->queue == VAR_0) {
  VAR_1->netdev->queue = VAR_0->next;
  if (VAR_0->next == VAR_0) {
   VAR_1->netdev->queue = VAR_1->netdev->local;
  }
 }
 VAR_0->next = VAR_0->last = VAR_0;


 FUNC_2(&VAR_1->netdev->queue_lock, VAR_2);
}
