
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {struct ab3100_regulator* reg_data; } ;
struct ab3100_regulator {TYPE_1__* plfdata; } ;
struct TYPE_2__ {int external_voltage; } ;



__attribute__((used)) static int FUNC_0(struct regulator_dev *VAR_0)
{
 struct ab3100_regulator *VAR_1 = VAR_0->reg_data;

 return VAR_1->plfdata->external_voltage;
}
