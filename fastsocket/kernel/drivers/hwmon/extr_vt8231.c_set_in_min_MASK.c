
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt8231_data {int update_lock; int * in_min; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (unsigned long,int ,int) ;
 struct vt8231_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_0 ;
 unsigned long FUNC_4 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;
 int FUNC_6 (struct vt8231_data*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_5(VAR_2);
 int VAR_6 = VAR_5->index;
 struct vt8231_data *VAR_7 = FUNC_1(VAR_1);
 unsigned long VAR_8 = FUNC_4(VAR_3, ((void*)0), 10);

 FUNC_2(&VAR_7->update_lock);
 VAR_7->in_min[VAR_6] = FUNC_0(((VAR_8 * 958) / 10000) + 3, 0, 255);
 FUNC_6(VAR_7, VAR_0[VAR_6], VAR_7->in_min[VAR_6]);
 FUNC_3(&VAR_7->update_lock);
 return VAR_4;
}
