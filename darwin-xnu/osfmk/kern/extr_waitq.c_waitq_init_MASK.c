
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq {int waitq_fifo; int waitq_irq; int waitq_turnstile_or_port; int waitq_isvalid; int waitq_queue; int waitq_prio_queue; scalar_t__ waitq_prepost_id; scalar_t__ waitq_set_id; scalar_t__ waitq_eventmask; int waitq_type; scalar_t__ waitq_prepost; } ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct waitq*) ;
 int FUNC_4 (struct waitq*) ;

kern_return_t FUNC_5(struct waitq *VAR_8, int VAR_9)
{
 FUNC_0(VAR_8 != ((void*)0));


 if ((VAR_9 & VAR_4) != 0)
  return VAR_0;

 VAR_8->waitq_fifo = ((VAR_9 & VAR_5) == 0);
 VAR_8->waitq_irq = !!(VAR_9 & VAR_3);
 VAR_8->waitq_prepost = 0;
 VAR_8->waitq_type = VAR_7;
 VAR_8->waitq_turnstile_or_port = !!(VAR_9 & VAR_6);
 VAR_8->waitq_eventmask = 0;

 VAR_8->waitq_set_id = 0;
 VAR_8->waitq_prepost_id = 0;

 FUNC_4(VAR_8);
 if (FUNC_3(VAR_8)) {

  FUNC_1(&VAR_8->waitq_prio_queue,
    VAR_2);
  FUNC_0(VAR_8->waitq_fifo == 0);
 } else {
  FUNC_2(&VAR_8->waitq_queue);
 }

 VAR_8->waitq_isvalid = 1;
 return VAR_1;
}
