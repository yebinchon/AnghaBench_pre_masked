
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_ldo {struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wm831x_ldo* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct wm831x*,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3)
{
 struct wm831x_ldo *VAR_4 = FUNC_0(VAR_3);
 struct wm831x *VAR_5 = VAR_4->wm831x;
 int VAR_6 = 1 << FUNC_1(VAR_3);
 int VAR_7;


 VAR_7 = FUNC_2(VAR_5, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_7 & VAR_6)
  return VAR_1;
 else
  return VAR_0;
}
