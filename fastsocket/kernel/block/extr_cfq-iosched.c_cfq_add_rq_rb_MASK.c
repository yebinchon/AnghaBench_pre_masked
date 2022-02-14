
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct cfq_queue {struct request* next_rq; int sort_list; int * queued; struct cfq_data* cfqd; } ;
struct cfq_data {int last_position; } ;


 int FUNC_0 (int) ;
 struct cfq_queue* FUNC_1 (struct request*) ;
 int FUNC_2 (struct cfq_data*,struct cfq_queue*) ;
 int FUNC_3 (struct cfq_queue*) ;
 struct request* FUNC_4 (struct cfq_data*,struct request*,struct request*,int ) ;
 int FUNC_5 (struct cfq_data*,struct cfq_queue*) ;
 int FUNC_6 (int *,struct request*) ;
 size_t FUNC_7 (struct request*) ;

__attribute__((used)) static void FUNC_8(struct request *VAR_0)
{
 struct cfq_queue *VAR_1 = FUNC_1(VAR_0);
 struct cfq_data *VAR_2 = VAR_1->cfqd;
 struct request *VAR_3;

 VAR_1->queued[FUNC_7(VAR_0)]++;

 FUNC_6(&VAR_1->sort_list, VAR_0);

 if (!FUNC_3(VAR_1))
  FUNC_2(VAR_2, VAR_1);




 VAR_3 = VAR_1->next_rq;
 VAR_1->next_rq = FUNC_4(VAR_2, VAR_1->next_rq, VAR_0, VAR_2->last_position);




 if (VAR_3 != VAR_1->next_rq)
  FUNC_5(VAR_2, VAR_1);

 FUNC_0(!VAR_1->next_rq);
}
