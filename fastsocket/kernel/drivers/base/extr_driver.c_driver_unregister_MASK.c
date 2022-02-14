
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int groups; int p; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct device_driver*) ;
 int FUNC_2 (struct device_driver*,int ) ;

void FUNC_3(struct device_driver *VAR_0)
{
 if (!VAR_0 || !VAR_0->p) {
  FUNC_0(1, "Unexpected driver unregister!\n");
  return;
 }
 FUNC_2(VAR_0, VAR_0->groups);
 FUNC_1(VAR_0);
}
