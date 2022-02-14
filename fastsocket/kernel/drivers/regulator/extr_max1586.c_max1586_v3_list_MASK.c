
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max1586_data {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct max1586_data*,unsigned int) ;
 struct max1586_data* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2, unsigned VAR_3)
{
 struct max1586_data *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3 > VAR_1)
  return -VAR_0;
 return FUNC_0(VAR_4, VAR_3);
}
