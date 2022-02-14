
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isa_driver {int (* resume ) (struct device*,int ) ;} ;
struct device {struct isa_driver* platform_data; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (struct device*,int ) ;
 TYPE_1__* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct isa_driver *VAR_1 = VAR_0->platform_data;

 if (VAR_1->resume)
  return VAR_1->resume(VAR_0, FUNC_1(VAR_0)->id);

 return 0;
}
