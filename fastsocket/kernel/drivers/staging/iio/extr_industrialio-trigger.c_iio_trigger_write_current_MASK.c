
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_dev {scalar_t__ currentmode; struct iio_trigger* trig; int mlock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iio_trigger*) ;
 int FUNC_2 (struct iio_trigger*) ;
 struct iio_trigger* FUNC_3 (char const*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5,
      size_t VAR_6)
{
 struct iio_dev *VAR_7 = FUNC_0(VAR_3);
 struct iio_trigger *VAR_8 = VAR_7->trig;
 FUNC_4(&VAR_7->mlock);
 if (VAR_7->currentmode == VAR_2) {
  FUNC_5(&VAR_7->mlock);
  return -VAR_0;
 }
 FUNC_5(&VAR_7->mlock);

 VAR_6 = VAR_6 < VAR_1 ? VAR_6 : VAR_1;

 VAR_7->trig = FUNC_3(VAR_5, VAR_6);
 if (VAR_8 && VAR_7->trig != VAR_8)
  FUNC_2(VAR_8);
 if (VAR_7->trig)
  FUNC_1(VAR_7->trig);

 return VAR_6;
}
