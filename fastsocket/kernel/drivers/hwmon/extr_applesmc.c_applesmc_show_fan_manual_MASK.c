
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,int) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
   struct device_attribute *VAR_4, char *VAR_5)
{
 int VAR_6;
 u16 VAR_7 = 0;
 u8 VAR_8[2];
 struct sensor_device_attribute *VAR_9 = FUNC_4(VAR_4);

 FUNC_1(&VAR_2);

 VAR_6 = FUNC_0(VAR_0, VAR_8, 2);
 VAR_7 = ((VAR_8[0] << 8 | VAR_8[1]) >> VAR_9->index) & 0x01;

 FUNC_2(&VAR_2);
 if (VAR_6)
  return VAR_6;
 else
  return FUNC_3(VAR_5, VAR_1, "%d\n", VAR_7);
}
