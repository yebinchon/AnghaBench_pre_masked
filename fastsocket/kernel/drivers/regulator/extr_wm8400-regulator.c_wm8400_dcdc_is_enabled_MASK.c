
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8400 {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct wm8400* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct wm8400*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3)
{
 struct wm8400 *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = (FUNC_1(VAR_3) - VAR_1) * 2;
 u16 VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_2 + VAR_5);
 return (VAR_6 & VAR_0) != 0;
}
