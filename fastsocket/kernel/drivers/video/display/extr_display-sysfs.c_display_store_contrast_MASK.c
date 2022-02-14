
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct display_device {int lock; TYPE_1__* driver; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* set_contrast ) (struct display_device*,int) ;} ;


 size_t VAR_0 ;
 struct display_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char const*,char**,int ) ;
 int FUNC_7 (struct display_device*,int) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct display_device *VAR_5 = FUNC_0(VAR_1);
 ssize_t VAR_6 = -VAR_0, VAR_7;
 int VAR_8;
 char *VAR_9;

 VAR_8 = FUNC_6(VAR_3, &VAR_9, 0);
 VAR_7 = VAR_9 - VAR_3;

 if (FUNC_1(*VAR_9))
  VAR_7++;

 if (VAR_7 != VAR_4)
  return VAR_6;

 FUNC_3(&VAR_5->lock);
 if (FUNC_2(VAR_5->driver && VAR_5->driver->set_contrast)) {
  FUNC_5("display: set contrast to %d\n", VAR_8);
  VAR_5->driver->set_contrast(VAR_5, VAR_8);
  VAR_6 = VAR_4;
 }
 FUNC_4(&VAR_5->lock);
 return VAR_6;
}
