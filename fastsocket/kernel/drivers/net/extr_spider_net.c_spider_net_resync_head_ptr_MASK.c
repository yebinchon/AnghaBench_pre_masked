
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spider_net_descr_chain {int num_desc; int lock; struct spider_net_descr* head; } ;
struct spider_net_descr {int hwdescr; struct spider_net_descr* next; } ;
struct spider_net_card {struct spider_net_descr_chain rx_chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct spider_net_card *VAR_2)
{
 unsigned long VAR_3;
 struct spider_net_descr_chain *VAR_4 = &VAR_2->rx_chain;
 struct spider_net_descr *VAR_5;
 int VAR_6, VAR_7;


 VAR_5 = VAR_4->head;
 VAR_7 = FUNC_0(VAR_5->hwdescr);

 if (VAR_7 == VAR_1)
  return;

 FUNC_1(&VAR_4->lock, VAR_3);

 VAR_5 = VAR_4->head;
 VAR_7 = FUNC_0(VAR_5->hwdescr);
 for (VAR_6=0; VAR_6<VAR_4->num_desc; VAR_6++) {
  if (VAR_7 != VAR_0) break;
  VAR_5 = VAR_5->next;
  VAR_7 = FUNC_0(VAR_5->hwdescr);
 }
 VAR_4->head = VAR_5;

 FUNC_2(&VAR_4->lock, VAR_3);
}
