
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dev; } ;
struct dc_kbd {int* keycode; int* new; int* old; struct input_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct input_dev*,int ,int ,int) ;
 int FUNC_2 (struct input_dev*,int,int) ;
 int FUNC_3 (struct input_dev*) ;
 void* FUNC_4 (int*,int,int) ;
 int FUNC_5 (int*,int*,int) ;

__attribute__((used)) static void FUNC_6(struct dc_kbd *VAR_2)
{
 struct input_dev *VAR_3 = VAR_2->dev;
 void *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_5 = VAR_7 + 224;
  VAR_6 = VAR_2->keycode[VAR_5];
  FUNC_1(VAR_3, VAR_0, VAR_1, VAR_5);
  FUNC_2(VAR_3, VAR_6, (VAR_2->new[0] >> VAR_7) & 1);
 }

 for (VAR_7 = 2; VAR_7 < 8; VAR_7++) {
  VAR_4 = FUNC_4(VAR_2->new + 2, VAR_2->old[VAR_7], 6);
  VAR_5 = VAR_2->old[VAR_7];
  if (VAR_5 > 3 && VAR_4 == ((void*)0)) {
   VAR_6 = VAR_2->keycode[VAR_5];
   if (VAR_6) {
    FUNC_1(VAR_3, VAR_0, VAR_1, VAR_5);
    FUNC_2(VAR_3, VAR_6, 0);
   } else
    FUNC_0(&VAR_3->dev,
     "Unknown key (scancode %#x) released.",
     VAR_5);
  }
  VAR_4 = FUNC_4(VAR_2->old + 2, VAR_2->new[VAR_7], 6);
  VAR_5 = VAR_2->new[VAR_7];
  if (VAR_5 > 3 && VAR_4) {
   VAR_6 = VAR_2->keycode[VAR_5];
   if (VAR_6) {
    FUNC_1(VAR_3, VAR_0, VAR_1, VAR_5);
    FUNC_2(VAR_3, VAR_6, 1);
   } else
    FUNC_0(&VAR_3->dev,
     "Unknown key (scancode %#x) pressed.",
     VAR_5);
  }
 }
 FUNC_3(VAR_3);
 FUNC_5(VAR_2->old, VAR_2->new, 8);
}
