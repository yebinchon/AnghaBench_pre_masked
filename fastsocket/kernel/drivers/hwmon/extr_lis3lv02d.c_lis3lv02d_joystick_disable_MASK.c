
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * idev; scalar_t__ irq; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

void FUNC_2(void)
{
 if (!VAR_0.idev)
  return;

 if (VAR_0.irq)
  FUNC_1(&VAR_1);
 FUNC_0(VAR_0.idev);
 VAR_0.idev = ((void*)0);
}
