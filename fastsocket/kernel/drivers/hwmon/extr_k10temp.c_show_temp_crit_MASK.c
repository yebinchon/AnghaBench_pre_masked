
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct device*) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_3(VAR_2);
 int VAR_5 = VAR_4->index;
 u32 VAR_6;
 int VAR_7;

 FUNC_0(FUNC_2(VAR_1),
         VAR_0, &VAR_6);
 VAR_7 = ((VAR_6 >> 16) & 0x7f) * 500 + 52000;
 if (VAR_5)
  VAR_7 -= ((VAR_6 >> 24) & 0xf) * 500;
 return FUNC_1(VAR_3, "%d\n", VAR_7);
}
