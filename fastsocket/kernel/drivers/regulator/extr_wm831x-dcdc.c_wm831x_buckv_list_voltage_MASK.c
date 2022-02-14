
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct regulator_dev *VAR_2,
          unsigned VAR_3)
{
 if (VAR_3 <= 0x8)
  return 600000;
 if (VAR_3 <= VAR_1)
  return 600000 + ((VAR_3 - 0x8) * 12500);
 return -VAR_0;
}
