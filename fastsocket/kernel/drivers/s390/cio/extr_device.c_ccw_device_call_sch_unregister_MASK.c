
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel {int dev; } ;
struct TYPE_2__ {int parent; } ;
struct ccw_device {TYPE_1__ dev; } ;


 int FUNC_0 (struct subchannel*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct subchannel* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ccw_device *VAR_0)
{
 struct subchannel *VAR_1;


 if (!FUNC_1(VAR_0->dev.parent))
  return;
 VAR_1 = FUNC_3(VAR_0->dev.parent);
 FUNC_0(VAR_1);

 FUNC_2(&VAR_1->dev);
}
