
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct regulator_dev {int dummy; } ;
struct lp3971 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lp3971*,int ,int,int) ;
 struct lp3971* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2)
{
 struct lp3971 *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = FUNC_2(VAR_2) - VAR_0;
 u16 VAR_5 = 1 << (1 + VAR_4);

 return FUNC_0(VAR_3, VAR_1, VAR_5, VAR_5);
}
