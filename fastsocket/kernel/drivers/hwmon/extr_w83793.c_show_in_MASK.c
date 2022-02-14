
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w83793_data {int** in; int* in_low_bits; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_1 (struct device_attribute*) ;
 struct w83793_data* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct sensor_device_attribute_2 *VAR_5 =
     FUNC_1(VAR_3);
 int VAR_6 = VAR_5->nr;
 int VAR_7 = VAR_5->index;
 struct w83793_data *VAR_8 = FUNC_2(VAR_2);
 u16 VAR_9 = VAR_8->in[VAR_7][VAR_6];

 if (VAR_7 < 3) {
  VAR_9 <<= 2;
  VAR_9 += (VAR_8->in_low_bits[VAR_6] >> (VAR_7 * 2)) & 0x3;
 }

 VAR_9 = VAR_9 * VAR_0[VAR_7] + VAR_1[VAR_7];
 return FUNC_0(VAR_4, "%d\n", VAR_9);
}
