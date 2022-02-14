
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 struct wm8350* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct wm8350*,int) ;
 int FUNC_5 (struct wm8350*,int,int) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_6, int VAR_7,
 int VAR_8)
{
 struct wm8350 *VAR_9 = FUNC_1(VAR_6);
 int VAR_10, VAR_11 = FUNC_2(VAR_6), VAR_12,
  VAR_13 = VAR_7 / 1000, VAR_14 = VAR_8 / 1000;
 u16 VAR_15;

 if (VAR_13 < 850 || VAR_13 > 4025)
  return -VAR_0;
 if (VAR_14 < 850 || VAR_14 > 4025)
  return -VAR_0;


 VAR_12 = (VAR_13 - 826) / 25;
 if (FUNC_3(VAR_12) > VAR_14)
  return -VAR_0;
 FUNC_0(FUNC_3(VAR_12) < VAR_13);

 switch (VAR_11) {
 case 133:
  VAR_10 = VAR_2;
  break;
 case 131:
  VAR_10 = VAR_3;
  break;
 case 130:
  VAR_10 = VAR_4;
  break;
 case 128:
  VAR_10 = VAR_5;
  break;
 case 132:
 case 129:
 default:
  return -VAR_0;
 }


 VAR_15 = FUNC_4(VAR_9, VAR_10) & ~VAR_1;
 FUNC_5(VAR_9, VAR_10, VAR_15 | VAR_12);
 return 0;
}
