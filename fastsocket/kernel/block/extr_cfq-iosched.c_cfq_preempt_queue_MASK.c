
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {scalar_t__ slice_end; } ;
struct cfq_data {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct cfq_queue*) ;
 int FUNC_2 (struct cfq_data*,struct cfq_queue*,char*) ;
 int FUNC_3 (struct cfq_queue*) ;
 int FUNC_4 (struct cfq_data*,struct cfq_queue*,int) ;
 int FUNC_5 (struct cfq_data*,int) ;

__attribute__((used)) static void FUNC_6(struct cfq_data *VAR_0, struct cfq_queue *VAR_1)
{
 FUNC_2(VAR_0, VAR_1, "preempt");
 FUNC_5(VAR_0, 1);





 FUNC_0(!FUNC_1(VAR_1));

 FUNC_4(VAR_0, VAR_1, 1);

 VAR_1->slice_end = 0;
 FUNC_3(VAR_1);
}
