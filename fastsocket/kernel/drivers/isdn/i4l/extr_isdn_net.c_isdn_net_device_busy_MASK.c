
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; TYPE_2__* netdev; scalar_t__ master; } ;
typedef TYPE_1__ isdn_net_local ;
struct TYPE_8__ {int queue_lock; } ;
typedef TYPE_2__ isdn_net_dev ;
struct TYPE_9__ {TYPE_2__* netdev; } ;


 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static __inline__ int FUNC_4(isdn_net_local *VAR_0)
{
 isdn_net_local *VAR_1;
 isdn_net_dev *VAR_2;
 unsigned long VAR_3;

 if (!FUNC_1(VAR_0))
  return 0;

 if (VAR_0->master)
  VAR_2 = FUNC_0(VAR_0)->netdev;
 else
  VAR_2 = VAR_0->netdev;

 FUNC_2(&VAR_2->queue_lock, VAR_3);
 VAR_1 = VAR_0->next;
 while (VAR_1 != VAR_0) {
  if (!FUNC_1(VAR_1)) {
   FUNC_3(&VAR_2->queue_lock, VAR_3);
   return 0;
  }
  VAR_1 = VAR_1->next;
 }
 FUNC_3(&VAR_2->queue_lock, VAR_3);
 return 1;
}
