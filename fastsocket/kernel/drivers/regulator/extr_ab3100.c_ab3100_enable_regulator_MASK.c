
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dev; struct ab3100_regulator* reg_data; } ;
struct ab3100_regulator {int regreg; int ab3100; } ;
 int VAR_0 ;
 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_1)
{
 struct ab3100_regulator *VAR_2 = VAR_1->reg_data;
 int VAR_3;
 u8 VAR_4;

 VAR_3 = FUNC_0(VAR_2->ab3100, VAR_2->regreg,
      &VAR_4);
 if (VAR_3) {
  FUNC_2(&VAR_1->dev, "failed to get regid %d value\n",
    VAR_2->regreg);
  return VAR_3;
 }


 if (VAR_4 & VAR_0)
  return 0;

 VAR_4 |= VAR_0;

 VAR_3 = FUNC_1(VAR_2->ab3100, VAR_2->regreg,
      VAR_4);
 if (VAR_3) {
  FUNC_2(&VAR_1->dev, "failed to set regid %d value\n",
    VAR_2->regreg);
  return VAR_3;
 }


 switch (VAR_2->regreg) {
 case 135:
 case 134:
 case 133:
 case 132:
 case 129:
 case 128:
  FUNC_4(200);
  break;
 case 131:
  FUNC_4(600);
  break;
 case 130:
  FUNC_4(400);
  break;
 case 136:
  FUNC_3(1);
  break;
 default:
  break;
 }

 return 0;
}
