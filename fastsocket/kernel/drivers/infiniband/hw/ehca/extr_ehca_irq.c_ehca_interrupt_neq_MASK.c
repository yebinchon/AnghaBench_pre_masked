
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int interrupt_task; } ;
struct ehca_shca {TYPE_1__ neq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct ehca_shca *VAR_3 = (struct ehca_shca*)VAR_2;

 FUNC_0(&VAR_3->neq.interrupt_task);

 return VAR_0;
}
