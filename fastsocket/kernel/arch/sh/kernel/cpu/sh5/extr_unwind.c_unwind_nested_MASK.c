
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_1 (unsigned long VAR_1, unsigned long VAR_2)
{
 if ((VAR_2 >= VAR_0) &&
     ((VAR_2 & 7) == 0)) {
  FUNC_0((struct pt_regs *) VAR_2);
 }
}
