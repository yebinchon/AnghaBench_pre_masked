
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct lm90_data {scalar_t__ kind; int * temp8; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 struct lm90_data* FUNC_0 (struct device*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct lm90_data*,int ) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3, struct device_attribute *VAR_4,
     char *VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_5(VAR_4);
 struct lm90_data *VAR_7 = FUNC_0(VAR_3);
 int VAR_8;

 if (VAR_7->kind == VAR_0)
  VAR_8 = FUNC_4(VAR_7, VAR_7->temp8[VAR_6->index]);
 else if (VAR_7->kind == VAR_2)
  VAR_8 = FUNC_3(VAR_7->temp8[VAR_6->index]);
 else
  VAR_8 = FUNC_2(VAR_7->temp8[VAR_6->index]);


 if (VAR_7->kind == VAR_1 && VAR_6->index == 3)
  VAR_8 += 16000;

 return FUNC_1(VAR_5, "%d\n", VAR_8);
}
