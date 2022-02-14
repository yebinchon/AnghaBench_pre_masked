
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {scalar_t__ unplug_delay; int unplug_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct request_queue*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int ,struct request_queue*) ;
 int FUNC_5 (struct request_queue*) ;

void FUNC_6(struct request_queue *VAR_2)
{
 FUNC_0(!FUNC_2());





 if (FUNC_1(VAR_2))
  return;

 if (!FUNC_4(VAR_0, VAR_2)) {
  FUNC_3(&VAR_2->unplug_timer, VAR_1 + VAR_2->unplug_delay);
  FUNC_5(VAR_2);
 }
}
