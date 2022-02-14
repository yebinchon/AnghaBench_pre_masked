
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_ldo {int base; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wm831x_ldo* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,int) ;
 int FUNC_2 (struct wm831x*,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2)
{
 struct wm831x_ldo *VAR_3 = FUNC_0(VAR_2);
 struct wm831x *VAR_4 = VAR_3->wm831x;
 int VAR_5 = VAR_3->base + VAR_1;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 &= VAR_0;

 return FUNC_1(VAR_2, VAR_6);
}
