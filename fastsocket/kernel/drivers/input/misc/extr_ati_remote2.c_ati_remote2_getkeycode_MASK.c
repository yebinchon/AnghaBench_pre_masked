
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct ati_remote2 {int mode_mask; int** keycode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct ati_remote2* FUNC_1 (struct input_dev*) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_2,
      int VAR_3, int *VAR_4)
{
 struct ati_remote2 *VAR_5 = FUNC_1(VAR_2);
 int VAR_6, VAR_7;

 VAR_7 = VAR_3 >> 8;
 if (VAR_7 > VAR_0 || !((1 << VAR_7) & VAR_5->mode_mask))
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_3 & 0xFF);
 if (VAR_6 < 0)
  return -VAR_1;

 *VAR_4 = VAR_5->keycode[VAR_7][VAR_6];
 return 0;
}
