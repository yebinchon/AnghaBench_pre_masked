
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dev; struct ab3100_regulator* reg_data; } ;
struct ab3100_regulator {int regreg; int ab3100; } ;


 int FUNC_0 (struct regulator_dev*,int,int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_0,
     int VAR_1, int VAR_2)
{
 struct ab3100_regulator *VAR_3 = VAR_0->reg_data;
 u8 VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_1(VAR_3->ab3100,
      VAR_3->regreg, &VAR_4);
 if (VAR_5) {
  FUNC_3(&VAR_0->dev,
    "failed to get regulator register %02x\n",
    VAR_3->regreg);
  return VAR_5;
 }


 VAR_4 &= ~0xE0;
 VAR_4 |= (VAR_6 << 5);

 VAR_5 = FUNC_2(VAR_3->ab3100,
      VAR_3->regreg, VAR_4);
 if (VAR_5)
  FUNC_3(&VAR_0->dev, "failed to set regulator register %02x\n",
   VAR_3->regreg);

 return VAR_5;
}
