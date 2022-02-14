
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct temp_data {int valid; int temp; int tjmax; int update_lock; scalar_t__ last_updated; int status_reg; int cpu; } ;
struct sensor_device_attribute {size_t index; } ;
struct platform_data {struct temp_data** core_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct platform_data* FUNC_0 (struct device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int*,int*) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
   struct device_attribute *VAR_4, char *VAR_5)
{
 u32 VAR_6, VAR_7;
 struct sensor_device_attribute *VAR_8 = FUNC_6(VAR_4);
 struct platform_data *VAR_9 = FUNC_0(VAR_3);
 struct temp_data *VAR_10 = VAR_9->core_data[VAR_8->index];

 FUNC_1(&VAR_10->update_lock);


 if (!VAR_10->valid || FUNC_5(VAR_2, VAR_10->last_updated + VAR_1)) {
  FUNC_3(VAR_10->cpu, VAR_10->status_reg, &VAR_6, &VAR_7);
  VAR_10->valid = 0;

  if (VAR_6 & 0x80000000) {
   VAR_10->temp = VAR_10->tjmax -
     ((VAR_6 >> 16) & 0x7f) * 1000;
   VAR_10->valid = 1;
  }
  VAR_10->last_updated = VAR_2;
 }

 FUNC_2(&VAR_10->update_lock);
 return VAR_10->valid ? FUNC_4(VAR_5, "%d\n", VAR_10->temp) : -VAR_0;
}
