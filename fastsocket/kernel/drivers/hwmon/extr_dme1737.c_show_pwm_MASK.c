
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; int nr; } ;
struct dme1737_data {int* pwm; int* pwm_acz; int* pwm_min; int * pwm_rr; int * pwm_config; int * pwm_freq; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct device*,char*,int) ;
 struct dme1737_data* FUNC_6 (struct device*) ;
 int FUNC_7 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_0, struct device_attribute *VAR_1,
   char *VAR_2)
{
 struct dme1737_data *VAR_3 = FUNC_6(VAR_0);
 struct sensor_device_attribute_2
  *VAR_4 = FUNC_8(VAR_1);
 int VAR_5 = VAR_4->index;
 int VAR_6 = VAR_4->nr;
 int VAR_7;

 switch (VAR_6) {
 case 135:
  if (FUNC_1(VAR_3->pwm_config[VAR_5]) == 0) {
   VAR_7 = 255;
  } else {
   VAR_7 = VAR_3->pwm[VAR_5];
  }
  break;
 case 129:
  VAR_7 = FUNC_2(VAR_3->pwm_freq[VAR_5]);
  break;
 case 130:
  if (VAR_5 >= 3) {
   VAR_7 = 1;
  } else {
   VAR_7 = FUNC_1(VAR_3->pwm_config[VAR_5]);
  }
  break;
 case 128:

  VAR_7 = FUNC_4(VAR_3->pwm_rr[VAR_5 > 0], VAR_5);
  break;
 case 134:

  if (FUNC_1(VAR_3->pwm_config[VAR_5]) == 2) {
   VAR_7 = FUNC_0(VAR_3->pwm_config[VAR_5]);
  } else {
   VAR_7 = VAR_3->pwm_acz[VAR_5];
  }
  break;
 case 131:

  if (FUNC_3(VAR_3->pwm_rr[0], VAR_5)) {
   VAR_7 = VAR_3->pwm_min[VAR_5];
  } else {
   VAR_7 = 0;
  }
  break;
 case 133:

  VAR_7 = VAR_3->pwm_min[VAR_5];
  break;
 case 132:

  VAR_7 = 255;
  break;
 default:
  VAR_7 = 0;
  FUNC_5(VAR_0, "Unknown function %d.\n", VAR_6);
 }

 return FUNC_7(VAR_2, "%d\n", VAR_7);
}
