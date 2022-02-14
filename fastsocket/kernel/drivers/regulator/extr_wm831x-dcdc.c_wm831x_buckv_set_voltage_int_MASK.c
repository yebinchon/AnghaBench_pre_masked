
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm831x_dcdc {struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wm831x_dcdc* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,int) ;
 int FUNC_2 (struct wm831x*,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2, int VAR_3,
      int VAR_4, int VAR_5)
{
 struct wm831x_dcdc *VAR_6 = FUNC_0(VAR_2);
 struct wm831x *VAR_7 = VAR_6->wm831x;
 u16 VAR_8;

 if (VAR_4 < 600000)
  VAR_8 = 0;
 else if (VAR_4 <= 1800000)
  VAR_8 = ((VAR_4 - 600000) / 12500) + 8;
 else
  return -VAR_0;

 if (FUNC_1(VAR_2, VAR_8) > VAR_5)
  return -VAR_0;

 return FUNC_2(VAR_7, VAR_3, VAR_1, VAR_8);
}
