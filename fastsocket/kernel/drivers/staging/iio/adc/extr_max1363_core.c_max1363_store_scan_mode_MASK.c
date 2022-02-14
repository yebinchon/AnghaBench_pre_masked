
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1363_state {struct max1363_mode const* current_mode; int chip_info; } ;
struct max1363_mode {int dummy; } ;
struct iio_dev {int mlock; struct max1363_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct max1363_mode* FUNC_0 (int ,char const*) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct max1363_state*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
           struct device_attribute *VAR_3,
           const char *VAR_4,
           size_t VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_1(VAR_2);
 struct max1363_state *VAR_7 = VAR_6->dev_data;
 const struct max1363_mode *VAR_8;
 int VAR_9;

 FUNC_4(&VAR_6->mlock);
 VAR_8 = ((void*)0);

 if (!FUNC_2(VAR_6)) {
  VAR_8
   = FUNC_0(VAR_7->chip_info, VAR_4);
  if (!VAR_8) {
   VAR_9 = -VAR_1;
   goto error_ret;
  }
  VAR_7->current_mode = VAR_8;
  VAR_9 = FUNC_3(VAR_7);
  if (VAR_9)
   goto error_ret;
 } else {
  VAR_9 = -VAR_0;
  goto error_ret;
 }
 FUNC_5(&VAR_6->mlock);

 return VAR_5;

error_ret:
 FUNC_5(&VAR_6->mlock);

 return VAR_9;
}
