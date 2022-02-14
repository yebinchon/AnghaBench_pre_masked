
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int node; int sg_reserved_size; int * queue_lock; int queue_flags; int unplug_fn; int * unprep_rq_fn; int * prep_rq_fn; int * request_fn; } ;
typedef int spinlock_t ;
typedef int request_fn_proc ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct request_queue*) ;
 int VAR_2 ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*,int ) ;
 int FUNC_3 (struct request_queue*,int *) ;
 int VAR_3 ;

struct request_queue *
FUNC_4(struct request_queue *VAR_4, request_fn_proc *VAR_5,
         spinlock_t *VAR_6, int VAR_7)
{
 if (!VAR_4)
  return ((void*)0);

 VAR_4->node = VAR_7;
 if (FUNC_0(VAR_4))
  return ((void*)0);

 VAR_4->request_fn = VAR_5;
 VAR_4->prep_rq_fn = ((void*)0);
 VAR_4->unprep_rq_fn = ((void*)0);
 VAR_4->unplug_fn = VAR_3;
 VAR_4->queue_flags = VAR_1;


 if (VAR_6)
  VAR_4->queue_lock = VAR_6;




 FUNC_2(VAR_4, VAR_2);

 VAR_4->sg_reserved_size = VAR_0;




 if (!FUNC_3(VAR_4, ((void*)0))) {
  FUNC_1(VAR_4);
  return VAR_4;
 }

 return ((void*)0);
}
