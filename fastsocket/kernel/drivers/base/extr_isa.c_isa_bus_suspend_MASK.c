
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isa_driver {int (* suspend ) (struct device*,int ,int ) ;} ;
struct device {struct isa_driver* platform_data; } ;
typedef int pm_message_t ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (struct device*,int ,int ) ;
 TYPE_1__* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, pm_message_t VAR_1)
{
 struct isa_driver *VAR_2 = VAR_0->platform_data;

 if (VAR_2->suspend)
  return VAR_2->suspend(VAR_0, FUNC_1(VAR_0)->id, VAR_1);

 return 0;
}
