
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; int nr; } ;
struct dme1737_data {int config2; int * zone_abs; int * pwm_freq; int * zone_low; int * zone_hyst; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;







 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct dme1737_data* FUNC_4 (struct device*) ;
 int FUNC_5 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct dme1737_data *VAR_3 = FUNC_4(VAR_0);
 struct sensor_device_attribute_2
  *VAR_4 = FUNC_6(VAR_1);
 int VAR_5 = VAR_4->index;
 int VAR_6 = VAR_4->nr;
 int VAR_7;

 switch (VAR_6) {
 case 132:

  if ((VAR_5 == 1) && (VAR_3->config2 & 0x02)) {
   VAR_7 = 4;
  } else {
   VAR_7 = 1 << VAR_5;
  }
  break;
 case 130:
  VAR_7 = FUNC_0(VAR_3->zone_low[VAR_5], 8) -
        FUNC_1(VAR_3->zone_hyst[VAR_5 == 2], VAR_5);
  break;
 case 131:
  VAR_7 = FUNC_0(VAR_3->zone_low[VAR_5], 8);
  break;
 case 129:

  VAR_7 = FUNC_0(VAR_3->zone_low[VAR_5], 8) +
        FUNC_2(VAR_3->pwm_freq[VAR_5]);
  break;
 case 128:
  VAR_7 = FUNC_0(VAR_3->zone_abs[VAR_5], 8);
  break;
 default:
  VAR_7 = 0;
  FUNC_3(VAR_0, "Unknown function %d.\n", VAR_6);
 }

 return FUNC_5(VAR_2, "%d\n", VAR_7);
}
