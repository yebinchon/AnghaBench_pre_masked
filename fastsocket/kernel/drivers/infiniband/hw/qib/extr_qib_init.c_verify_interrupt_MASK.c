
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_devdata {scalar_t__ int_counter; int intrchk_timer; TYPE_1__* pcidev; int (* f_intr_fallback ) (struct qib_devdata*) ;} ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct qib_devdata*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct qib_devdata *VAR_3 = (struct qib_devdata *) VAR_2;

 if (!VAR_3)
  return;





 if (VAR_3->int_counter == 0) {
  if (!VAR_3->f_intr_fallback(VAR_3))
   FUNC_0(&VAR_3->pcidev->dev,
    "No interrupts detected, not usable.\n");
  else
   FUNC_1(&VAR_3->intrchk_timer, VAR_1 + VAR_0/2);
 }
}
