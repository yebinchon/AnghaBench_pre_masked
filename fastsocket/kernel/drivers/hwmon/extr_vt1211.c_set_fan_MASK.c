
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt1211_data {int* fan_div; int fan_ctl; int* fan_min; int update_lock; } ;
struct sensor_device_attribute_2 {int index; int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (long,int) ;


 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct vt1211_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*,long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 long FUNC_7 (char const*,int *,int) ;
 struct sensor_device_attribute_2* FUNC_8 (struct device_attribute*) ;
 int FUNC_9 (struct vt1211_data*,int ) ;
 int FUNC_10 (struct vt1211_data*,int ,int) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_2, struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct vt1211_data *VAR_6 = FUNC_3(VAR_2);
 struct sensor_device_attribute_2 *VAR_7 =
      FUNC_8(VAR_3);
 int VAR_8 = VAR_7->index;
 int VAR_9 = VAR_7->nr;
 long VAR_10 = FUNC_7(VAR_4, ((void*)0), 10);
 int VAR_11;

 FUNC_5(&VAR_6->update_lock);


 VAR_11 = FUNC_9(VAR_6, VAR_1);
 VAR_6->fan_div[0] = (VAR_11 >> 4) & 3;
 VAR_6->fan_div[1] = (VAR_11 >> 6) & 3;
 VAR_6->fan_ctl = VAR_11 & 0xf;

 switch (VAR_9) {
 case 128:
  VAR_6->fan_min[VAR_8] = FUNC_0(VAR_10, VAR_6->fan_div[VAR_8]);
  FUNC_10(VAR_6, FUNC_1(VAR_8),
         VAR_6->fan_min[VAR_8]);
  break;
 case 129:
  switch (VAR_10) {
   case 1: VAR_6->fan_div[VAR_8] = 0; break;
   case 2: VAR_6->fan_div[VAR_8] = 1; break;
   case 4: VAR_6->fan_div[VAR_8] = 2; break;
   case 8: VAR_6->fan_div[VAR_8] = 3; break;
   default:
    VAR_5 = -VAR_0;
    FUNC_4(VAR_2, "fan div value %ld not "
      "supported. Choose one of 1, 2, "
      "4, or 8.\n", VAR_10);
    goto EXIT;
  }
  FUNC_10(VAR_6, VAR_1,
         ((VAR_6->fan_div[1] << 6) |
          (VAR_6->fan_div[0] << 4) |
    VAR_6->fan_ctl));
  break;
 default:
  FUNC_2(VAR_2, "Unknown attr fetch (%d)\n", VAR_9);
 }

EXIT:
 FUNC_6(&VAR_6->update_lock);
 return VAR_5;
}
