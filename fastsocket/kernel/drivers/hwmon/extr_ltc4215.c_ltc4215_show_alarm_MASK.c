
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sensor_device_attribute_2 {size_t index; int nr; } ;
struct ltc4215_data {int* regs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct ltc4215_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 = FUNC_2(VAR_2);
 struct ltc4215_data *VAR_5 = FUNC_0(VAR_1);
 const u8 VAR_6 = VAR_5->regs[VAR_4->index];
 const u32 VAR_7 = VAR_4->nr;

 return FUNC_1(VAR_3, VAR_0, "%u\n", (VAR_6 & VAR_7) ? 1 : 0);
}
