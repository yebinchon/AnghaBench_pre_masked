
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8400 {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct wm8400* FUNC_1 (struct regulator_dev*) ;
 scalar_t__ FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct wm8400*,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_3,
      int VAR_4, int VAR_5)
{
 struct wm8400 *VAR_6 = FUNC_1(VAR_3);
 u16 VAR_7;

 if (VAR_4 < 900000 || VAR_4 > 3300000)
  return -VAR_0;

 if (VAR_4 < 1700000) {

  VAR_7 = (VAR_4 - 850001) / 50000;

  if ((VAR_7 * 50000) + 900000 > VAR_5)
   return -VAR_0;
  FUNC_0((VAR_7 * 50000) + 900000 < VAR_4);
 } else {

  VAR_7 = ((VAR_4 - 1600001) / 100000);

  if ((VAR_7 * 100000) + 1700000 > VAR_5)
   return -VAR_0;
  FUNC_0((VAR_7 * 100000) + 1700000 < VAR_4);

  VAR_7 += 0xf;
 }

 return FUNC_3(VAR_6, VAR_1 + FUNC_2(VAR_3),
          VAR_2, VAR_7);
}
