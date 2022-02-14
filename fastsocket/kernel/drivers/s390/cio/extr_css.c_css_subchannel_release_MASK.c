
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ intparm; } ;
struct subchannel {struct subchannel* lock; TYPE_1__ config; int schid; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct subchannel*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct subchannel*) ;
 struct subchannel* FUNC_3 (struct device*) ;

__attribute__((used)) static void
FUNC_4(struct device *VAR_0)
{
 struct subchannel *VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 if (!FUNC_1(VAR_1->schid)) {

  VAR_1->config.intparm = 0;
  FUNC_0(VAR_1);
  FUNC_2(VAR_1->lock);
  FUNC_2(VAR_1);
 }
}
