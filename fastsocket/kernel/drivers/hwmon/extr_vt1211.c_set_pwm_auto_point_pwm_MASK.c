
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt1211_data {long** pwm_auto_pwm; int update_lock; } ;
struct sensor_device_attribute_2 {int index; int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct device*,char*,long) ;
 struct vt1211_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 long FUNC_5 (char const*,int *,int) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct vt1211_data*,int ,long) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
          struct device_attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct vt1211_data *VAR_5 = FUNC_2(VAR_1);
 struct sensor_device_attribute_2 *VAR_6 =
      FUNC_6(VAR_2);
 int VAR_7 = VAR_6->index;
 int VAR_8 = VAR_6->nr;
 long VAR_9 = FUNC_5(VAR_3, ((void*)0), 10);

 if ((VAR_9 < 0) || (VAR_9 > 255)) {
  FUNC_1(VAR_1, "pwm value %ld is out of range. "
   "Choose a value between 0 and 255.\n" , VAR_9);
  return -VAR_0;
 }

 FUNC_3(&VAR_5->update_lock);
 VAR_5->pwm_auto_pwm[VAR_7][VAR_8] = VAR_9;
 FUNC_7(VAR_5, FUNC_0(VAR_7, VAR_8),
        VAR_5->pwm_auto_pwm[VAR_7][VAR_8]);
 FUNC_4(&VAR_5->update_lock);

 return VAR_4;
}
