
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct regulator_dev {int dev; } ;
struct lp3971 {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (int *,char*) ;
 size_t FUNC_2 (struct lp3971*,int ) ;
 struct lp3971* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_4)
{
 struct lp3971 *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = FUNC_4(VAR_4) - VAR_2;
 u16 VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_5, FUNC_0(VAR_6));
 VAR_7 &= VAR_0;

 if (VAR_7 <= VAR_1)
  VAR_8 = 1000 * VAR_3[VAR_7];
 else {
  VAR_8 = 0;
  FUNC_1(&VAR_4->dev, "chip reported incorrect voltage value.\n");
 }

 return VAR_8;
}
