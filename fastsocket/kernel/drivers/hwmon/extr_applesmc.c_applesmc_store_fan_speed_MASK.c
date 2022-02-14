
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
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
 int FUNC_3 (char const*,int *,int) ;
 struct sensor_device_attribute_2* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 int VAR_7;
 u32 VAR_8;
 char VAR_9[5];
 u8 VAR_10[2];
 struct sensor_device_attribute_2 *VAR_11 =
      FUNC_4(VAR_4);

 VAR_8 = FUNC_3(VAR_5, ((void*)0), 10);

 if (VAR_8 > 0x4000)
  return -VAR_0;

 VAR_9[0] = VAR_2[VAR_11->nr][0];
 VAR_9[1] = '0' + VAR_11->index;
 VAR_9[2] = VAR_2[VAR_11->nr][2];
 VAR_9[3] = VAR_2[VAR_11->nr][3];
 VAR_9[4] = 0;

 FUNC_1(&VAR_1);

 VAR_10[0] = (VAR_8 >> 6) & 0xff;
 VAR_10[1] = (VAR_8 << 2) & 0xff;
 VAR_7 = FUNC_0(VAR_9, VAR_10, 2);

 FUNC_2(&VAR_1);
 if (VAR_7)
  return VAR_7;
 else
  return VAR_6;
}
