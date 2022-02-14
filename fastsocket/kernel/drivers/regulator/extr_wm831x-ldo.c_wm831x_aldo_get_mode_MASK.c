
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_ldo {int base; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct wm831x_ldo* FUNC_0 (struct regulator_dev*) ;
 unsigned int FUNC_1 (struct wm831x*,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct regulator_dev *VAR_4)
{
 struct wm831x_ldo *VAR_5 = FUNC_0(VAR_4);
 struct wm831x *VAR_6 = VAR_5->wm831x;
 int VAR_7 = VAR_5->base + VAR_3;
 unsigned int VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_7);
 if (VAR_8 < 0)
  return 0;

 if (VAR_8 & VAR_2)
  return VAR_0;
 else
  return VAR_1;
}
