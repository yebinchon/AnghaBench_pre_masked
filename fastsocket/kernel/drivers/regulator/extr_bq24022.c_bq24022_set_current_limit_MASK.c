
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct bq24022_mach_info {int gpio_iset2; } ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct regulator_dev*) ;
 struct bq24022_mach_info* FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_0,
     int VAR_1, int VAR_2)
{
 struct bq24022_mach_info *VAR_3 = FUNC_3(VAR_0);

 FUNC_0(FUNC_2(VAR_0), "setting current limit to %s mA\n",
  VAR_2 >= 500000 ? "500" : "100");


 FUNC_1(VAR_3->gpio_iset2, VAR_2 >= 500000);
 return 0;
}
