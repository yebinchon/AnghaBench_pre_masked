
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 u8 VAR_7[2];
 u32 VAR_8;
 u16 VAR_9;
 struct sensor_device_attribute *VAR_10 = FUNC_5(VAR_3);

 VAR_8 = FUNC_4(VAR_4, ((void*)0), 10);

 FUNC_2(&VAR_1);

 VAR_6 = FUNC_0(VAR_0, VAR_7, 2);
 VAR_9 = (VAR_7[0] << 8 | VAR_7[1]);
 if (VAR_6)
  goto out;

 if (VAR_8)
  VAR_9 = VAR_9 | (0x01 << VAR_10->index);
 else
  VAR_9 = VAR_9 & ~(0x01 << VAR_10->index);

 VAR_7[0] = (VAR_9 >> 8) & 0xFF;
 VAR_7[1] = VAR_9 & 0xFF;

 VAR_6 = FUNC_1(VAR_0, VAR_7, 2);

out:
 FUNC_3(&VAR_1);
 if (VAR_6)
  return VAR_6;
 else
  return VAR_5;
}
