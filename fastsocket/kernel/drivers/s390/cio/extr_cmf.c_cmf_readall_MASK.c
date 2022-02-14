
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmbdata {int dummy; } ;
struct ccw_device {int dummy; } ;
struct TYPE_2__ {int (* readall ) (struct ccw_device*,struct cmbdata*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct ccw_device*,struct cmbdata*) ;

int FUNC_1(struct ccw_device *VAR_1, struct cmbdata *VAR_2)
{
 return VAR_0->readall(VAR_1, VAR_2);
}
