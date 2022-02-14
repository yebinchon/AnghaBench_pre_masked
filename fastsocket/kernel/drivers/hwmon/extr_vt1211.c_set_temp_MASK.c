
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt1211_data {int update_lock; void** temp_hyst; void** temp_max; } ;
struct sensor_device_attribute_2 {int index; int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;




 void* FUNC_0 (int,long) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct vt1211_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 long FUNC_5 (char const*,int *,int) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct vt1211_data*,int ,void*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2, struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 struct vt1211_data *VAR_6 = FUNC_2(VAR_2);
 struct sensor_device_attribute_2 *VAR_7 =
      FUNC_6(VAR_3);
 int VAR_8 = VAR_7->index;
 int VAR_9 = VAR_7->nr;
 long VAR_10 = FUNC_5(VAR_4, ((void*)0), 10);

 FUNC_3(&VAR_6->update_lock);
 switch (VAR_9) {
 case 129:
  VAR_6->temp_max[VAR_8] = FUNC_0(VAR_8, VAR_10);
  FUNC_7(VAR_6, VAR_1[VAR_8],
         VAR_6->temp_max[VAR_8]);
  break;
 case 128:
  VAR_6->temp_hyst[VAR_8] = FUNC_0(VAR_8, VAR_10);
  FUNC_7(VAR_6, VAR_0[VAR_8],
         VAR_6->temp_hyst[VAR_8]);
  break;
 default:
  FUNC_1(VAR_2, "Unknown attr fetch (%d)\n", VAR_9);
 }
 FUNC_4(&VAR_6->update_lock);

 return VAR_5;
}
