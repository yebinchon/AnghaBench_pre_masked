
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (unsigned int,struct pt_regs*) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_1, struct pt_regs *VAR_2)
{
        *VAR_0 &= ~(1 << VAR_1);

 FUNC_0(VAR_1, VAR_2);
}
