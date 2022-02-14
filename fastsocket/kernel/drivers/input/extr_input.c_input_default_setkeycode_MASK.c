
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct input_dev {int keycodemax; int keycodesize; int keybit; scalar_t__ keycode; } ;
typedef int keycode ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct input_dev*,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_1,
        int VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (VAR_2 >= VAR_1->keycodemax)
  return -VAR_0;

 if (!VAR_1->keycodesize)
  return -VAR_0;

 if (VAR_1->keycodesize < sizeof(VAR_3) && (VAR_3 >> (VAR_1->keycodesize * 8)))
  return -VAR_0;

 switch (VAR_1->keycodesize) {
  case 1: {
   u8 *VAR_6 = (u8 *)VAR_1->keycode;
   VAR_4 = VAR_6[VAR_2];
   VAR_6[VAR_2] = VAR_3;
   break;
  }
  case 2: {
   u16 *VAR_7 = (u16 *)VAR_1->keycode;
   VAR_4 = VAR_7[VAR_2];
   VAR_7[VAR_2] = VAR_3;
   break;
  }
  default: {
   u32 *VAR_8 = (u32 *)VAR_1->keycode;
   VAR_4 = VAR_8[VAR_2];
   VAR_8[VAR_2] = VAR_3;
   break;
  }
 }

 FUNC_0(VAR_4, VAR_1->keybit);
 FUNC_2(VAR_3, VAR_1->keybit);

 for (VAR_5 = 0; VAR_5 < VAR_1->keycodemax; VAR_5++) {
  if (FUNC_1(VAR_1, VAR_5) == VAR_4) {
   FUNC_2(VAR_4, VAR_1->keybit);
   break;
  }
 }

 return 0;
}
