
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int dcdc6_hib_mode; int dcdc4_hib_mode; int dcdc3_hib_mode; int dcdc1_hib_mode; } ;
struct wm8350 {TYPE_1__ pmic; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wm8350* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_4,
 unsigned int VAR_5)
{
 struct wm8350 *VAR_6 = FUNC_0(VAR_4);
 int VAR_7 = FUNC_1(VAR_4);
 u16 *VAR_8;

 switch (VAR_7) {
 case 133:
  VAR_8 = &VAR_6->pmic.dcdc1_hib_mode;
  break;
 case 131:
  VAR_8 = &VAR_6->pmic.dcdc3_hib_mode;
  break;
 case 130:
  VAR_8 = &VAR_6->pmic.dcdc4_hib_mode;
  break;
 case 128:
  VAR_8 = &VAR_6->pmic.dcdc6_hib_mode;
  break;
 case 132:
 case 129:
 default:
  return -VAR_0;
 }

 switch (VAR_5) {
 case 135:
  *VAR_8 = VAR_1;
  break;
 case 136:
  *VAR_8 = VAR_3;
  break;
 case 134:
  *VAR_8 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
