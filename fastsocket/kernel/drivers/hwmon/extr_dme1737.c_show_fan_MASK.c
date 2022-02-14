
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; int nr; } ;
struct dme1737_data {int alarms; int * fan_opt; int * fan_max; int * fan_min; int * fan; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;





 int FUNC_4 (struct device*,char*,int) ;
 struct dme1737_data* FUNC_5 (struct device*) ;
 int FUNC_6 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
   char *VAR_3)
{
 struct dme1737_data *VAR_4 = FUNC_5(VAR_1);
 struct sensor_device_attribute_2
  *VAR_5 = FUNC_7(VAR_2);
 int VAR_6 = VAR_5->index;
 int VAR_7 = VAR_5->nr;
 int VAR_8;

 switch (VAR_7) {
 case 131:
  VAR_8 = FUNC_0(VAR_4->fan[VAR_6],
       VAR_6 < 4 ? 0 :
       FUNC_2(VAR_4->fan_opt[VAR_6]));
  break;
 case 129:
  VAR_8 = FUNC_0(VAR_4->fan_min[VAR_6],
       VAR_6 < 4 ? 0 :
       FUNC_2(VAR_4->fan_opt[VAR_6]));
  break;
 case 130:

  VAR_8 = FUNC_1(VAR_4->fan_max[VAR_6 - 4]);
  break;
 case 132:
  VAR_8 = (VAR_4->alarms >> VAR_0[VAR_6]) & 0x01;
  break;
 case 128:

  VAR_8 = FUNC_3(VAR_4->fan_opt[VAR_6]);
  break;
 default:
  VAR_8 = 0;
  FUNC_4(VAR_1, "Unknown function %d.\n", VAR_7);
 }

 return FUNC_6(VAR_3, "%d\n", VAR_8);
}
