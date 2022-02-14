
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sca3000_state {TYPE_1__* info; } ;
struct iio_dev {struct sca3000_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int option_mode_1; int option_mode_2; } ;





 struct iio_dev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0,
      struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_0);
 struct sca3000_state *VAR_4 = VAR_3->dev_data;
 int VAR_5 = 0;

 VAR_5 += FUNC_1(VAR_2 + VAR_5, "0 - normal mode");
 switch (VAR_4->info->option_mode_1) {
 case 129:
  VAR_5 += FUNC_1(VAR_2 + VAR_5, ", 1 - narrow mode");
  break;
 case 130:
  VAR_5 += FUNC_1(VAR_2 + VAR_5, ", 1 - bypass mode");
  break;
 };
 switch (VAR_4->info->option_mode_2) {
 case 128:
  VAR_5 += FUNC_1(VAR_2 + VAR_5, ", 2 - wide mode");
  break;
 }

 VAR_5 += FUNC_1(VAR_2 + VAR_5, " 3 - motion detection \n");

 return VAR_5;
}
