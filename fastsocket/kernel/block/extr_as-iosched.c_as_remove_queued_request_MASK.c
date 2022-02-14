
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {TYPE_2__* elevator; } ;
struct request {int dummy; } ;
struct io_context {TYPE_1__* aic; } ;
struct as_data {struct request** next_rq; } ;
struct TYPE_4__ {struct as_data* elevator_data; } ;
struct TYPE_3__ {int nr_queued; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct io_context* FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct as_data*,struct request*) ;
 struct request* FUNC_5 (struct as_data*,struct request*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct request*) ;
 int FUNC_9 (struct request*) ;

__attribute__((used)) static void FUNC_10(struct request_queue *VAR_1,
         struct request *VAR_2)
{
 const int VAR_3 = FUNC_9(VAR_2);
 struct as_data *VAR_4 = VAR_1->elevator->elevator_data;
 struct io_context *VAR_5;

 FUNC_3(FUNC_2(VAR_2) != VAR_0);

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 && VAR_5->aic) {
  FUNC_0(!FUNC_7(&VAR_5->aic->nr_queued));
  FUNC_6(&VAR_5->aic->nr_queued);
 }





 if (VAR_4->next_rq[VAR_3] == VAR_2)
  VAR_4->next_rq[VAR_3] = FUNC_5(VAR_4, VAR_2);

 FUNC_8(VAR_2);
 FUNC_4(VAR_4, VAR_2);
}
