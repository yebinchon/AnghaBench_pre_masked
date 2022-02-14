
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_1, unsigned long VAR_2,
   void *VAR_3)
{




 if (VAR_0 < 0)
  return 0;

 FUNC_1("panic occurred, switching back to text console\n");
 return FUNC_0();
}
