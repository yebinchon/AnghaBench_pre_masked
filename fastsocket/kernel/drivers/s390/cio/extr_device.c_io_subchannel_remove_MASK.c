
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct subchannel {TYPE_1__ dev; int private; } ;
struct ccw_device {int ccwlock; TYPE_2__* private; } ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct subchannel*) ;
 int FUNC_2 (int ) ;
 struct ccw_device* FUNC_3 (struct subchannel*) ;
 int FUNC_4 (struct subchannel*,int *) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int
FUNC_8 (struct subchannel *VAR_2)
{
 struct ccw_device *VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_3(VAR_2);
 if (!VAR_3)
  goto out_free;
 FUNC_1(VAR_2);

 FUNC_5(VAR_3->ccwlock, VAR_4);
 FUNC_4(VAR_2, ((void*)0));
 VAR_3->private->state = VAR_0;
 FUNC_6(VAR_3->ccwlock, VAR_4);
 FUNC_0(VAR_3);
out_free:
 FUNC_2(VAR_2->private);
 FUNC_7(&VAR_2->dev.kobj, &VAR_1);
 return 0;
}
