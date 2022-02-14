
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct as_io_context {unsigned long last_end_request; scalar_t__ last_request_pos; int lock; int state; int nr_dispatched; int nr_queued; } ;
struct as_data {int dummy; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct as_data*,struct as_io_context*,scalar_t__) ;
 int FUNC_1 (struct as_data*,struct as_io_context*,unsigned long) ;
 unsigned long FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request*) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_5 (unsigned long,scalar_t__) ;
 int FUNC_6 (struct request*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct as_data *VAR_5, struct as_io_context *VAR_6,
    struct request *VAR_7)
{
 int VAR_8 = FUNC_6(VAR_7);
 unsigned long VAR_9 = 0;
 sector_t VAR_10;

 if (VAR_6 == ((void*)0))
  return;

 if (VAR_8 == VAR_2) {
  unsigned long VAR_11 = FUNC_2(&VAR_6->nr_queued)
     + FUNC_2(&VAR_6->nr_dispatched);
  FUNC_8(&VAR_6->lock);
  if (FUNC_10(VAR_0, &VAR_6->state) ||
   FUNC_10(VAR_1, &VAR_6->state)) {

   if (FUNC_10(VAR_0, &VAR_6->state)
       && VAR_11 == 0) {
    VAR_9 = VAR_4 - VAR_6->last_end_request;
    VAR_9 = FUNC_5(VAR_9, VAR_3-1);
   }
   FUNC_1(VAR_5, VAR_6, VAR_9);


   if (VAR_6->last_request_pos < FUNC_3(VAR_7))
    VAR_10 = FUNC_3(VAR_7) -
         VAR_6->last_request_pos;
   else
    VAR_10 = VAR_6->last_request_pos -
         FUNC_3(VAR_7);
   FUNC_0(VAR_5, VAR_6, VAR_10);
  }
  VAR_6->last_request_pos = FUNC_3(VAR_7) + FUNC_4(VAR_7);
  FUNC_7(VAR_1, &VAR_6->state);
  FUNC_9(&VAR_6->lock);
 }
}
