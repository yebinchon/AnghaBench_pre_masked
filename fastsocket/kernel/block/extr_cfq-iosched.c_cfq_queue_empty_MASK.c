
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct cfq_data {int rq_queued; } ;
struct TYPE_2__ {struct cfq_data* elevator_data; } ;



__attribute__((used)) static int FUNC_0(struct request_queue *VAR_0)
{
 struct cfq_data *VAR_1 = VAR_0->elevator->elevator_data;

 return !VAR_1->rq_queued;
}
