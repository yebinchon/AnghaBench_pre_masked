
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_devdata {scalar_t__ ipath_int_counter; int ipath_intrchk_timer; TYPE_1__* pcidev; int (* ipath_f_intr_fallback ) (struct ipath_devdata*) ;} ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct ipath_devdata*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 struct ipath_devdata *VAR_4 = (struct ipath_devdata *) VAR_3;

 if (!VAR_4)
  return;





 if (VAR_4->ipath_int_counter == 0) {
  if (!VAR_4->ipath_f_intr_fallback(VAR_4))
   FUNC_0(&VAR_4->pcidev->dev, "No interrupts detected, "
    "not usable.\n");
  else
   FUNC_2(&VAR_4->ipath_intrchk_timer, VAR_2 + VAR_0/2);
 } else
  FUNC_1(VAR_1, "%u interrupts at timer check\n",
   VAR_4->ipath_int_counter);
}
