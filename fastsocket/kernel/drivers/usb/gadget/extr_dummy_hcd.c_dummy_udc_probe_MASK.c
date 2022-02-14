
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_12__ {int release; int * parent; } ;
struct TYPE_10__ {int is_dualspeed; int is_otg; TYPE_5__ dev; int * ops; int name; } ;
struct dummy {TYPE_2__ gadget; } ;
struct TYPE_9__ {scalar_t__ otg_port; } ;
struct TYPE_11__ {TYPE_1__ self; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,char*) ;
 int FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_4 (struct dummy*) ;
 int VAR_3 ;
 int FUNC_5 (struct platform_device*,struct dummy*) ;
 struct dummy* VAR_4 ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_7 (struct platform_device *VAR_5)
{
 struct dummy *VAR_6 = VAR_4;
 int VAR_7;

 VAR_6->gadget.name = VAR_3;
 VAR_6->gadget.ops = &VAR_2;
 VAR_6->gadget.is_dualspeed = 1;


 VAR_6->gadget.is_otg = (FUNC_4(VAR_6)->self.otg_port != 0);

 FUNC_0(&VAR_6->gadget.dev, "gadget");
 VAR_6->gadget.dev.parent = &VAR_5->dev;
 VAR_6->gadget.dev.release = VAR_1;
 VAR_7 = FUNC_2 (&VAR_6->gadget.dev);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_6 (FUNC_4 (VAR_6));

 FUNC_5 (VAR_5, VAR_6);
 VAR_7 = FUNC_1 (&VAR_6->gadget.dev, &VAR_0);
 if (VAR_7 < 0)
  FUNC_3 (&VAR_6->gadget.dev);
 return VAR_7;
}
