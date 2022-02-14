
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct sensor_device_attribute_2 {char index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,char*) ;
 struct sensor_device_attribute_2* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
    struct device_attribute *VAR_4, char *VAR_5)
{
 int VAR_6;
 char VAR_7[5];
 u8 VAR_8[17];
 struct sensor_device_attribute_2 *VAR_9 =
      FUNC_4(VAR_4);

 VAR_7[0] = VAR_0[0];
 VAR_7[1] = '0' + VAR_9->index;
 VAR_7[2] = VAR_0[2];
 VAR_7[3] = VAR_0[3];
 VAR_7[4] = 0;

 FUNC_1(&VAR_2);

 VAR_6 = FUNC_0(VAR_7, VAR_8, 16);
 VAR_8[16] = 0;

 FUNC_2(&VAR_2);
 if (VAR_6)
  return VAR_6;
 else
  return FUNC_3(VAR_5, VAR_1, "%s\n", VAR_8+4);
}
