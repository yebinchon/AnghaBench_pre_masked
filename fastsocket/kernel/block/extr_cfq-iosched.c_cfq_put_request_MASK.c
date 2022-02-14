
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int ** elevator_private; } ;
struct cfq_queue {int * allocated; } ;
struct TYPE_2__ {int ioc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct request*) ;
 struct cfq_queue* FUNC_2 (struct request*) ;
 TYPE_1__* FUNC_3 (struct request*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cfq_queue*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct request*) ;

__attribute__((used)) static void FUNC_8(struct request *VAR_0)
{
 struct cfq_queue *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1) {
  const int VAR_2 = FUNC_7(VAR_0);

  FUNC_0(!VAR_1->allocated[VAR_2]);
  VAR_1->allocated[VAR_2]--;

  FUNC_6(FUNC_3(VAR_0)->ioc);

  VAR_0->elevator_private[0] = ((void*)0);
  VAR_0->elevator_private[1] = ((void*)0);


  FUNC_4(FUNC_1(VAR_0));
  VAR_0->elevator_private[2] = ((void*)0);

  FUNC_5(VAR_1);
 }
}
