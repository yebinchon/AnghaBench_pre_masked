
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isa_driver {scalar_t__ (* match ) (struct device*,int ) ;} ;
struct device_driver {int dummy; } ;
struct device {struct isa_driver* platform_data; } ;
struct TYPE_2__ {int id; } ;


 scalar_t__ FUNC_0 (struct device*,int ) ;
 TYPE_1__* FUNC_1 (struct device*) ;
 struct isa_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct isa_driver *VAR_2 = FUNC_2(VAR_1);

 if (VAR_0->platform_data == VAR_2) {
  if (!VAR_2->match ||
   VAR_2->match(VAR_0, FUNC_1(VAR_0)->id))
   return 1;
  VAR_0->platform_data = ((void*)0);
 }
 return 0;
}
