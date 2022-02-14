
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {TYPE_1__* trig; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0;
 if (VAR_4->trig)
  VAR_5 = FUNC_1(VAR_3,
          VAR_0,
          "%s\n",
          VAR_4->trig->name);
 return VAR_5;
}
