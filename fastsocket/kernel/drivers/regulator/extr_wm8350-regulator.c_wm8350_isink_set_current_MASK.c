
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int,int,int*) ;
 struct wm8350* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct wm8350*,int ) ;
 int FUNC_4 (struct wm8350*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_4, int VAR_5,
 int VAR_6)
{
 struct wm8350 *VAR_7 = FUNC_1(VAR_4);
 int VAR_8 = FUNC_2(VAR_4);
 u16 VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_5, VAR_6, &VAR_10);
 if (VAR_11 != 0)
  return VAR_11;

 switch (VAR_8) {
 case 129:
  VAR_9 = FUNC_3(VAR_7, VAR_2) &
      ~VAR_1;
  FUNC_4(VAR_7, VAR_2,
     VAR_9 | VAR_10);
  break;
 case 128:
  VAR_9 = FUNC_3(VAR_7, VAR_3) &
      ~VAR_1;
  FUNC_4(VAR_7, VAR_3,
     VAR_9 | VAR_10);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
