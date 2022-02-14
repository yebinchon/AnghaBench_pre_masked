
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {scalar_t__ st; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct css_driver {struct css_device_id* subchannel_type; } ;
struct css_device_id {scalar_t__ type; scalar_t__ match_flags; } ;


 struct css_driver* FUNC_0 (struct device_driver*) ;
 struct subchannel* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct subchannel *VAR_2 = FUNC_1(VAR_0);
 struct css_driver *VAR_3 = FUNC_0(VAR_1);
 struct css_device_id *VAR_4;

 for (VAR_4 = VAR_3->subchannel_type; VAR_4->match_flags; VAR_4++) {
  if (VAR_2->st == VAR_4->type)
   return 1;
 }

 return 0;
}
