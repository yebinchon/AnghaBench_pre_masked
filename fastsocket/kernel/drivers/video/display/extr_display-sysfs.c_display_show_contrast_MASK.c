
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct display_device {int lock; TYPE_1__* driver; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_contrast ) (struct display_device*) ;} ;


 int VAR_0 ;
 struct display_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (struct display_device*) ;
 int FUNC_6 (struct display_device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct display_device *VAR_4 = FUNC_0(VAR_1);
 ssize_t VAR_5 = -VAR_0;

 FUNC_2(&VAR_4->lock);
 if (FUNC_1(VAR_4->driver) && VAR_4->driver->get_contrast)
  VAR_5 = FUNC_4(VAR_3, "%d\n", VAR_4->driver->get_contrast(VAR_4));
 FUNC_3(&VAR_4->lock);
 return VAR_5;
}
