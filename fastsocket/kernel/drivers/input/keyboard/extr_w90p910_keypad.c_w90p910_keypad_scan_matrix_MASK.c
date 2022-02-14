
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w90p910_keypad {unsigned int* keymap; struct input_dev* input_dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct input_dev*,int ,int ,unsigned int) ;
 int FUNC_4 (struct input_dev*,unsigned int,int) ;
 int FUNC_5 (struct input_dev*) ;

__attribute__((used)) static void FUNC_6(struct w90p910_keypad *VAR_3,
       unsigned int VAR_4)
{
 struct input_dev *VAR_5 = VAR_3->input_dev;
 unsigned int VAR_6 = FUNC_1(VAR_4);
 unsigned int VAR_7 = FUNC_0(VAR_4);
 unsigned int VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_2);
 unsigned int VAR_9 = VAR_3->keymap[VAR_8];

 FUNC_3(VAR_5, VAR_0, VAR_1, VAR_8);
 FUNC_4(VAR_5, VAR_9, 1);
 FUNC_5(VAR_5);

 FUNC_3(VAR_5, VAR_0, VAR_1, VAR_8);
 FUNC_4(VAR_5, VAR_9, 0);
 FUNC_5(VAR_5);
}
