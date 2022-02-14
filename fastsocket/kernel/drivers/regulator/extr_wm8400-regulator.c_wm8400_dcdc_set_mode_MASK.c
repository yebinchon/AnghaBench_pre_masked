
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8400 {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct wm8400* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct wm8400*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_7, unsigned int VAR_8)
{
 struct wm8400 *VAR_9 = FUNC_0(VAR_7);
 int VAR_10 = (FUNC_1(VAR_7) - VAR_4) * 2;
 int VAR_11;

 switch (VAR_8) {
 case 130:

  VAR_11 = FUNC_2(VAR_9, VAR_6 + VAR_10,
          VAR_2, VAR_2);
  if (VAR_11 != 0)
   return VAR_11;

  return FUNC_2(VAR_9, VAR_5 + VAR_10,
           VAR_1 | VAR_3,
           VAR_1);

 case 128:

  VAR_11 = FUNC_2(VAR_9, VAR_6 + VAR_10,
          VAR_2, 0);
  if (VAR_11 != 0)
   return VAR_11;

  return FUNC_2(VAR_9, VAR_5 + VAR_10,
           VAR_1 | VAR_3,
           VAR_1);

 case 129:

  VAR_11 = FUNC_2(VAR_9, VAR_5 + VAR_10,
          VAR_1, 0);
  if (VAR_11 != 0)
   return VAR_11;
  return FUNC_2(VAR_9, VAR_5 + VAR_10,
           VAR_3, 0);

 default:
  return -VAR_0;
 }
}
