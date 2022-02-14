
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct pc87427_data {int* address; int lock; int * fan_min; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct pc87427_data* FUNC_1 (struct device*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 unsigned long FUNC_7 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_5, struct device_attribute
      *VAR_6, const char *VAR_7, size_t VAR_8)
{
 struct pc87427_data *VAR_9 = FUNC_1(VAR_5);
 struct sensor_device_attribute *VAR_10 = FUNC_8(VAR_6);
 int VAR_11 = VAR_10->index;
 unsigned long VAR_12 = FUNC_7(VAR_7, ((void*)0), 10);
 int VAR_13 = VAR_9->address[VAR_1];

 FUNC_3(&VAR_9->lock);
 FUNC_5(FUNC_0(VAR_11), VAR_13 + VAR_2);



 FUNC_5(0, VAR_13 + VAR_4);
 VAR_9->fan_min[VAR_11] = FUNC_2(VAR_12);
 FUNC_6(VAR_9->fan_min[VAR_11], VAR_13 + VAR_3);
 FUNC_5(VAR_0, VAR_13 + VAR_4);
 FUNC_4(&VAR_9->lock);

 return VAR_8;
}
