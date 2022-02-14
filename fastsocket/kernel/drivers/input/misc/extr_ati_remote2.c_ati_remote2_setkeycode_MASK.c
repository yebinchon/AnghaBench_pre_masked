
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int keybit; } ;
struct ati_remote2 {int mode_mask; int** keycode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 struct ati_remote2* FUNC_4 (struct input_dev*) ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_6, int VAR_7, int VAR_8)
{
 struct ati_remote2 *VAR_9 = FUNC_4(VAR_6);
 int VAR_10, VAR_11, VAR_12;

 VAR_11 = VAR_7 >> 8;
 if (VAR_11 > VAR_1 || !((1 << VAR_11) & VAR_9->mode_mask))
  return -VAR_2;

 VAR_10 = FUNC_3(VAR_7 & 0xFF);
 if (VAR_10 < 0)
  return -VAR_2;

 if (VAR_8 < VAR_4 || VAR_8 > VAR_3)
  return -VAR_2;

 VAR_12 = VAR_9->keycode[VAR_11][VAR_10];
 VAR_9->keycode[VAR_11][VAR_10] = VAR_8;
 FUNC_2(VAR_8, VAR_6->keybit);

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); VAR_10++) {
   if (VAR_9->keycode[VAR_11][VAR_10] == VAR_12)
    return 0;
  }
 }

 FUNC_1(VAR_12, VAR_6->keybit);

 return 0;
}
