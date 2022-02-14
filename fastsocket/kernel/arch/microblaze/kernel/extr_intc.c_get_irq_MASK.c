
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int) ;

unsigned int FUNC_2(struct pt_regs *VAR_2)
{
 int VAR_3;






 VAR_3 = FUNC_0(VAR_0 + VAR_1);
 FUNC_1("get_irq: %d\n", VAR_3);

 return VAR_3;
}
