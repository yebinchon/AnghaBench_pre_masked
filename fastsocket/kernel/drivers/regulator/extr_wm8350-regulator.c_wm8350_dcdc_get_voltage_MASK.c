
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 struct wm8350* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct wm8350*,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_6)
{
 struct wm8350 *VAR_7 = FUNC_0(VAR_6);
 int VAR_8, VAR_9 = FUNC_1(VAR_6);
 u16 VAR_10;

 switch (VAR_9) {
 case 133:
  VAR_8 = VAR_2;
  break;
 case 131:
  VAR_8 = VAR_3;
  break;
 case 130:
  VAR_8 = VAR_4;
  break;
 case 128:
  VAR_8 = VAR_5;
  break;
 case 132:
 case 129:
 default:
  return -VAR_0;
 }


 VAR_10 = FUNC_3(VAR_7, VAR_8) & VAR_1;
 return FUNC_2(VAR_10) * 1000;
}
