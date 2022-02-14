
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct bq24022_mach_info {int gpio_iset2; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct bq24022_mach_info* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0)
{
 struct bq24022_mach_info *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->gpio_iset2) ? 500000 : 100000;
}
