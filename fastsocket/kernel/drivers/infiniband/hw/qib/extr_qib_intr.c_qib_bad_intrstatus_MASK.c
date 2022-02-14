
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int (* f_free_irq ) (struct qib_devdata*) ;int flags; int (* f_set_intr_state ) (struct qib_devdata*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qib_devdata*,char*) ;
 int FUNC_1 (struct qib_devdata*,int ) ;
 int FUNC_2 (struct qib_devdata*) ;

void FUNC_3(struct qib_devdata *VAR_2)
{
 static int VAR_3;







 FUNC_0(VAR_2,
  "Read of chip interrupt status failed disabling interrupts\n");
 if (VAR_3++) {

  if (VAR_3 == 2)
   VAR_2->f_set_intr_state(VAR_2, 0);
  if (VAR_3 == 3) {
   FUNC_0(VAR_2,
    "2nd bad interrupt status, unregistering interrupts\n");
   VAR_2->flags |= VAR_0;
   VAR_2->flags &= ~VAR_1;
   VAR_2->f_free_irq(VAR_2);
  }
 }
}
