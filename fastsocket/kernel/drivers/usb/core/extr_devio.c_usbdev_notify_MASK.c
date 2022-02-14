
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_2,
          unsigned long VAR_3, void *VAR_4)
{
 switch (VAR_3) {
 case 129:
  if (FUNC_0(VAR_4))
   return VAR_0;
  break;
 case 128:
  FUNC_1(VAR_4);
  FUNC_2(VAR_4);
  break;
 }
 return VAR_1;
}
