
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_3,
   unsigned long VAR_4, void *VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_4) {
 case 131:
  FUNC_2(&VAR_1);
  VAR_2 = 1;
  VAR_6 = FUNC_1(VAR_5);
  break;
 case 129:
 case 133:
  FUNC_3(&VAR_1);
  FUNC_0("Memory offline operation complete.\n");
  break;
 case 130:
 case 128:
 case 132:
  break;
 }

 if (VAR_6)
  VAR_6 = FUNC_4(VAR_6);
 else
  VAR_6 = VAR_0;

 return VAR_6;
}
