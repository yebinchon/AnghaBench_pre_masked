
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spider_net_descr_chain {int lock; TYPE_1__* head; } ;
struct spider_net_card {struct spider_net_descr_chain rx_chain; } ;
struct TYPE_2__ {struct TYPE_2__* next; int hwdescr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct spider_net_card*,TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct spider_net_card *VAR_1)
{
 struct spider_net_descr_chain *VAR_2 = &VAR_1->rx_chain;
 unsigned long VAR_3;





 if (!FUNC_2(&VAR_2->lock, VAR_3))
  return;

 while (FUNC_0(VAR_2->head->hwdescr) ==
   VAR_0) {
  if (FUNC_1(VAR_1, VAR_2->head))
   break;
  VAR_2->head = VAR_2->head->next;
 }

 FUNC_3(&VAR_2->lock, VAR_3);
}
