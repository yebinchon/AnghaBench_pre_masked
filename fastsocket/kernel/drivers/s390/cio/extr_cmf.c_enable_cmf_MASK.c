
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct ccw_device {TYPE_1__ dev; } ;
struct TYPE_4__ {int (* alloc ) (struct ccw_device*) ;int (* set ) (struct ccw_device*,int) ;int (* free ) (struct ccw_device*) ;int attr_group; int (* reset ) (struct ccw_device*) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (struct ccw_device*,int) ;
 int FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct ccw_device*,int) ;
 int FUNC_5 (struct ccw_device*) ;
 int FUNC_6 (int *,int ) ;

int FUNC_7(struct ccw_device *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0->alloc(VAR_1);
 VAR_0->reset(VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_2 = VAR_0->set(VAR_1, 2);
 if (VAR_2) {
  VAR_0->free(VAR_1);
  return VAR_2;
 }
 VAR_2 = FUNC_6(&VAR_1->dev.kobj, VAR_0->attr_group);
 if (!VAR_2)
  return 0;
 VAR_0->set(VAR_1, 0);
 VAR_0->free(VAR_1);
 return VAR_2;
}
