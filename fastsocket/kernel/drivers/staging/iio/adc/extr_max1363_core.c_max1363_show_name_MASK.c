
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max1363_state {TYPE_1__* chip_info; } ;
struct iio_dev {struct max1363_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_0);
 struct max1363_state *VAR_4 = VAR_3->dev_data;
 return FUNC_1(VAR_2, "%s\n", VAR_4->chip_info->name);
}
