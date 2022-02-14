
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_dcdc {struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 struct wm831x_dcdc* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct wm831x*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1)
{
 struct wm831x_dcdc *VAR_2 = FUNC_0(VAR_1);
 struct wm831x *VAR_3 = VAR_2->wm831x;
 int VAR_4 = 1 << FUNC_1(VAR_1);

 return FUNC_2(VAR_3, VAR_0, VAR_4, 0);
}
