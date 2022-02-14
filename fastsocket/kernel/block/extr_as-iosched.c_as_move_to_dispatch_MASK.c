
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int rb_node; } ;
struct io_context {TYPE_1__* aic; } ;
struct as_data {scalar_t__ current_write_count; int nr_dispatched; int q; int * next_rq; scalar_t__ ioc_finished; int * io_context; scalar_t__* last_sector; int antic_status; } ;
struct TYPE_2__ {int nr_dispatched; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int const VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct io_context* FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*,int ) ;
 scalar_t__ FUNC_4 (struct request*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct as_data*) ;
 int FUNC_7 (struct as_data*,struct request*) ;
 int FUNC_8 (int ,struct request*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct request*) ;
 scalar_t__ FUNC_11 (struct request*) ;
 int FUNC_12 (int **,struct io_context**) ;
 int FUNC_13 (int ,struct request*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct request*) ;

__attribute__((used)) static void FUNC_16(struct as_data *VAR_4, struct request *VAR_5)
{
 const int VAR_6 = FUNC_15(VAR_5);

 FUNC_0(FUNC_1(&VAR_5->rb_node));

 FUNC_6(VAR_4);
 VAR_4->antic_status = VAR_0;





 VAR_4->last_sector[VAR_6] = FUNC_10(VAR_5) + FUNC_11(VAR_5);

 if (VAR_6 == VAR_3) {
  struct io_context *VAR_7 = FUNC_2(VAR_5);

  FUNC_12(&VAR_4->io_context, &VAR_7);
 } else {
  if (VAR_4->io_context) {
   FUNC_14(VAR_4->io_context);
   VAR_4->io_context = ((void*)0);
  }

  if (VAR_4->current_write_count != 0)
   VAR_4->current_write_count--;
 }
 VAR_4->ioc_finished = 0;

 VAR_4->next_rq[VAR_6] = FUNC_7(VAR_4, VAR_5);




 FUNC_8(VAR_4->q, VAR_5);
 FUNC_5(FUNC_4(VAR_5) != VAR_2);

 FUNC_13(VAR_4->q, VAR_5);

 FUNC_3(VAR_5, VAR_1);
 if (FUNC_2(VAR_5) && FUNC_2(VAR_5)->aic)
  FUNC_9(&FUNC_2(VAR_5)->aic->nr_dispatched);
 VAR_4->nr_dispatched++;
}
