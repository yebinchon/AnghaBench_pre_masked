
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct regulator_dev {int dev; struct ab3100_regulator* reg_data; } ;
struct ab3100_regulator {scalar_t__ regreg; int ab3100; TYPE_1__* plfdata; } ;
struct TYPE_2__ {int* reg_initvals; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__,int*) ;
 scalar_t__* VAR_2 ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_3)
{
 struct ab3100_regulator *VAR_4 = VAR_3->reg_data;
 int VAR_5;
 u8 VAR_6;





 if (VAR_4->regreg == VAR_0) {
  int VAR_7;

  FUNC_4(&VAR_3->dev, "disabling LDO D - shut down system\n");




  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
   (void) FUNC_2(VAR_4->ab3100,
     VAR_2[VAR_7],
     VAR_4->plfdata->reg_initvals[VAR_7]);
  }


  return FUNC_2(VAR_4->ab3100,
        VAR_0, 0x00U);

 }




 VAR_5 = FUNC_1(VAR_4->ab3100, VAR_4->regreg,
      &VAR_6);
 if (VAR_5) {
  FUNC_3(&VAR_3->dev, "unable to get register 0x%x\n",
   VAR_4->regreg);
  return VAR_5;
 }
 VAR_6 &= ~VAR_1;
 return FUNC_2(VAR_4->ab3100, VAR_4->regreg,
       VAR_6);
}
