
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_ldo {int base; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 struct wm831x_ldo* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1,
          int VAR_2)
{
 struct wm831x_ldo *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = VAR_3->base + VAR_0;

 return FUNC_1(VAR_1, VAR_4, VAR_2, VAR_2);
}
