
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcd_device {int ops_lock; TYPE_1__* ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* set_contrast ) (struct lcd_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char const*,char**,int ) ;
 int FUNC_5 (struct lcd_device*,int) ;
 struct lcd_device* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = -VAR_1;
 char *VAR_7;
 struct lcd_device *VAR_8 = FUNC_6(VAR_2);
 int VAR_9 = FUNC_4(VAR_4, &VAR_7, 0);
 size_t VAR_10 = VAR_7 - VAR_4;

 if (FUNC_0(*VAR_7))
  VAR_10++;
 if (VAR_10 != VAR_5)
  return -VAR_0;

 FUNC_1(&VAR_8->ops_lock);
 if (VAR_8->ops && VAR_8->ops->set_contrast) {
  FUNC_3("lcd: set contrast to %d\n", VAR_9);
  VAR_8->ops->set_contrast(VAR_8, VAR_9);
  VAR_6 = VAR_5;
 }
 FUNC_2(&VAR_8->ops_lock);

 return VAR_6;
}
