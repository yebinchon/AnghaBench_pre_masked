
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct elevator_queue {TYPE_1__* ops; } ;
struct TYPE_2__ {void* (* elevator_init_fn ) (struct request_queue*) ;} ;


 void* FUNC_0 (struct request_queue*) ;

__attribute__((used)) static void *FUNC_1(struct request_queue *VAR_0,
     struct elevator_queue *VAR_1)
{
 return VAR_1->ops->elevator_init_fn(VAR_0);
}
