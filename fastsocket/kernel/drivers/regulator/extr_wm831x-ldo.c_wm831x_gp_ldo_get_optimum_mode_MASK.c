
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(struct regulator_dev *VAR_3,
         int VAR_4,
         int VAR_5, int VAR_6)
{
 if (VAR_6 < 20000)
  return VAR_2;
 if (VAR_6 < 50000)
  return VAR_0;
 return VAR_1;
}
