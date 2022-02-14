
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sht15_data {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct sht15_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct sht15_data*) ;
 int FUNC_2 (struct sht15_data*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
          struct device_attribute *VAR_1,
          char *VAR_2)
{
 int VAR_3;
 struct sht15_data *VAR_4 = FUNC_0(VAR_0);


 VAR_3 = FUNC_2(VAR_4);

 return VAR_3 ? VAR_3 : FUNC_3(VAR_2, "%d\n",
       FUNC_1(VAR_4));
}
