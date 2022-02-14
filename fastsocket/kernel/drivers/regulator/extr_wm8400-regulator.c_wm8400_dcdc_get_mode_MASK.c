
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8400 {int dummy; } ;
struct regulator_dev {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct wm8400* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct wm8400*,scalar_t__,int,int*) ;

__attribute__((used)) static unsigned int FUNC_3(struct regulator_dev *VAR_9)
{
 struct wm8400 *VAR_10 = FUNC_0(VAR_9);
 int VAR_11 = (FUNC_1(VAR_9) - VAR_7) * 2;
 u16 VAR_12[2];
 int VAR_13;

 VAR_13 = FUNC_2(VAR_10, VAR_8 + VAR_11, 2,
    VAR_12);
 if (VAR_13 != 0)
  return 0;


 if (VAR_12[0] & VAR_6)
  return VAR_3;


 if (!(VAR_12[0] & VAR_4))
  return VAR_1;


 if (VAR_12[1] & VAR_5)
  return VAR_0;
 else
  return VAR_2;
}
