
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct wm8350 {int dummy; } ;
struct regulator_dev {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int* VAR_3 ;
 struct wm8350* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 size_t FUNC_2 (struct wm8350*,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_4)
{
 struct wm8350 *VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = FUNC_1(VAR_4);
 u16 VAR_7;

 switch (VAR_6) {
 case 129:
  VAR_7 = FUNC_2(VAR_5, VAR_1) &
      VAR_0;
  break;
 case 128:
  VAR_7 = FUNC_2(VAR_5, VAR_2) &
      VAR_0;
  break;
 default:
  return 0;
 }

 return (VAR_3[VAR_7] + 50) / 100;
}
