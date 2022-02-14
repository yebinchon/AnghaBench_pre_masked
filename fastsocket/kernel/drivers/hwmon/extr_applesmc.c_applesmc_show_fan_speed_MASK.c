
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute_2 {size_t nr; char index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int*,int) ;
 char** VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,unsigned int) ;
 struct sensor_device_attribute_2* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
    struct device_attribute *VAR_4, char *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7 = 0;
 char VAR_8[5];
 u8 VAR_9[2];
 struct sensor_device_attribute_2 *VAR_10 =
      FUNC_4(VAR_4);

 VAR_8[0] = VAR_2[VAR_10->nr][0];
 VAR_8[1] = '0' + VAR_10->index;
 VAR_8[2] = VAR_2[VAR_10->nr][2];
 VAR_8[3] = VAR_2[VAR_10->nr][3];
 VAR_8[4] = 0;

 FUNC_1(&VAR_1);

 VAR_6 = FUNC_0(VAR_8, VAR_9, 2);
 VAR_7 = ((VAR_9[0] << 8 | VAR_9[1]) >> 2);

 FUNC_2(&VAR_1);
 if (VAR_6)
  return VAR_6;
 else
  return FUNC_3(VAR_5, VAR_0, "%u\n", VAR_7);
}
