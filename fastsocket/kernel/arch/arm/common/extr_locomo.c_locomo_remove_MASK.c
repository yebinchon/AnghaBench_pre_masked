
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct locomo {int dummy; } ;


 int FUNC_0 (struct locomo*) ;
 struct locomo* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct locomo *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1) {
  FUNC_0(VAR_1);
  FUNC_2(VAR_0, ((void*)0));
 }

 return 0;
}
