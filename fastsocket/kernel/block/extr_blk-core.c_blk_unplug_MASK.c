
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int (* unplug_fn ) (struct request_queue*) ;} ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;

void FUNC_2(struct request_queue *VAR_0)
{



 if (VAR_0->unplug_fn) {
  FUNC_1(VAR_0);
  VAR_0->unplug_fn(VAR_0);
 }
}
