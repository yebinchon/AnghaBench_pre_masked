
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct frame {TYPE_1__ dcb; } ;
struct carlu {int tx_queue_lock; int tx_queue; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct carlu*) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5(struct carlu *VAR_0, struct frame *VAR_1)
{
 FUNC_0(FUNC_1(VAR_0->tx_queue_lock) != 0);

 FUNC_4(&VAR_1->dcb.list, &VAR_0->tx_queue);
 FUNC_2(VAR_0->tx_queue_lock);

 FUNC_3(VAR_0);
}
