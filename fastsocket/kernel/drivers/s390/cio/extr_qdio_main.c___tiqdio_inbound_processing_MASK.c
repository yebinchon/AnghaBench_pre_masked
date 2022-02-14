
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdio_q {int tasklet; TYPE_1__* irq_ptr; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct qdio_q*) ;
 int FUNC_2 (struct qdio_q*) ;
 int FUNC_3 (struct qdio_q*) ;
 int FUNC_4 (struct qdio_q*) ;
 int FUNC_5 (struct qdio_q*) ;
 int FUNC_6 (struct qdio_q*) ;
 int FUNC_7 (struct qdio_q*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct qdio_q *VAR_4)
{
 FUNC_7(VAR_4, VAR_1);
 FUNC_6(VAR_4);





 FUNC_1(VAR_4);

 if (!FUNC_3(VAR_4))
  return;

 FUNC_4(VAR_4);

 if (!FUNC_2(VAR_4)) {
  FUNC_7(VAR_4, VAR_2);
  if (FUNC_0(VAR_4->irq_ptr->state != VAR_0)) {
   FUNC_8(&VAR_4->tasklet);
   return;
  }
 }

 FUNC_5(VAR_4);




 if (!FUNC_2(VAR_4)) {
  FUNC_7(VAR_4, VAR_3);
  if (FUNC_0(VAR_4->irq_ptr->state != VAR_0))
   FUNC_8(&VAR_4->tasklet);
 }
}
