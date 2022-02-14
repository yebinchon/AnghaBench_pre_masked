
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twlreg_info {int min_mV; } ;
struct regulator_dev {int dummy; } ;


 struct twlreg_info* FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_0)
{
 struct twlreg_info *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->min_mV * 1000;
}
