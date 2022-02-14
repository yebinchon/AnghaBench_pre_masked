
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_3);

 if (VAR_4 < 0)
  return VAR_4;
 VAR_4 &= 0x0f;


 if (!VAR_4)
  return VAR_1;
 return (VAR_4 & FUNC_0(3))
  ? VAR_0
  : VAR_2;
}
