
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_2,
         unsigned VAR_3)
{
 if (VAR_3 > FUNC_0(VAR_1))
  return -VAR_0;
 return VAR_1[VAR_3] * 1000;
}
