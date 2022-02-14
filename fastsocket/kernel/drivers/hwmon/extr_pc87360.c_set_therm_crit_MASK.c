
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct pc87360_data {int update_lock; int * in_crit; int in_vref; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct pc87360_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pc87360_data*,int ,int,int ,int ) ;
 long FUNC_5 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3, const char *VAR_4,
 size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_6(VAR_3);
 struct pc87360_data *VAR_7 = FUNC_1(VAR_2);
 long VAR_8 = FUNC_5(VAR_4, ((void*)0), 10);

 FUNC_2(&VAR_7->update_lock);
 VAR_7->in_crit[VAR_6->index-11] = FUNC_0(VAR_8, VAR_7->in_vref);
 FUNC_4(VAR_7, VAR_0, VAR_6->index, VAR_1,
       VAR_7->in_crit[VAR_6->index-11]);
 FUNC_3(&VAR_7->update_lock);
 return VAR_5;
}
