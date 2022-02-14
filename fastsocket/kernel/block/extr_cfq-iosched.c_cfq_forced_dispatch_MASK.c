
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {int dummy; } ;
struct cfq_data {int busy_queues; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct cfq_queue*) ;
 int FUNC_2 (struct cfq_data*,struct cfq_queue*) ;
 struct cfq_queue* FUNC_3 (struct cfq_data*) ;
 int FUNC_4 (struct cfq_data*,char*,int) ;
 int FUNC_5 (struct cfq_data*,int ) ;

__attribute__((used)) static int FUNC_6(struct cfq_data *VAR_0)
{
 struct cfq_queue *VAR_1;
 int VAR_2 = 0;


 FUNC_5(VAR_0, 0);
 while ((VAR_1 = FUNC_3(VAR_0)) != ((void*)0)) {
  FUNC_2(VAR_0, VAR_1);
  VAR_2 += FUNC_1(VAR_1);
 }

 FUNC_0(VAR_0->busy_queues);

 FUNC_4(VAR_0, "forced_dispatch=%d", VAR_2);
 return VAR_2;
}
