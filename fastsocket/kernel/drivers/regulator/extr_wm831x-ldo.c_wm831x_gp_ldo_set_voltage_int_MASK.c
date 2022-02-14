
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
 int FUNC_1 (struct regulator_dev*,int) ;
 int FUNC_2 (struct wm831x*,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3, int VAR_4,
      int VAR_5, int VAR_6)
{
 struct wm831x_ldo *VAR_7 = FUNC_0(VAR_3);
 struct wm831x *VAR_8 = VAR_7->wm831x;
 int VAR_9, VAR_10;

 if (VAR_5 < 900000)
  VAR_9 = 0;
 else if (VAR_5 < 1700000)
  VAR_9 = ((VAR_5 - 900000) / 50000);
 else
  VAR_9 = ((VAR_5 - 1700000) / 100000)
   + VAR_1 + 1;

 VAR_10 = FUNC_1(VAR_3, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_10 < VAR_5 || VAR_10 > VAR_6)
  return -VAR_0;

 return FUNC_2(VAR_8, VAR_4, VAR_2, VAR_9);
}
