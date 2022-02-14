
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; int nr; } ;
struct dme1737_data {int* fan_min; int* fan_opt; int* fan_max; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 size_t VAR_0 ;
 int FUNC_3 (long) ;
 void* FUNC_4 (long,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (long,int) ;



 int FUNC_7 (struct device*,char*,int) ;
 struct dme1737_data* FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*,char*,long) ;
 int FUNC_10 (struct dme1737_data*,int ) ;
 int FUNC_11 (struct dme1737_data*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 long FUNC_14 (char const*,int *,int) ;
 struct sensor_device_attribute_2* FUNC_15 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_16(struct device *VAR_1, struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct dme1737_data *VAR_5 = FUNC_8(VAR_1);
 struct sensor_device_attribute_2
  *VAR_6 = FUNC_15(VAR_2);
 int VAR_7 = VAR_6->index;
 int VAR_8 = VAR_6->nr;
 long VAR_9 = FUNC_14(VAR_3, ((void*)0), 10);

 FUNC_12(&VAR_5->update_lock);
 switch (VAR_8) {
 case 129:
  if (VAR_7 < 4) {
   VAR_5->fan_min[VAR_7] = FUNC_4(VAR_9, 0);
  } else {

   VAR_5->fan_opt[VAR_7] = FUNC_10(VAR_5,
      FUNC_2(VAR_7));

   VAR_5->fan_min[VAR_7] = FUNC_4(VAR_9,
     FUNC_5(VAR_5->fan_opt[VAR_7]));
  }
  FUNC_11(VAR_5, FUNC_1(VAR_7),
         VAR_5->fan_min[VAR_7] & 0xff);
  FUNC_11(VAR_5, FUNC_1(VAR_7) + 1,
         VAR_5->fan_min[VAR_7] >> 8);
  break;
 case 130:

  VAR_5->fan_max[VAR_7 - 4] = FUNC_3(VAR_9);
  FUNC_11(VAR_5, FUNC_0(VAR_7),
         VAR_5->fan_max[VAR_7 - 4]);
  break;
 case 128:

  if (!(VAR_9 == 1 || VAR_9 == 2 || VAR_9 == 4)) {
   VAR_4 = -VAR_0;
   FUNC_9(VAR_1, "Fan type value %ld not "
     "supported. Choose one of 1, 2, or 4.\n",
     VAR_9);
   goto exit;
  }
  VAR_5->fan_opt[VAR_7] = FUNC_6(VAR_9, FUNC_10(VAR_5,
     FUNC_2(VAR_7)));
  FUNC_11(VAR_5, FUNC_2(VAR_7),
         VAR_5->fan_opt[VAR_7]);
  break;
 default:
  FUNC_7(VAR_1, "Unknown function %d.\n", VAR_8);
 }
exit:
 FUNC_13(&VAR_5->update_lock);

 return VAR_4;
}
