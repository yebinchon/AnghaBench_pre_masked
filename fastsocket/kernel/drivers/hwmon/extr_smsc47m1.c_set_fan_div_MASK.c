
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u8 ;
struct smsc47m1_data {int* fan_div; int* fan_preload; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 long FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (long,int ,int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 struct smsc47m1_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 long FUNC_5 (char const*,int *,int) ;
 int FUNC_6 (struct smsc47m1_data*,int ) ;
 int FUNC_7 (struct smsc47m1_data*,int ,long) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_4, struct device_attribute
      *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct sensor_device_attribute *VAR_8 = FUNC_8(VAR_5);
 struct smsc47m1_data *VAR_9 = FUNC_2(VAR_4);
 int VAR_10 = VAR_8->index;
 long VAR_11 = FUNC_5(VAR_6, ((void*)0), 10), VAR_12;
 u8 VAR_13 = FUNC_0(VAR_9->fan_div[VAR_10]);

 if (VAR_11 == VAR_13)
  return VAR_7;

 FUNC_3(&VAR_9->update_lock);
 switch (VAR_11) {
 case 1: VAR_9->fan_div[VAR_10] = 0; break;
 case 2: VAR_9->fan_div[VAR_10] = 1; break;
 case 4: VAR_9->fan_div[VAR_10] = 2; break;
 case 8: VAR_9->fan_div[VAR_10] = 3; break;
 default:
  FUNC_4(&VAR_9->update_lock);
  return -VAR_0;
 }

 switch (VAR_10) {
 case 0:
 case 1:
  VAR_12 = FUNC_6(VAR_9, VAR_1)
        & ~(0x03 << (4 + 2 * VAR_10));
  VAR_12 |= VAR_9->fan_div[VAR_10] << (4 + 2 * VAR_10);
  FUNC_7(VAR_9, VAR_1, VAR_12);
  break;
 case 2:
  VAR_12 = FUNC_6(VAR_9, VAR_3) & 0xCF;
  VAR_12 |= VAR_9->fan_div[2] << 4;
  FUNC_7(VAR_9, VAR_3, VAR_12);
  break;
 }


 VAR_12 = 192 - (VAR_13 * (192 - VAR_9->fan_preload[VAR_10])
       + VAR_11 / 2) / VAR_11;
 VAR_9->fan_preload[VAR_10] = FUNC_1(VAR_12, 0, 191);
 FUNC_7(VAR_9, VAR_2[VAR_10],
        VAR_9->fan_preload[VAR_10]);
 FUNC_4(&VAR_9->update_lock);

 return VAR_7;
}
