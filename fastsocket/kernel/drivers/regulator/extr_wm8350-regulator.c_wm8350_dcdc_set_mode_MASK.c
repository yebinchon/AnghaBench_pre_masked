
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct wm8350*,int,int) ;
 struct wm8350* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct wm8350*,int ,int) ;
 int FUNC_4 (struct wm8350*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_7, unsigned int VAR_8)
{
 struct wm8350 *VAR_9 = FUNC_1(VAR_7);
 int VAR_10 = FUNC_2(VAR_7);
 u16 VAR_11;

 if (VAR_10 < VAR_1 || VAR_10 > VAR_4)
  return -VAR_0;

 if (VAR_10 == VAR_2 || VAR_10 == VAR_3)
  return -VAR_0;

 VAR_11 = 1 << (VAR_10 - VAR_1);

 switch (VAR_8) {
 case 131:

  FUNC_4(VAR_9, VAR_5, VAR_11);
  FUNC_3(VAR_9, VAR_6, VAR_11);
  FUNC_0(VAR_9, VAR_10, 1);
  break;
 case 129:

  FUNC_4(VAR_9, VAR_5, VAR_11);
  FUNC_3(VAR_9, VAR_6, VAR_11);
  FUNC_0(VAR_9, VAR_10, 0);
  break;
 case 130:

  FUNC_0(VAR_9, VAR_10, 0);
  FUNC_3(VAR_9, VAR_6, VAR_11);
  FUNC_3(VAR_9, VAR_5, VAR_11);
  break;
 case 128:

  FUNC_0(VAR_9, VAR_10, 0);
  FUNC_4(VAR_9, VAR_6, VAR_11);
  break;
 }

 return 0;
}
