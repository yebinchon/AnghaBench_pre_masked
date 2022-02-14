
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; int * ml_priv; int name; } ;
struct claw_privbk {TYPE_2__* p_env; TYPE_1__* channel; } ;
struct ccwgroup_device {int * cdev; int dev; } ;
struct TYPE_4__ {int * ndev; } ;
struct TYPE_3__ {struct net_device* ndev; } ;


 int FUNC_0 (int,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*) ;
 struct claw_privbk* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int
FUNC_8(struct ccwgroup_device *VAR_5)
{
 struct claw_privbk *VAR_6;
 struct net_device *VAR_7;
 int VAR_8;

 FUNC_0(2, VAR_4, "%s", FUNC_6(&VAR_5->dev));
 VAR_6 = FUNC_4(&VAR_5->dev);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = VAR_6->channel[VAR_2].ndev;
 if (VAR_7) {

  FUNC_5(&VAR_5->dev, "%s: shutting down \n",
   VAR_7->name);
  if (VAR_7->flags & VAR_1)
   VAR_8 = FUNC_3(VAR_7);
  VAR_7->flags &=~VAR_1;
  FUNC_7(VAR_7);
  VAR_7->ml_priv = ((void*)0);
  FUNC_2(VAR_7, 1);
  VAR_6->channel[VAR_2].ndev = ((void*)0);
  VAR_6->channel[VAR_3].ndev = ((void*)0);
  VAR_6->p_env->ndev = ((void*)0);
 }
 FUNC_1(VAR_5->cdev[1]);
 FUNC_1(VAR_5->cdev[0]);
 return 0;
}
