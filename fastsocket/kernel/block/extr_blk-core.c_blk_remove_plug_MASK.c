
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int unplug_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct request_queue*) ;

int FUNC_4(struct request_queue *VAR_1)
{
 FUNC_0(!FUNC_2());

 if (!FUNC_3(VAR_0, VAR_1))
  return 0;

 FUNC_1(&VAR_1->unplug_timer);
 return 1;
}
