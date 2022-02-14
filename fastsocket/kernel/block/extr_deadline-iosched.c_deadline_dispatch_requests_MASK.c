
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct request {int dummy; } ;
struct deadline_data {scalar_t__ batching; scalar_t__ fifo_batch; scalar_t__ writes_starved; struct request** next_rq; TYPE_2__* fifo_list; scalar_t__ starved; int * sort_list; } ;
struct TYPE_4__ {int next; } ;
struct TYPE_3__ {struct deadline_data* elevator_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_2 (struct deadline_data*,int) ;
 int FUNC_3 (struct deadline_data*,struct request*) ;
 int FUNC_4 (TYPE_2__*) ;
 struct request* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct request_queue *VAR_2, int VAR_3)
{
 struct deadline_data *VAR_4 = VAR_2->elevator->elevator_data;
 const int VAR_5 = !FUNC_4(&VAR_4->fifo_list[VAR_0]);
 const int VAR_6 = !FUNC_4(&VAR_4->fifo_list[VAR_1]);
 struct request *VAR_7;
 int VAR_8;




 if (VAR_4->next_rq[VAR_1])
  VAR_7 = VAR_4->next_rq[VAR_1];
 else
  VAR_7 = VAR_4->next_rq[VAR_0];

 if (VAR_7 && VAR_4->batching < VAR_4->fifo_batch)

  goto dispatch_request;






 if (VAR_5) {
  FUNC_0(FUNC_1(&VAR_4->sort_list[VAR_0]));

  if (VAR_6 && (VAR_4->starved++ >= VAR_4->writes_starved))
   goto dispatch_writes;

  VAR_8 = VAR_0;

  goto dispatch_find_request;
 }





 if (VAR_6) {
dispatch_writes:
  FUNC_0(FUNC_1(&VAR_4->sort_list[VAR_1]));

  VAR_4->starved = 0;

  VAR_8 = VAR_1;

  goto dispatch_find_request;
 }

 return 0;

dispatch_find_request:



 if (FUNC_2(VAR_4, VAR_8) || !VAR_4->next_rq[VAR_8]) {





  VAR_7 = FUNC_5(VAR_4->fifo_list[VAR_8].next);
 } else {




  VAR_7 = VAR_4->next_rq[VAR_8];
 }

 VAR_4->batching = 0;

dispatch_request:



 VAR_4->batching++;
 FUNC_3(VAR_4, VAR_7);

 return 1;
}
