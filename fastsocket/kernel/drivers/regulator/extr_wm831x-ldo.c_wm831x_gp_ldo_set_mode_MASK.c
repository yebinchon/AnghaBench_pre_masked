
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
 int VAR_4 ;
 struct wm831x_ldo* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct wm831x*,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_5,
      unsigned int VAR_6)
{
 struct wm831x_ldo *VAR_7 = FUNC_0(VAR_5);
 struct wm831x *VAR_8 = VAR_7->wm831x;
 int VAR_9 = VAR_7->base + VAR_3;
 int VAR_10 = VAR_7->base + VAR_4;
 int VAR_11;


 switch (VAR_6) {
 case 129:
  VAR_11 = FUNC_1(VAR_8, VAR_10,
          VAR_2, 0);
  if (VAR_11 < 0)
   return VAR_11;
  break;

 case 130:
  VAR_11 = FUNC_1(VAR_8, VAR_9,
          VAR_1,
          VAR_1);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_11 = FUNC_1(VAR_8, VAR_10,
          VAR_2,
          VAR_2);
  if (VAR_11 < 0)
   return VAR_11;

 case 128:
  VAR_11 = FUNC_1(VAR_8, VAR_9,
          VAR_1, 0);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_11 = FUNC_1(VAR_8, VAR_10,
          VAR_2,
          VAR_2);
  if (VAR_11 < 0)
   return VAR_11;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
