
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int isink_A_dcdc; int isink_B_dcdc; } ;
struct wm8350 {TYPE_1__ pmic; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;


 int VAR_9 ;
 struct wm8350* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct wm8350*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_10)
{
 struct wm8350 *VAR_11 = FUNC_0(VAR_10);
 int VAR_12 = FUNC_1(VAR_10);

 switch (VAR_12) {
 case 129:
  switch (VAR_11->pmic.isink_A_dcdc) {
  case 131:
  case 130:
   FUNC_2(VAR_11, VAR_9,
     VAR_2);
   FUNC_2(VAR_11, VAR_5,
     VAR_1);
   FUNC_2(VAR_11, VAR_8,
     1 << (VAR_11->pmic.isink_A_dcdc -
           VAR_7));
   break;
  default:
   return -VAR_0;
  }
  break;
 case 128:
  switch (VAR_11->pmic.isink_B_dcdc) {
  case 131:
  case 130:
   FUNC_2(VAR_11, VAR_9,
     VAR_4);
   FUNC_2(VAR_11, VAR_6,
     VAR_3);
   FUNC_2(VAR_11, VAR_8,
     1 << (VAR_11->pmic.isink_B_dcdc -
           VAR_7));
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
