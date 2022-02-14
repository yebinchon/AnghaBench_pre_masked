
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct wm831x_dcdc {scalar_t__ base; } ;
struct regulator_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct wm831x_dcdc* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1,
         int VAR_2, int VAR_3)
{
 struct wm831x_dcdc *VAR_4 = FUNC_0(VAR_1);
 u16 VAR_5 = VAR_4->base + VAR_0;

 return FUNC_1(VAR_1, VAR_5, VAR_2, VAR_3);
}
