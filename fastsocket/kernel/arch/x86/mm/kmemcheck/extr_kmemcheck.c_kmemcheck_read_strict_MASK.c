
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
typedef enum kmemcheck_shadow { ____Placeholder_kmemcheck_shadow } kmemcheck_shadow ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned long,unsigned int,struct pt_regs*) ;
 int FUNC_1 (unsigned long) ;
 void* FUNC_2 (unsigned long) ;
 int FUNC_3 (void*,unsigned int) ;
 int FUNC_4 (void*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct pt_regs *VAR_2,
 unsigned long VAR_3, unsigned int VAR_4)
{
 void *VAR_5;
 enum kmemcheck_shadow VAR_6;

 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5)
  return;

 FUNC_1(VAR_3);
 VAR_6 = FUNC_4(VAR_5, VAR_4);
 if (VAR_6 == VAR_0)
  return;

 if (VAR_1)
  FUNC_0(VAR_6, VAR_3, VAR_4, VAR_2);

 if (VAR_1 == 2)
  VAR_1 = 0;


 FUNC_3(VAR_5, VAR_4);
}
