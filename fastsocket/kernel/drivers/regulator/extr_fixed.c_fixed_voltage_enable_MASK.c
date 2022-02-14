
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct fixed_voltage_data {int is_enabled; int enable_high; int gpio; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct fixed_voltage_data* FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0)
{
 struct fixed_voltage_data *VAR_1 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_1->gpio)) {
  FUNC_1(VAR_1->gpio, VAR_1->enable_high);
  VAR_1->is_enabled = 1;
 }

 return 0;
}
