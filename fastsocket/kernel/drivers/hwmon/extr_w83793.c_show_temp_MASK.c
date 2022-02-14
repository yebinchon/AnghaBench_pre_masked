
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83793_data {int temp_low_bits; int ** temp; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 long FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,long) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;
 struct w83793_data* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 =
     FUNC_2(VAR_2);
 int VAR_5 = VAR_4->nr;
 int VAR_6 = VAR_4->index;
 struct w83793_data *VAR_7 = FUNC_3(VAR_1);
 long VAR_8 = FUNC_0(VAR_7->temp[VAR_6][VAR_5]);

 if (VAR_0 == VAR_5 && VAR_6 < 4) {
  int VAR_9 = ((VAR_7->temp_low_bits >> (VAR_6 * 2)) & 0x03) * 250;
  VAR_8 += VAR_8 > 0 ? VAR_9 : -VAR_9;
 }
 return FUNC_1(VAR_3, "%ld\n", VAR_8);
}
