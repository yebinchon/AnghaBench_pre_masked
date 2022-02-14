
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; int nr; } ;
struct dme1737_data {int update_lock; void** zone_abs; void** pwm_freq; void** zone_low; void** zone_hyst; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;




 int FUNC_4 (void*,int) ;
 void* FUNC_5 (int ,int,void*) ;
 void* FUNC_6 (int ,void*) ;
 void* FUNC_7 (long) ;
 int FUNC_8 (struct device*,char*,int) ;
 struct dme1737_data* FUNC_9 (struct device*) ;
 void* FUNC_10 (struct dme1737_data*,int ) ;
 int FUNC_11 (struct dme1737_data*,int ,void*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 long FUNC_14 (char const*,int *,int) ;
 struct sensor_device_attribute_2* FUNC_15 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_16(struct device *VAR_0, struct device_attribute *VAR_1,
   const char *VAR_2, size_t VAR_3)
{
 struct dme1737_data *VAR_4 = FUNC_9(VAR_0);
 struct sensor_device_attribute_2
  *VAR_5 = FUNC_15(VAR_1);
 int VAR_6 = VAR_5->index;
 int VAR_7 = VAR_5->nr;
 long VAR_8 = FUNC_14(VAR_2, ((void*)0), 10);

 FUNC_12(&VAR_4->update_lock);
 switch (VAR_7) {
 case 130:

  VAR_4->zone_low[VAR_6] = FUNC_10(VAR_4,
        FUNC_3(VAR_6));

  VAR_4->zone_hyst[VAR_6 == 2] = FUNC_5(
     FUNC_4(VAR_4->zone_low[VAR_6], 8) -
     VAR_8, VAR_6, FUNC_10(VAR_4,
     FUNC_2(VAR_6 == 2)));
  FUNC_11(VAR_4, FUNC_2(VAR_6 == 2),
         VAR_4->zone_hyst[VAR_6 == 2]);
  break;
 case 131:
  VAR_4->zone_low[VAR_6] = FUNC_7(VAR_8);
  FUNC_11(VAR_4, FUNC_3(VAR_6),
         VAR_4->zone_low[VAR_6]);
  break;
 case 129:

  VAR_4->zone_low[VAR_6] = FUNC_10(VAR_4,
        FUNC_3(VAR_6));


  VAR_4->pwm_freq[VAR_6] = FUNC_6(VAR_8 -
     FUNC_4(VAR_4->zone_low[VAR_6], 8),
     FUNC_10(VAR_4,
     FUNC_0(VAR_6)));
  FUNC_11(VAR_4, FUNC_0(VAR_6),
         VAR_4->pwm_freq[VAR_6]);
  break;
 case 128:
  VAR_4->zone_abs[VAR_6] = FUNC_7(VAR_8);
  FUNC_11(VAR_4, FUNC_1(VAR_6),
         VAR_4->zone_abs[VAR_6]);
  break;
 default:
  FUNC_8(VAR_0, "Unknown function %d.\n", VAR_7);
 }
 FUNC_13(&VAR_4->update_lock);

 return VAR_3;
}
