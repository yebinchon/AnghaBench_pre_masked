
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct regulator_dev*) ;
 struct regulator_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 struct regulator_dev *VAR_3 = FUNC_1(VAR_0);
 ssize_t VAR_4;

 FUNC_2(&VAR_3->mutex);
 VAR_4 = FUNC_4(VAR_2, FUNC_0(VAR_3));
 FUNC_3(&VAR_3->mutex);

 return VAR_4;
}
