
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct cpuidle_device {int registered; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct cpuidle_device* FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ,void*,int) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_5,
         unsigned long VAR_6, void *VAR_7)
{
 int VAR_8 = (unsigned long)VAR_7;
 struct cpuidle_device *VAR_9;

 switch (VAR_6 & 0xf) {
 case 128:

  if (VAR_4 != VAR_0)
   FUNC_2(VAR_8, VAR_2,
       (void *)1, 1);






  VAR_9 = FUNC_1(VAR_3, VAR_8);
  if (!VAR_9->registered)
   FUNC_0(VAR_8);

  break;
 }
 return VAR_1;
}
