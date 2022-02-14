
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct w83627ehf_data {int* tolerance; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int * VAR_0 ;
 struct w83627ehf_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int *,int) ;
 int FUNC_4 (int ,int ,int) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;
 int FUNC_6 (struct w83627ehf_data*,int ) ;
 int FUNC_7 (struct w83627ehf_data*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 struct w83627ehf_data *VAR_5 = FUNC_0(VAR_1);
 struct sensor_device_attribute *VAR_6 = FUNC_5(VAR_2);
 int VAR_7 = VAR_6->index;
 u16 VAR_8;

 u8 VAR_9 = FUNC_4(FUNC_3(VAR_3, ((void*)0), 10), 0, 15000);

 FUNC_1(&VAR_5->update_lock);
 VAR_8 = FUNC_6(VAR_5, VAR_0[VAR_7]);
 VAR_5->tolerance[VAR_7] = VAR_9;
 if (VAR_7 == 1)
  VAR_8 = (VAR_8 & 0x0f) | (VAR_9 << 4);
 else
  VAR_8 = (VAR_8 & 0xf0) | VAR_9;
 FUNC_7(VAR_5, VAR_0[VAR_7], VAR_8);
 FUNC_2(&VAR_5->update_lock);
 return VAR_4;
}
