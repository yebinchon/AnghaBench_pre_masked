
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_tc {int * iomem; int * regs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

void FUNC_4(struct atmel_tc *VAR_1)
{
 FUNC_2(&VAR_0);
 if (VAR_1->regs) {
  FUNC_0(VAR_1->regs);
  FUNC_1(VAR_1->iomem);
  VAR_1->regs = ((void*)0);
  VAR_1->iomem = ((void*)0);
 }
 FUNC_3(&VAR_0);
}
