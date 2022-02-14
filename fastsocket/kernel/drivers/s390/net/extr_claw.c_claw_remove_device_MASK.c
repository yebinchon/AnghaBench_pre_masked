
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct claw_privbk {TYPE_1__* channel; struct claw_privbk* p_env; struct claw_privbk* p_mtc_envelope; } ;
struct ccwgroup_device {scalar_t__ state; int dev; TYPE_2__** cdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct claw_privbk* irb; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int ,char*,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ccwgroup_device*) ;
 struct claw_privbk* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct claw_privbk*) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_10(struct ccwgroup_device *VAR_4)
{
 struct claw_privbk *VAR_5;

 FUNC_0(!VAR_4);
 FUNC_1(2, VAR_3, "%s", FUNC_6(&VAR_4->dev));
 VAR_5 = FUNC_4(&VAR_4->dev);
 FUNC_0(!VAR_5);
 FUNC_5(&VAR_4->dev, " will be removed.\n");
 if (VAR_4->state == VAR_0)
  FUNC_3(VAR_4);
 FUNC_2(&VAR_4->dev);
 FUNC_8(VAR_5->p_mtc_envelope);
 VAR_5->p_mtc_envelope=((void*)0);
 FUNC_8(VAR_5->p_env);
 VAR_5->p_env=((void*)0);
 FUNC_8(VAR_5->channel[0].irb);
 VAR_5->channel[0].irb=((void*)0);
 FUNC_8(VAR_5->channel[1].irb);
 VAR_5->channel[1].irb=((void*)0);
 FUNC_8(VAR_5);
 FUNC_7(&VAR_4->dev, ((void*)0));
 FUNC_7(&VAR_4->cdev[VAR_1]->dev, ((void*)0));
 FUNC_7(&VAR_4->cdev[VAR_2]->dev, ((void*)0));
 FUNC_9(&VAR_4->dev);

 return;
}
