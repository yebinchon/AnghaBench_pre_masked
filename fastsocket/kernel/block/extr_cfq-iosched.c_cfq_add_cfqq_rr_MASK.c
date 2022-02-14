
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {int dummy; } ;
struct cfq_data {int busy_queues; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cfq_queue*) ;
 int FUNC_2 (struct cfq_data*,struct cfq_queue*,char*) ;
 int FUNC_3 (struct cfq_queue*) ;
 int FUNC_4 (struct cfq_data*,struct cfq_queue*) ;

__attribute__((used)) static void FUNC_5(struct cfq_data *VAR_0, struct cfq_queue *VAR_1)
{
 FUNC_2(VAR_0, VAR_1, "add_to_rr");
 FUNC_0(FUNC_1(VAR_1));
 FUNC_3(VAR_1);
 VAR_0->busy_queues++;

 FUNC_4(VAR_0, VAR_1);
}
