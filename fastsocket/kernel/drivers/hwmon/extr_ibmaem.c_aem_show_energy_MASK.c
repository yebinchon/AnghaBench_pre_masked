
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aem_data {scalar_t__* energy; int lock; } ;
typedef int ssize_t ;


 struct aem_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,unsigned long long) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;
 int FUNC_5 (struct aem_data*,size_t) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
          struct device_attribute *VAR_1,
          char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_4(VAR_1);
 struct aem_data *VAR_4 = FUNC_0(VAR_0);
 FUNC_1(&VAR_4->lock);
 FUNC_5(VAR_4, VAR_3->index);
 FUNC_2(&VAR_4->lock);

 return FUNC_3(VAR_2, "%llu\n",
   (unsigned long long)VAR_4->energy[VAR_3->index] * 1000);
}
