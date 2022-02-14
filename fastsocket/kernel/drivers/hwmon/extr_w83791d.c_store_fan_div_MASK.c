
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83791d_data {int* fan_min; int* fan_div; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 unsigned long FUNC_1 (int,int ) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned long,int ) ;
 struct w83791d_data* FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*,int *,int) ;
 struct i2c_client* FUNC_9 (struct device*) ;
 struct sensor_device_attribute* FUNC_10 (struct device_attribute*) ;
 int FUNC_11 (struct i2c_client*,int ) ;
 int FUNC_12 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t FUNC_13(struct device *VAR_4, struct device_attribute *VAR_5,
    const char *VAR_6, size_t VAR_7)
{
 struct sensor_device_attribute *VAR_8 = FUNC_10(VAR_5);
 struct i2c_client *VAR_9 = FUNC_9(VAR_4);
 struct w83791d_data *VAR_10 = FUNC_5(VAR_9);
 int VAR_11 = VAR_8->index;
 unsigned long VAR_12;
 u8 VAR_13;
 u8 VAR_14;
 u8 VAR_15;
 int VAR_16 = 0;
 u8 VAR_17 = 0;
 u8 VAR_18 = 0;


 VAR_12 = FUNC_1(VAR_10->fan_min[VAR_11], FUNC_0(VAR_10->fan_div[VAR_11]));

 FUNC_6(&VAR_10->update_lock);
 VAR_10->fan_div[VAR_11] = FUNC_3(VAR_11, FUNC_8(VAR_6, ((void*)0), 10));

 switch (VAR_11) {
 case 0:
  VAR_16 = 0;
  VAR_17 = 0xcf;
  VAR_18 = 4;
  break;
 case 1:
  VAR_16 = 0;
  VAR_17 = 0x3f;
  VAR_18 = 6;
  break;
 case 2:
  VAR_16 = 1;
  VAR_17 = 0x3f;
  VAR_18 = 6;
  break;
 case 3:
  VAR_16 = 2;
  VAR_17 = 0xf8;
  VAR_18 = 0;
  break;
 case 4:
  VAR_16 = 2;
  VAR_17 = 0x8f;
  VAR_18 = 4;
  break;






 }

 VAR_14 = FUNC_11(VAR_9, VAR_1[VAR_16])
   & VAR_17;
 VAR_13 = (VAR_10->fan_div[VAR_11] << VAR_18) & ~VAR_17;

 FUNC_12(VAR_9, VAR_1[VAR_16],
    VAR_14 | VAR_13);


 if (VAR_11 < 3) {
  VAR_17 = ~(1 << (VAR_11 + 5));
  VAR_15 = FUNC_11(VAR_9, VAR_3)
    & VAR_17;
  VAR_13 = (VAR_10->fan_div[VAR_11] << (3 + VAR_11)) & ~VAR_17;
  FUNC_12(VAR_9, VAR_3,
    VAR_15 | VAR_13);
 }


 VAR_10->fan_min[VAR_11] = FUNC_4(VAR_12, FUNC_0(VAR_10->fan_div[VAR_11]));
 FUNC_12(VAR_9, VAR_2[VAR_11], VAR_10->fan_min[VAR_11]);




 FUNC_7(&VAR_10->update_lock);

 return VAR_7;
}
