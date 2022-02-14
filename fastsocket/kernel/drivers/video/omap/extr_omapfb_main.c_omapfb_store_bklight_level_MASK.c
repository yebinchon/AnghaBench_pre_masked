
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_device {TYPE_1__* panel; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* set_bklight_level ) (TYPE_1__*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct omapfb_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,char*,unsigned int*) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
       struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 struct omapfb_device *VAR_6 = FUNC_0(VAR_2);
 int VAR_7;

 if (VAR_6->panel->set_bklight_level) {
  unsigned int VAR_8;

  if (FUNC_1(VAR_4, "%10d", &VAR_8) == 1) {
   VAR_7 = VAR_6->panel->set_bklight_level(VAR_6->panel,
           VAR_8);
  } else
   VAR_7 = -VAR_0;
 } else
  VAR_7 = -VAR_1;
 return VAR_7 ? VAR_7 : VAR_5;
}
