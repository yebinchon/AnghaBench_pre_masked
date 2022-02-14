
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350 {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 struct wm8350* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct wm8350*,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3)
{
 struct wm8350 *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = FUNC_1(VAR_3);

 switch (VAR_5) {
 case 129:
  return FUNC_2(VAR_4, VAR_1) &
      0x8000;
 case 128:
  return FUNC_2(VAR_4, VAR_2) &
      0x8000;
 }
 return -VAR_0;
}
