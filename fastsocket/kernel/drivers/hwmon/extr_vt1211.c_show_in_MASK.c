
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt1211_data {int alarms; int * in_max; int * in_min; int * in; } ;
struct sensor_device_attribute_2 {int index; int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,int ) ;




 int* VAR_0 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;
 struct vt1211_data* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct vt1211_data *VAR_4 = FUNC_4(VAR_1);
 struct sensor_device_attribute_2 *VAR_5 =
      FUNC_3(VAR_2);
 int VAR_6 = VAR_5->index;
 int VAR_7 = VAR_5->nr;
 int VAR_8;

 switch (VAR_7) {
 case 130:
  VAR_8 = FUNC_0(VAR_6, VAR_4->in[VAR_6]);
  break;
 case 128:
  VAR_8 = FUNC_0(VAR_6, VAR_4->in_min[VAR_6]);
  break;
 case 129:
  VAR_8 = FUNC_0(VAR_6, VAR_4->in_max[VAR_6]);
  break;
 case 131:
  VAR_8 = (VAR_4->alarms >> VAR_0[VAR_6]) & 1;
  break;
 default:
  VAR_8 = 0;
  FUNC_1(VAR_1, "Unknown attr fetch (%d)\n", VAR_7);
 }

 return FUNC_2(VAR_3, "%d\n", VAR_8);
}
