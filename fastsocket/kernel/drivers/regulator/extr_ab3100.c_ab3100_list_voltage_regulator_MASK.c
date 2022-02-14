
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {struct ab3100_regulator* reg_data; } ;
struct ab3100_regulator {unsigned int voltages_len; int* typ_voltages; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct regulator_dev *VAR_1,
      unsigned VAR_2)
{
 struct ab3100_regulator *VAR_3 = VAR_1->reg_data;

 if (VAR_2 > VAR_3->voltages_len)
  return -VAR_0;
 return VAR_3->typ_voltages[VAR_2];
}
