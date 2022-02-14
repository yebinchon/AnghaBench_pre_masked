
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8400 {int dummy; } ;
struct regulator_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct wm8400* FUNC_0 (struct regulator_dev*) ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*,int ) ;
 int FUNC_3 (struct wm8400*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_2)
{
 struct wm8400 *VAR_3 = FUNC_0(VAR_2);
 u16 VAR_4;

 VAR_4 = FUNC_3(VAR_3, VAR_0 + FUNC_1(VAR_2));
 VAR_4 &= VAR_1;

 return FUNC_2(VAR_2, VAR_4);
}
