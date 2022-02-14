
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int next; } ;
struct request_queue {scalar_t__ flush_pending_idx; scalar_t__ flush_running_idx; int flush_queue_delayed; TYPE_2__* elevator; TYPE_3__ queue_head; } ;
struct request {int dummy; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* elevator_dispatch_fn ) (struct request_queue*,int ) ;} ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (TYPE_3__*) ;
 struct request* FUNC_2 (int ) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request_queue*,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline struct request *FUNC_6(struct request_queue *VAR_0)
{
 struct request *VAR_1;

 while (1) {
  if (!FUNC_1(&VAR_0->queue_head)) {
   VAR_1 = FUNC_2(VAR_0->queue_head.next);
   return VAR_1;
  }
  if (VAR_0->flush_pending_idx != VAR_0->flush_running_idx &&
    !FUNC_3(VAR_0)) {
   VAR_0->flush_queue_delayed = 1;
   return ((void*)0);
  }
  if (FUNC_5(FUNC_0(VAR_0)) ||
      !VAR_0->elevator->ops->elevator_dispatch_fn(VAR_0, 0))
   return ((void*)0);
 }
}
