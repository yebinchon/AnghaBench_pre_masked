
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_ldo {struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wm831x_ldo* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,int) ;
 int FUNC_2 (struct wm831x*,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2,
         int VAR_3,
         int VAR_4, int VAR_5)
{
 struct wm831x_ldo *VAR_6 = FUNC_0(VAR_2);
 struct wm831x *VAR_7 = VAR_6->wm831x;
 int VAR_8, VAR_9;

 VAR_8 = (VAR_4 - 800000) / 50000;

 VAR_9 = FUNC_1(VAR_2, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_9 < VAR_4 || VAR_9 > VAR_5)
  return -VAR_0;

 return FUNC_2(VAR_7, VAR_3, VAR_1, VAR_8);
}
