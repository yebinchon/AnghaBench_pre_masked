
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {long* gr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;

long FUNC_2(struct pt_regs *VAR_1)
{
 if (FUNC_0(VAR_0) &&
     FUNC_1(VAR_1))
  return -1L;

 return VAR_1->gr[20];
}
