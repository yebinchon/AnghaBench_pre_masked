
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct i2c_client {int dev; } ;
struct file {int dummy; } ;
struct ds1307 {int (* write_block_data ) (struct i2c_client*,scalar_t__,size_t,char*) ;} ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,char*,int) ;
 struct ds1307* FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (struct kobject*) ;
 int FUNC_3 (struct i2c_client*,scalar_t__,size_t,char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static ssize_t
FUNC_5(struct file *VAR_2, struct kobject *VAR_3,
  struct bin_attribute *VAR_4,
  char *VAR_5, loff_t VAR_6, size_t VAR_7)
{
 struct i2c_client *VAR_8;
 struct ds1307 *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_3);
 VAR_9 = FUNC_1(VAR_8);

 if (FUNC_4(VAR_6 >= VAR_1))
  return -VAR_0;
 if ((VAR_6 + VAR_7) > VAR_1)
  VAR_7 = VAR_1 - VAR_6;
 if (FUNC_4(!VAR_7))
  return VAR_7;

 VAR_10 = VAR_9->write_block_data(VAR_8, 8 + VAR_6, VAR_7, VAR_5);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_8->dev, "%s error %d\n", "nvram write", VAR_10);
  return VAR_10;
 }
 return VAR_7;
}
