
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sca3000_state {int lock; TYPE_1__* info; } ;
struct iio_dev {struct sca3000_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int option_mode_2; int option_mode_1; } ;
 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sca3000_state*,int ,int**,int) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_1);
 struct sca3000_state *VAR_5 = VAR_4->dev_data;
 int VAR_6 = 0, VAR_7;
 u8 *VAR_8;

 FUNC_1(&VAR_5->lock);
 VAR_7 = FUNC_3(VAR_5, VAR_0, &VAR_8, 1);
 if (VAR_7)
  goto error_ret;

 VAR_8[1] &= 0x03;
 switch (VAR_8[1]) {
 case 133:
  VAR_6 += FUNC_4(VAR_3 + VAR_6, "0 - normal mode\n");
  break;
 case 134:
  VAR_6 += FUNC_4(VAR_3 + VAR_6, "3 - motion detection\n");
  break;
 case 132:
  switch (VAR_5->info->option_mode_1) {
  case 129:
   VAR_6 += FUNC_4(VAR_3 + VAR_6, "1 - narrow mode\n");
   break;
  case 130:
   VAR_6 += FUNC_4(VAR_3 + VAR_6, "1 - bypass mode\n");
   break;
  };
  break;
 case 131:
  switch (VAR_5->info->option_mode_2) {
  case 128:
   VAR_6 += FUNC_4(VAR_3 + VAR_6, "2 - wide mode\n");
   break;
  }
  break;
 };

error_ret:
 FUNC_2(&VAR_5->lock);

 return VAR_7 ? VAR_7 : VAR_6;
}
