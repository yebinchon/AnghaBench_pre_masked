
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {struct cfq_queue* new_cfqq; } ;
struct cfq_data {struct cfq_queue* active_queue; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct cfq_data*,struct cfq_queue*,int ) ;
 int FUNC_2 (struct cfq_queue*) ;
 int FUNC_3 (struct cfq_data*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct cfq_data *VAR_0, struct cfq_queue *VAR_1)
{
 struct cfq_queue *VAR_2, *VAR_3;

 if (FUNC_4(VAR_1 == VAR_0->active_queue)) {
  FUNC_1(VAR_0, VAR_1, 0);
  FUNC_3(VAR_0);
 }






 VAR_2 = VAR_1->new_cfqq;
 while (VAR_2) {
  if (VAR_2 == VAR_1) {
   FUNC_0(1, "cfqq->new_cfqq loop detected\n");
   break;
  }
  VAR_3 = VAR_2->new_cfqq;
  FUNC_2(VAR_2);
  VAR_2 = VAR_3;
 }

 FUNC_2(VAR_1);
}
