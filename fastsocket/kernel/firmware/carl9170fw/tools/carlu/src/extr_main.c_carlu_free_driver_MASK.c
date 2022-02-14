
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlu {int * tx_sent_queue; int resp_pend; int mem_lock; int resp_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct carlu*) ;

void FUNC_5(struct carlu *VAR_1)
{
 unsigned int VAR_2;

 FUNC_2("destroy driver struct.\n");
 FUNC_1(VAR_1->resp_lock);
 FUNC_1(VAR_1->mem_lock);
 FUNC_0(VAR_1->resp_pend);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_3(&VAR_1->tx_sent_queue[VAR_2]);

 FUNC_4(VAR_1);
}
