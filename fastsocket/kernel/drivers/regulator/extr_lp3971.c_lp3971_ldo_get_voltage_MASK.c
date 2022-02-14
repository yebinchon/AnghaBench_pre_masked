
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct regulator_dev {int dummy; } ;
struct lp3971 {int dummy; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int) ;
 int* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (struct lp3971*,int ) ;
 struct lp3971* FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_2)
{
 struct lp3971 *VAR_3 = FUNC_4(VAR_2);
 int VAR_4 = FUNC_5(VAR_2) - VAR_1;
 u16 VAR_5, VAR_6;

 VAR_6 = FUNC_3(VAR_3, FUNC_2(VAR_4));
 VAR_5 = (VAR_6 >> FUNC_0(VAR_4)) & VAR_0;

 return 1000 * FUNC_1(VAR_4)[VAR_5];
}
