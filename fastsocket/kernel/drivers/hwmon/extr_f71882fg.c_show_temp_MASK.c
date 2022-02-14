
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f71882fg_data {scalar_t__ type; int temp_config; int* temp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 scalar_t__ VAR_0 ;
 struct f71882fg_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 TYPE_1__* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
 char *VAR_3)
{
 struct f71882fg_data *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = FUNC_2(VAR_2)->index;
 int VAR_6, VAR_7;

 if (VAR_4->type == VAR_0) {

  if (VAR_4->temp_config & 1) {
   VAR_6 = VAR_4->temp[VAR_5] & 0x0001;
   VAR_7 = (VAR_4->temp[VAR_5] >> 5) & 0x7ff;
  } else {
   VAR_6 = VAR_4->temp[VAR_5] & 0x8000;
   VAR_7 = (VAR_4->temp[VAR_5] >> 5) & 0x3ff;
  }
  VAR_7 *= 125;
  if (VAR_6)
   VAR_7 -= 128000;
 } else
  VAR_7 = VAR_4->temp[VAR_5] * 1000;

 return FUNC_1(VAR_3, "%d\n", VAR_7);
}
