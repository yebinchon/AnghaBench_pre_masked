
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct i2c_client {int dev; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,char*,char*,scalar_t__,size_t) ;
 scalar_t__ FUNC_1 (struct i2c_client*,scalar_t__,size_t,char*) ;
 struct i2c_client* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_4, struct bin_attribute *VAR_5,
       char *VAR_6, loff_t VAR_7, size_t VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_2(VAR_4);

 FUNC_0(&VAR_9->dev, "ds1682_eeprom_write(p=%p, off=%lli, c=%zi)\n",
  VAR_6, VAR_7, VAR_8);

 if (VAR_7 >= VAR_0)
  return -VAR_3;

 if (VAR_7 + VAR_8 > VAR_0)
  VAR_8 = VAR_0 - VAR_7;


 if (FUNC_1(VAR_9, VAR_1 + VAR_7,
        VAR_8, VAR_6) < 0)
  return -VAR_2;

 return VAR_8;
}
