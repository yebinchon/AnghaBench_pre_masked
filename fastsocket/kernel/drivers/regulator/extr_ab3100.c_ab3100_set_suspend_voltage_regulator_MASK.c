
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dev; struct ab3100_regulator* reg_data; } ;
struct ab3100_regulator {scalar_t__ regreg; int ab3100; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regulator_dev*,int,int) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_5,
      int VAR_6)
{
 struct ab3100_regulator *VAR_7 = VAR_5->reg_data;
 u8 VAR_8;
 int VAR_9;
 int VAR_10;
 u8 VAR_11;

 if (VAR_7->regreg == VAR_2)
  VAR_11 = VAR_3;
 else if (VAR_7->regreg == VAR_0)
  VAR_11 = VAR_1;
 else
  return -VAR_4;


 VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_6);

 VAR_9 = FUNC_1(VAR_7->ab3100,
      VAR_11, &VAR_8);
 if (VAR_9) {
  FUNC_3(&VAR_5->dev,
    "failed to get regulator register %02x\n",
    VAR_11);
  return VAR_9;
 }


 VAR_8 &= ~0xE0;
 VAR_8 |= (VAR_10 << 5);

 VAR_9 = FUNC_2(VAR_7->ab3100,
      VAR_11, VAR_8);
 if (VAR_9)
  FUNC_3(&VAR_5->dev, "failed to set regulator register %02x\n",
   VAR_7->regreg);

 return VAR_9;
}
