
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct wm831x_dcdc {scalar_t__ base; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct wm831x_dcdc* FUNC_1 (struct regulator_dev*) ;
 int* VAR_3 ;
 int FUNC_2 (struct wm831x*,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_4,
        int VAR_5, int VAR_6)
{
 struct wm831x_dcdc *VAR_7 = FUNC_1(VAR_4);
 struct wm831x *VAR_8 = VAR_7->wm831x;
 u16 VAR_9 = VAR_7->base + VAR_2;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++) {
  if (VAR_6 <= VAR_3[VAR_10])
   break;
 }
 if (VAR_10 == FUNC_0(VAR_3))
  return -VAR_0;

 return FUNC_2(VAR_8, VAR_9, VAR_1, VAR_10);
}
