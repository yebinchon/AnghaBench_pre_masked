
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (unsigned int,int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_3,
     unsigned long VAR_4, void *VAR_5)
{
 unsigned int VAR_6 = (unsigned long)VAR_5;

 switch (VAR_4) {
  case 128:
  case 130:
   FUNC_0(VAR_6, VAR_2, ((void*)0), 1);
   break;
  case 129:
   FUNC_0(VAR_6, VAR_1, ((void*)0), 1);
   break;
 }
 return VAR_0;
}
