
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct cfq_queue {struct request* next_rq; int sort_list; } ;
struct cfq_io_context {TYPE_1__* ioc; } ;
struct cfq_data {struct cfq_io_context* active_cic; int queue; } ;
struct TYPE_2__ {int refcount; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct cfq_io_context* FUNC_2 (struct request*) ;
 int FUNC_3 (int *) ;
 struct request* FUNC_4 (struct cfq_queue*) ;
 int FUNC_5 (int ,struct request*) ;
 int FUNC_6 (struct cfq_data*,struct cfq_queue*) ;

__attribute__((used)) static bool FUNC_7(struct cfq_data *VAR_0, struct cfq_queue *VAR_1)
{
 struct request *VAR_2;

 FUNC_0(FUNC_1(&VAR_1->sort_list));

 if (!FUNC_6(VAR_0, VAR_1))
  return 0;




 VAR_2 = FUNC_4(VAR_1);
 if (!VAR_2)
  VAR_2 = VAR_1->next_rq;




 FUNC_5(VAR_0->queue, VAR_2);

 if (!VAR_0->active_cic) {
  struct cfq_io_context *VAR_3 = FUNC_2(VAR_2);

  FUNC_3(&VAR_3->ioc->refcount);
  VAR_0->active_cic = VAR_3;
 }

 return 1;
}
