
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ccw_device {TYPE_2__* private; } ;
struct TYPE_3__ {int sch_no; } ;
struct TYPE_4__ {TYPE_1__ schid; } ;



int
FUNC_0(struct ccw_device *VAR_0)
{
 return VAR_0->private->schid.sch_no;
}
