
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* last; } ;
typedef TYPE_1__ isdn_net_local ;
struct TYPE_6__ {int queue_lock; TYPE_1__* queue; } ;
typedef TYPE_2__ isdn_net_dev ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static __inline__ void FUNC_2(isdn_net_dev *VAR_0, isdn_net_local *VAR_1)
{
 isdn_net_local *VAR_2;
 unsigned long VAR_3;

 FUNC_0(&VAR_0->queue_lock, VAR_3);

 VAR_2 = VAR_0->queue;


 VAR_1->last = VAR_2->last;
 VAR_2->last->next = VAR_1;
 VAR_2->last = VAR_1;
 VAR_1->next = VAR_2;
 VAR_0->queue = VAR_1;

 FUNC_1(&VAR_0->queue_lock, VAR_3);
}
