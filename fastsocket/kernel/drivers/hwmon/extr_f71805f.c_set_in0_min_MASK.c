
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct f71805f_data {int update_lock; int * in_low; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 struct f71805f_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct f71805f_data*,int ,int ) ;
 int FUNC_3 (long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 long FUNC_6 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0, struct device_attribute
      *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct f71805f_data *VAR_4 = FUNC_1(VAR_0);
 struct sensor_device_attribute *VAR_5 = FUNC_7(VAR_1);
 int VAR_6 = VAR_5->index;
 long VAR_7 = FUNC_6(VAR_2, ((void*)0), 10);

 FUNC_4(&VAR_4->update_lock);
 VAR_4->in_low[VAR_6] = FUNC_3(VAR_7);
 FUNC_2(VAR_4, FUNC_0(VAR_6), VAR_4->in_low[VAR_6]);
 FUNC_5(&VAR_4->update_lock);

 return VAR_3;
}
