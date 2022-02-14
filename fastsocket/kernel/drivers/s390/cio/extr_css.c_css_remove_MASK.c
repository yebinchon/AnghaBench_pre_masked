
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel {TYPE_1__* driver; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* remove ) (struct subchannel*) ;} ;


 int FUNC_0 (struct subchannel*) ;
 struct subchannel* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct subchannel *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 VAR_2 = VAR_1->driver->remove ? VAR_1->driver->remove(VAR_1) : 0;
 VAR_1->driver = ((void*)0);
 return VAR_2;
}
