
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct wm831x_dcdc {scalar_t__ base; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 () ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 scalar_t__ VAR_6 ;
 struct wm831x_dcdc* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct wm831x*,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_3(struct regulator_dev *VAR_7)

{
 struct wm831x_dcdc *VAR_8 = FUNC_1(VAR_7);
 struct wm831x *VAR_9 = VAR_8->wm831x;
 u16 VAR_10 = VAR_8->base + VAR_6;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_9, VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = (VAR_11 & VAR_4) >> VAR_5;

 switch (VAR_11) {
 case 131:
  return VAR_0;
 case 129:
  return VAR_2;
 case 128:
  return VAR_3;
 case 130:
  return VAR_1;
 default:
  FUNC_0();
 }
}
