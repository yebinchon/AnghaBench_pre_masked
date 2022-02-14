
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; int nr; } ;
struct dme1737_data {int update_lock; void** in_max; int * in_nominal; void** in_min; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (long,int ) ;


 int FUNC_3 (struct device*,char*,int) ;
 struct dme1737_data* FUNC_4 (struct device*) ;
 int FUNC_5 (struct dme1737_data*,int ,void*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 long FUNC_8 (char const*,int *,int) ;
 struct sensor_device_attribute_2* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_0, struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct dme1737_data *VAR_4 = FUNC_4(VAR_0);
 struct sensor_device_attribute_2
  *VAR_5 = FUNC_9(VAR_1);
 int VAR_6 = VAR_5->index;
 int VAR_7 = VAR_5->nr;
 long VAR_8 = FUNC_8(VAR_2, ((void*)0), 10);

 FUNC_6(&VAR_4->update_lock);
 switch (VAR_7) {
 case 128:
  VAR_4->in_min[VAR_6] = FUNC_2(VAR_8, VAR_4->in_nominal[VAR_6]);
  FUNC_5(VAR_4, FUNC_1(VAR_6),
         VAR_4->in_min[VAR_6]);
  break;
 case 129:
  VAR_4->in_max[VAR_6] = FUNC_2(VAR_8, VAR_4->in_nominal[VAR_6]);
  FUNC_5(VAR_4, FUNC_0(VAR_6),
         VAR_4->in_max[VAR_6]);
  break;
 default:
  FUNC_3(VAR_0, "Unknown function %d.\n", VAR_7);
 }
 FUNC_7(&VAR_4->update_lock);

 return VAR_3;
}
