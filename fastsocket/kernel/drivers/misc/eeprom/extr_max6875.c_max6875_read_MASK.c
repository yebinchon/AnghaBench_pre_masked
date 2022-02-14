
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max6875_data {int * data; } ;
struct kobject {int dummy; } ;
struct i2c_client {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct max6875_data* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct kobject*) ;
 int FUNC_2 (struct i2c_client*,int) ;
 int FUNC_3 (char*,int *,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(struct file *VAR_2, struct kobject *VAR_3,
       struct bin_attribute *VAR_4,
       char *VAR_5, loff_t VAR_6, size_t VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_1(VAR_3);
 struct max6875_data *VAR_9 = FUNC_0(VAR_8);
 int VAR_10, VAR_11;

 if (VAR_6 > VAR_1)
  return 0;

 if (VAR_6 + VAR_7 > VAR_1)
  VAR_7 = VAR_1 - VAR_6;


 VAR_11 = (VAR_6 + VAR_7 - 1) >> VAR_0;
 for (VAR_10 = (VAR_6 >> VAR_0); VAR_10 <= VAR_11; VAR_10++)
  FUNC_2(VAR_8, VAR_10);

 FUNC_3(VAR_5, &VAR_9->data[VAR_6], VAR_7);

 return VAR_7;
}
