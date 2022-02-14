
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via686a_data {int update_lock; int * in_min; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (int) ;
 struct via686a_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct via686a_data*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0, struct device_attribute *VAR_1,
  const char *VAR_2, size_t VAR_3) {
 struct via686a_data *VAR_4 = FUNC_2(VAR_0);
 struct sensor_device_attribute *VAR_5 = FUNC_6(VAR_1);
 int VAR_6 = VAR_5->index;
 unsigned long VAR_7 = FUNC_5(VAR_2, ((void*)0), 10);

 FUNC_3(&VAR_4->update_lock);
 VAR_4->in_min[VAR_6] = FUNC_0(VAR_7, VAR_6);
 FUNC_7(VAR_4, FUNC_1(VAR_6),
   VAR_4->in_min[VAR_6]);
 FUNC_4(&VAR_4->update_lock);
 return VAR_3;
}
