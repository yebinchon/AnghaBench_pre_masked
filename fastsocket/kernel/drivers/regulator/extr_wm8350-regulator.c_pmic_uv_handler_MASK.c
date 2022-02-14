
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350 {int dummy; } ;
struct regulator_dev {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct regulator_dev*,int ,struct wm8350*) ;

__attribute__((used)) static void FUNC_3(struct wm8350 *VAR_4, int VAR_5, void *VAR_6)
{
 struct regulator_dev *VAR_7 = (struct regulator_dev *)VAR_6;

 FUNC_0(&VAR_7->mutex);
 if (VAR_5 == VAR_2 || VAR_5 == VAR_3)
  FUNC_2(VAR_7,
           VAR_0,
           VAR_4);
 else
  FUNC_2(VAR_7,
           VAR_1,
           VAR_4);
 FUNC_1(&VAR_7->mutex);
}
