
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cmb_data {long last_update; } ;
struct ccw_device {int ccwlock; TYPE_1__* private; } ;
typedef int ssize_t ;
struct TYPE_2__ {long cmb_start_time; struct cmb_data* cmb; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct ccw_device*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,long) ;
 struct ccw_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct ccw_device *VAR_4;
 long VAR_5;
 unsigned long VAR_6;
 struct cmb_data *VAR_7;

 VAR_4 = FUNC_4(VAR_1);
 VAR_6 = FUNC_0(VAR_4, VAR_0);
 FUNC_1(VAR_4->ccwlock);
 VAR_7 = VAR_4->private->cmb;
 if (VAR_6) {
  VAR_5 = VAR_7->last_update -
   VAR_4->private->cmb_start_time;
  VAR_5 = (VAR_5 * 1000) >> 12;
  VAR_5 /= VAR_6;
 } else
  VAR_5 = -1;
 FUNC_2(VAR_4->ccwlock);
 return FUNC_3(VAR_3, "%ld\n", VAR_5);
}
