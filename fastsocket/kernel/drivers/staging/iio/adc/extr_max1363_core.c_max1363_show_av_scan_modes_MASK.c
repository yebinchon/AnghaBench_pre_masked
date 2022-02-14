
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct max1363_state {TYPE_1__* chip_info; } ;
struct iio_dev {struct max1363_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {int num_modes; size_t* mode_list; } ;


 struct iio_dev* FUNC_0 (struct device*) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_1);
 struct max1363_state *VAR_5 = VAR_4->dev_data;
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_5->chip_info->num_modes; VAR_6++)
  VAR_7 += FUNC_1(VAR_3 + VAR_7, "%s ",
          VAR_0[VAR_5->chip_info
        ->mode_list[VAR_6]].name);
 VAR_7 += FUNC_1(VAR_3 + VAR_7, "\n");

 return VAR_7;
}
