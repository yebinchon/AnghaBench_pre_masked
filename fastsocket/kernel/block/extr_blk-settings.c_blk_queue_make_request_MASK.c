
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; int function; } ;
struct request_queue {int unplug_thresh; int unplug_delay; int limits; TYPE_1__ unplug_timer; int nr_batching; int * make_request_fn; int nr_requests; } ;
typedef int make_request_fn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct request_queue*,int ) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*,int) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int) ;

void FUNC_5(struct request_queue *VAR_4, make_request_fn *VAR_5)
{



 VAR_4->nr_requests = VAR_0;

 VAR_4->make_request_fn = VAR_5;
 FUNC_2(VAR_4, 511);
 FUNC_1(VAR_4);
 VAR_4->nr_batching = VAR_1;

 VAR_4->unplug_thresh = 4;
 VAR_4->unplug_delay = FUNC_4(3);
 if (VAR_4->unplug_delay == 0)
  VAR_4->unplug_delay = 1;

 VAR_4->unplug_timer.function = VAR_3;
 VAR_4->unplug_timer.data = (unsigned long)VAR_4;

 FUNC_3(&VAR_4->limits);




 FUNC_0(VAR_4, VAR_2);
}
