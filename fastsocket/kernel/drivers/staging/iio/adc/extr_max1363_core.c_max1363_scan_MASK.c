
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {scalar_t__ currentmode; int mlock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,struct device_attribute*,char*) ;
 int FUNC_2 (struct device*,struct device_attribute*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 FUNC_3(&VAR_4->mlock);
 if (VAR_4->currentmode == VAR_0)
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
 else
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_4(&VAR_4->mlock);

 return VAR_5;
}
