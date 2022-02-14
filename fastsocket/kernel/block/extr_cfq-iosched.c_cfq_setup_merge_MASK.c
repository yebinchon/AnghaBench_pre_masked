
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {int ref; struct cfq_queue* new_cfqq; } ;


 int FUNC_0 (struct cfq_queue*) ;

__attribute__((used)) static void FUNC_1(struct cfq_queue *VAR_0, struct cfq_queue *VAR_1)
{
 int VAR_2, VAR_3;
 struct cfq_queue *VAR_4;







 if (!FUNC_0(VAR_1))
  return;


 while ((VAR_4 = VAR_1->new_cfqq)) {
  if (VAR_4 == VAR_0)
   return;
  VAR_1 = VAR_4;
 }

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);




 if (VAR_2 == 0 || VAR_3 == 0)
  return;




 if (VAR_3 >= VAR_2) {
  VAR_0->new_cfqq = VAR_1;
  VAR_1->ref += VAR_2;
 } else {
  VAR_1->new_cfqq = VAR_0;
  VAR_0->ref += VAR_3;
 }
}
