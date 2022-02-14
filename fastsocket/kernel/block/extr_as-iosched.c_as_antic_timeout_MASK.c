
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int queue_lock; TYPE_1__* elevator; } ;
struct as_io_context {scalar_t__ ttime_samples; int state; } ;
struct as_data {scalar_t__ antic_status; int exit_prob; int exit_no_coop; TYPE_2__* io_context; int antic_work; } ;
struct TYPE_4__ {int lock; struct as_io_context* aic; } ;
struct TYPE_3__ {struct as_data* elevator_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct request_queue*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_4)
{
 struct request_queue *VAR_5 = (struct request_queue *)VAR_4;
 struct as_data *VAR_6 = VAR_5->elevator->elevator_data;
 unsigned long VAR_7;

 FUNC_2(VAR_5->queue_lock, VAR_7);
 if (VAR_6->antic_status == VAR_2
   || VAR_6->antic_status == VAR_1) {
  struct as_io_context *VAR_8;
  FUNC_1(&VAR_6->io_context->lock);
  VAR_8 = VAR_6->io_context->aic;

  VAR_6->antic_status = VAR_0;
  FUNC_0(VAR_5, &VAR_6->antic_work);

  if (VAR_8->ttime_samples == 0) {

   VAR_6->exit_prob = (7*VAR_6->exit_prob + 256)/8;
  }
  if (!FUNC_5(VAR_3, &VAR_8->state)) {

   VAR_6->exit_no_coop = (7*VAR_6->exit_no_coop + 256)/8;
  }
  FUNC_3(&VAR_6->io_context->lock);
 }
 FUNC_4(VAR_5->queue_lock, VAR_7);
}
