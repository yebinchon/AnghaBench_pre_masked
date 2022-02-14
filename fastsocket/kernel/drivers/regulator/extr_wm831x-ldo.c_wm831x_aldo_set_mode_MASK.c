
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_ldo {int base; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wm831x_ldo* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct wm831x*,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_4,
      unsigned int VAR_5)
{
 struct wm831x_ldo *VAR_6 = FUNC_0(VAR_4);
 struct wm831x *VAR_7 = VAR_6->wm831x;
 int VAR_8 = VAR_6->base + VAR_2;
 int VAR_9 = VAR_6->base + VAR_3;
 int VAR_10;


 switch (VAR_5) {
 case 128:
  VAR_10 = FUNC_1(VAR_7, VAR_9,
          VAR_1, 0);
  if (VAR_10 < 0)
   return VAR_10;
  break;

 case 129:
  VAR_10 = FUNC_1(VAR_7, VAR_8,
          VAR_1,
          VAR_1);
  if (VAR_10 < 0)
   return VAR_10;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
