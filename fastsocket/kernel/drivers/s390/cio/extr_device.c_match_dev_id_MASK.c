
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct ccw_device {TYPE_1__* private; } ;
struct ccw_dev_id {int dummy; } ;
struct TYPE_2__ {int dev_id; } ;


 int FUNC_0 (int *,struct ccw_dev_id*) ;
 struct ccw_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct ccw_device *VAR_2 = FUNC_1(VAR_0);
 struct ccw_dev_id *VAR_3 = VAR_1;

 return FUNC_0(&VAR_2->private->dev_id, VAR_3);
}
