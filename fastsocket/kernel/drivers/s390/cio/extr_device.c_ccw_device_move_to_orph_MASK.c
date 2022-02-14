
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct subchannel {TYPE_2__ dev; } ;
struct channel_subsystem {int pseudo_subchannel; } ;
struct TYPE_3__ {int parent; } ;
struct ccw_device {TYPE_1__ dev; } ;


 int FUNC_0 (struct ccw_device*,int ) ;
 struct channel_subsystem* FUNC_1 (int ) ;
 struct subchannel* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ccw_device *VAR_0)
{
 struct subchannel *VAR_1 = FUNC_2(VAR_0->dev.parent);
 struct channel_subsystem *VAR_2 = FUNC_1(VAR_1->dev.parent);

 return FUNC_0(VAR_0, VAR_2->pseudo_subchannel);
}
