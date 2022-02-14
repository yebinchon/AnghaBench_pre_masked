
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct regulator_dev *VAR_3,
          unsigned int VAR_4)
{

 if (VAR_4 <= VAR_2)
  return 1000000 + (VAR_4 * 50000);

 if (VAR_4 <= VAR_1)
  return 1600000 + ((VAR_4 - VAR_2)
      * 100000);
 return -VAR_0;
}
