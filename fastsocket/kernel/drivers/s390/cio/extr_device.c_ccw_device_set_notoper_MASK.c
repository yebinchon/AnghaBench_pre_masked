
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct subchannel {int dev; } ;
struct TYPE_3__ {int parent; } ;
struct ccw_device {TYPE_2__* private; TYPE_1__ dev; } ;
struct TYPE_4__ {int state; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ccw_device*,int ) ;
 int FUNC_2 (struct subchannel*) ;
 char* FUNC_3 (int *) ;
 struct subchannel* FUNC_4 (int ) ;

void FUNC_5(struct ccw_device *VAR_1)
{
 struct subchannel *VAR_2 = FUNC_4(VAR_1->dev.parent);

 FUNC_0(2, "notoper");
 FUNC_0(2, FUNC_3(&VAR_2->dev));
 FUNC_1(VAR_1, 0);
 FUNC_2(VAR_2);
 VAR_1->private->state = VAR_0;
}
