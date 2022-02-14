
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qe_ic {int irqhost; int regs; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;

unsigned int FUNC_3(struct qe_ic *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2 == ((void*)0));


 VAR_3 = FUNC_2(VAR_2->regs, VAR_1) >> 26;

 if (VAR_3 == 0)
  return VAR_0;

 return FUNC_1(VAR_2->irqhost, VAR_3);
}
