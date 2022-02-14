
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_isink {int reg; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wm831x_isink* FUNC_0 (struct regulator_dev*) ;
 int* VAR_2 ;
 int FUNC_1 (struct wm831x*,int ) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_3)
{
 struct wm831x_isink *VAR_4 = FUNC_0(VAR_3);
 struct wm831x *VAR_5 = VAR_4->wm831x;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_4->reg);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 &= VAR_0;
 if (VAR_6 > VAR_1)
  VAR_6 = VAR_1;

 return VAR_2[VAR_6];
}
