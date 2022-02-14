
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct ccw_device {struct ccw_device* private; TYPE_1__ dev; } ;


 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (int ) ;
 struct ccw_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void
FUNC_3(struct device *VAR_0)
{
 struct ccw_device *VAR_1;

 VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->dev.parent);
 FUNC_0(VAR_1->private);
 FUNC_0(VAR_1);
}
