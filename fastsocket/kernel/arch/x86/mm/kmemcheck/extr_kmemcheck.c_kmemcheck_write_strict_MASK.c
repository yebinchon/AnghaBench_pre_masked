
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 void* FUNC_1 (unsigned long) ;
 int FUNC_2 (void*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct pt_regs *VAR_0,
 unsigned long VAR_1, unsigned int VAR_2)
{
 void *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  return;

 FUNC_0(VAR_1);
 FUNC_2(VAR_3, VAR_2);
}
