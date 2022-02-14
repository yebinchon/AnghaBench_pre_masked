
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8400 {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct wm8400* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct wm8400*,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_4,
      int VAR_5, int VAR_6)
{
 struct wm8400 *VAR_7 = FUNC_1(VAR_4);
 u16 VAR_8;
 int VAR_9 = (FUNC_2(VAR_4) - VAR_2) * 2;

 if (VAR_5 < 850000)
  return -VAR_0;

 VAR_8 = (VAR_5 - 825001) / 25000;

 if (850000 + (25000 * VAR_8) > VAR_6)
  return -VAR_0;
 FUNC_0(850000 + (25000 * VAR_8) < VAR_5);

 return FUNC_3(VAR_7, VAR_3 + VAR_9,
          VAR_1, VAR_8);
}
