
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ccw_device {TYPE_2__* private; TYPE_1__* drv; } ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ state; int onoff; int todo_work; } ;
struct TYPE_3__ {int owner; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ccw_device*) ;
 int FUNC_5 (struct ccw_device*,int) ;
 int FUNC_6 (char const*,int,unsigned long*) ;
 int FUNC_7 (char const*,char*,size_t) ;
 struct ccw_device* FUNC_8 (struct device*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static ssize_t FUNC_11 (struct device *VAR_3, struct device_attribute *VAR_4,
        const char *VAR_5, size_t VAR_6)
{
 struct ccw_device *VAR_7 = FUNC_8(VAR_3);
 int VAR_8, VAR_9;
 unsigned long VAR_10;


 if (FUNC_0(&VAR_7->private->onoff, 0, 1) != 0)
  return -VAR_1;

 if (!FUNC_2(VAR_7) &&
     VAR_7->private->state != VAR_0) {
  VAR_9 = -VAR_1;
  goto out_onoff;
 }

 if (FUNC_10(&VAR_7->private->todo_work)) {
  VAR_9 = -VAR_1;
  goto out_onoff;
 }

 if (VAR_7->drv && !FUNC_9(VAR_7->drv->owner)) {
  VAR_9 = -VAR_2;
  goto out_onoff;
 }
 if (!FUNC_7(VAR_5, "force\n", VAR_6)) {
  VAR_8 = 1;
  VAR_10 = 1;
  VAR_9 = 0;
 } else {
  VAR_8 = 0;
  VAR_9 = FUNC_6(VAR_5, 16, &VAR_10);
 }
 if (VAR_9)
  goto out;
 switch (VAR_10) {
 case 0:
  VAR_9 = FUNC_4(VAR_7);
  break;
 case 1:
  VAR_9 = FUNC_5(VAR_7, VAR_8);
  break;
 default:
  VAR_9 = -VAR_2;
 }
out:
 if (VAR_7->drv)
  FUNC_3(VAR_7->drv->owner);
out_onoff:
 FUNC_1(&VAR_7->private->onoff, 0);
 return (VAR_9 < 0) ? VAR_9 : VAR_6;
}
