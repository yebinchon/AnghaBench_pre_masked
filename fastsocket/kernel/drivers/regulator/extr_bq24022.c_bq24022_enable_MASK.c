
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct bq24022_mach_info {int gpio_nce; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct regulator_dev*) ;
 struct bq24022_mach_info* FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_0)
{
 struct bq24022_mach_info *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(FUNC_2(VAR_0), "enabling charger\n");

 FUNC_1(VAR_1->gpio_nce, 0);
 return 0;
}
