
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct subchannel {int dev; } ;
struct TYPE_7__ {int groups; int release; int * parent; } ;
struct ccw_device {TYPE_2__* private; TYPE_3__ dev; } ;
struct TYPE_5__ {int initialized; } ;
struct TYPE_6__ {TYPE_1__ flags; int todo_work; int onoff; struct ccw_device* cdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(struct subchannel *VAR_4,
     struct ccw_device *VAR_5)
{
 VAR_5->private->cdev = VAR_5;
 FUNC_1(&VAR_5->private->onoff, 0);
 VAR_5->dev.parent = &VAR_4->dev;
 VAR_5->dev.release = VAR_1;
 FUNC_0(&VAR_5->private->todo_work, VAR_2);
 VAR_5->dev.groups = VAR_3;

 FUNC_2(&VAR_5->dev);
 if (!FUNC_3(&VAR_4->dev)) {

  FUNC_4(&VAR_5->dev);
  return -VAR_0;
 }
 VAR_5->private->flags.initialized = 1;
 return 0;
}
