
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int*,int) ;
 size_t VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,unsigned int) ;
 char*** VAR_3 ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
   struct device_attribute *VAR_5, char *VAR_6)
{
 int VAR_7;
 u8 VAR_8[2];
 unsigned int VAR_9;
 struct sensor_device_attribute *VAR_10 = FUNC_4(VAR_5);
 const char* VAR_11 =
  VAR_3[VAR_2][VAR_10->index];

 FUNC_1(&VAR_1);

 VAR_7 = FUNC_0(VAR_11, VAR_8, 2);
 VAR_9 = VAR_8[0]*1000;
 VAR_9 += (VAR_8[1] >> 6) * 250;

 FUNC_2(&VAR_1);

 if (VAR_7)
  return VAR_7;
 else
  return FUNC_3(VAR_6, VAR_0, "%u\n", VAR_9);
}
