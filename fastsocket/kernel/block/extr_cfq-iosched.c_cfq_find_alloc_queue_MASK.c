
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct io_context {int dummy; } ;
struct cfq_queue {int dummy; } ;
struct cfq_io_context {int dummy; } ;
struct cfq_group {int dummy; } ;
struct cfq_data {struct cfq_queue oom_cfqq; TYPE_1__* queue; } ;
typedef int gfp_t ;
struct TYPE_4__ {int pid; } ;
struct TYPE_3__ {int node; int queue_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cfq_io_context* FUNC_0 (struct cfq_data*,struct io_context*) ;
 struct cfq_group* FUNC_1 (struct cfq_data*) ;
 int FUNC_2 (struct cfq_data*,struct cfq_queue*,int ,int) ;
 int FUNC_3 (struct cfq_queue*,struct io_context*) ;
 int FUNC_4 (struct cfq_queue*,struct cfq_group*) ;
 int FUNC_5 (struct cfq_data*,struct cfq_queue*,char*) ;
 int VAR_2 ;
 struct cfq_queue* FUNC_6 (struct cfq_io_context*,int) ;
 TYPE_2__* VAR_3 ;
 struct cfq_queue* FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,struct cfq_queue*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static struct cfq_queue *
FUNC_11(struct cfq_data *VAR_4, bool VAR_5,
       struct io_context *VAR_6, gfp_t VAR_7)
{
 struct cfq_queue *VAR_8, *VAR_9 = ((void*)0);
 struct cfq_io_context *VAR_10;
 struct cfq_group *VAR_11;

retry:
 VAR_11 = FUNC_1(VAR_4);
 VAR_10 = FUNC_0(VAR_4, VAR_6);

 VAR_8 = FUNC_6(VAR_10, VAR_5);





 if (!VAR_8 || VAR_8 == &VAR_4->oom_cfqq) {
  VAR_8 = ((void*)0);
  if (VAR_9) {
   VAR_8 = VAR_9;
   VAR_9 = ((void*)0);
  } else if (VAR_7 & VAR_0) {
   FUNC_10(VAR_4->queue->queue_lock);
   VAR_9 = FUNC_7(VAR_2,
     VAR_7 | VAR_1,
     VAR_4->queue->node);
   FUNC_9(VAR_4->queue->queue_lock);
   if (VAR_9)
    goto retry;
  } else {
   VAR_8 = FUNC_7(VAR_2,
     VAR_7 | VAR_1,
     VAR_4->queue->node);
  }

  if (VAR_8) {
   FUNC_2(VAR_4, VAR_8, VAR_3->pid, VAR_5);
   FUNC_3(VAR_8, VAR_6);
   FUNC_4(VAR_8, VAR_11);
   FUNC_5(VAR_4, VAR_8, "alloced");
  } else
   VAR_8 = &VAR_4->oom_cfqq;
 }

 if (VAR_9)
  FUNC_8(VAR_2, VAR_9);

 return VAR_8;
}
