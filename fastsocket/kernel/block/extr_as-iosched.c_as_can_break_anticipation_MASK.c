
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct io_context {int lock; struct as_io_context* aic; } ;
struct as_io_context {scalar_t__ ttime_samples; scalar_t__ ttime_mean; int state; int nr_dispatched; int nr_queued; } ;
struct as_data {int exit_prob; int exit_no_coop; scalar_t__ new_ttime_mean; scalar_t__ antic_expire; scalar_t__ ioc_finished; struct io_context* io_context; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct io_context* FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct as_data*) ;
 scalar_t__ FUNC_3 (struct as_data*,struct as_io_context*,struct request*) ;
 int FUNC_4 (struct as_data*,struct as_io_context*,struct request*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct request*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct as_data *VAR_1, struct request *VAR_2)
{
 struct io_context *VAR_3;
 struct as_io_context *VAR_4;

 VAR_3 = VAR_1->io_context;
 FUNC_0(!VAR_3);
 FUNC_7(&VAR_3->lock);

 if (VAR_2 && VAR_3 == FUNC_1(VAR_2)) {

  FUNC_8(&VAR_3->lock);
  return 1;
 }

 if (VAR_1->ioc_finished && FUNC_2(VAR_1)) {




  FUNC_8(&VAR_3->lock);
  return 1;
 }

 VAR_4 = VAR_3->aic;
 if (!VAR_4) {
  FUNC_8(&VAR_3->lock);
  return 0;
 }

 if (FUNC_5(&VAR_4->nr_queued) > 0) {

  FUNC_8(&VAR_3->lock);
  return 1;
 }

 if (FUNC_5(&VAR_4->nr_dispatched) > 0) {

  FUNC_8(&VAR_3->lock);
  return 1;
 }

 if (VAR_2 && FUNC_6(VAR_2) && FUNC_3(VAR_1, VAR_4, VAR_2)) {
  if (!FUNC_9(VAR_0, &VAR_4->state)) {
   if (VAR_4->ttime_samples == 0)
    VAR_1->exit_prob = (7*VAR_1->exit_prob + 256)/8;

   VAR_1->exit_no_coop = (7*VAR_1->exit_no_coop)/8;
  }

  FUNC_4(VAR_1, VAR_4, VAR_2);
  FUNC_8(&VAR_3->lock);
  return 1;
 }

 if (!FUNC_9(VAR_0, &VAR_4->state)) {

  if (VAR_4->ttime_samples == 0)
   VAR_1->exit_prob = (7*VAR_1->exit_prob + 256)/8;

  if (VAR_1->exit_no_coop > 128) {
   FUNC_8(&VAR_3->lock);
   return 1;
  }
 }

 if (VAR_4->ttime_samples == 0) {
  if (VAR_1->new_ttime_mean > VAR_1->antic_expire) {
   FUNC_8(&VAR_3->lock);
   return 1;
  }
  if (VAR_1->exit_prob * VAR_1->exit_no_coop > 128*256) {
   FUNC_8(&VAR_3->lock);
   return 1;
  }
 } else if (VAR_4->ttime_mean > VAR_1->antic_expire) {

  FUNC_8(&VAR_3->lock);
  return 1;
 }
 FUNC_8(&VAR_3->lock);
 return 0;
}
