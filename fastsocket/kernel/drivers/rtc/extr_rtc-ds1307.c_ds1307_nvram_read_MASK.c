
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct i2c_client {int dev; } ;
struct file {int dummy; } ;
struct ds1307 {int (* read_block_data ) (struct i2c_client*,scalar_t__,size_t,char*) ;} ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,char*,int) ;
 struct ds1307* FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (struct kobject*) ;
 int FUNC_3 (struct i2c_client*,scalar_t__,size_t,char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static ssize_t
FUNC_5(struct file *VAR_1, struct kobject *VAR_2,
  struct bin_attribute *VAR_3,
  char *VAR_4, loff_t VAR_5, size_t VAR_6)
{
 struct i2c_client *VAR_7;
 struct ds1307 *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_2);
 VAR_8 = FUNC_1(VAR_7);

 if (FUNC_4(VAR_5 >= VAR_0))
  return 0;
 if ((VAR_5 + VAR_6) > VAR_0)
  VAR_6 = VAR_0 - VAR_5;
 if (FUNC_4(!VAR_6))
  return VAR_6;

 VAR_9 = VAR_8->read_block_data(VAR_7, 8 + VAR_5, VAR_6, VAR_4);
 if (VAR_9 < 0)
  FUNC_0(&VAR_7->dev, "%s error %d\n", "nvram read", VAR_9);
 return VAR_9;
}
