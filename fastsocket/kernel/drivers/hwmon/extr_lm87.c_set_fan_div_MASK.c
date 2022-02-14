
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm87_data {int* fan_min; int* fan_div; int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned long,long) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 struct lm87_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 long FUNC_9 (char const*,int *,int) ;
 struct i2c_client* FUNC_10 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_2, const char *VAR_3,
  size_t VAR_4, int VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_10(VAR_2);
 struct lm87_data *VAR_7 = FUNC_4(VAR_6);
 long VAR_8 = FUNC_9(VAR_3, ((void*)0), 10);
 unsigned long VAR_9;
 u8 VAR_10;

 FUNC_7(&VAR_7->update_lock);
 VAR_9 = FUNC_1(VAR_7->fan_min[VAR_5],
      FUNC_0(VAR_7->fan_div[VAR_5]));

 switch (VAR_8) {
 case 1: VAR_7->fan_div[VAR_5] = 0; break;
 case 2: VAR_7->fan_div[VAR_5] = 1; break;
 case 4: VAR_7->fan_div[VAR_5] = 2; break;
 case 8: VAR_7->fan_div[VAR_5] = 3; break;
 default:
  FUNC_8(&VAR_7->update_lock);
  return -VAR_0;
 }

 VAR_10 = FUNC_5(VAR_6, VAR_1);
 switch (VAR_5) {
 case 0:
     VAR_10 = (VAR_10 & 0xCF) | (VAR_7->fan_div[0] << 4);
     break;
 case 1:
     VAR_10 = (VAR_10 & 0x3F) | (VAR_7->fan_div[1] << 6);
     break;
 }
 FUNC_6(VAR_6, VAR_1, VAR_10);

 VAR_7->fan_min[VAR_5] = FUNC_2(VAR_9, VAR_8);
 FUNC_6(VAR_6, FUNC_3(VAR_5),
    VAR_7->fan_min[VAR_5]);
 FUNC_8(&VAR_7->update_lock);

 return VAR_4;
}
