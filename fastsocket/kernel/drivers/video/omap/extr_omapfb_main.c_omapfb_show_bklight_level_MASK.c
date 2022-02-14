
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_device {TYPE_1__* panel; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int (* get_bklight_level ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct omapfb_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
      struct device_attribute *VAR_3,
      char *VAR_4)
{
 struct omapfb_device *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 if (VAR_5->panel->get_bklight_level) {
  VAR_6 = FUNC_1(VAR_4, VAR_1, "%d\n",
        VAR_5->panel->get_bklight_level(VAR_5->panel));
 } else
  VAR_6 = -VAR_0;
 return VAR_6;
}
