
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max7359_keypad {unsigned short* keycodes; struct input_dev* input_dev; } ;
struct matrix_keymap_data {int keymap_size; unsigned int* keymap; } ;
struct input_dev {int keybit; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned short FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned short,int ) ;

__attribute__((used)) static void FUNC_6(struct max7359_keypad *VAR_2,
    const struct matrix_keymap_data *VAR_3)
{
 struct input_dev *VAR_4 = VAR_2->input_dev;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->keymap_size; VAR_5++) {
  unsigned int VAR_6 = VAR_3->keymap[VAR_5];
  unsigned int VAR_7 = FUNC_1(VAR_6);
  unsigned int VAR_8 = FUNC_0(VAR_6);
  unsigned int VAR_9 = FUNC_3(VAR_7, VAR_8,
      VAR_1);
  unsigned short VAR_10 = FUNC_2(VAR_6);

  VAR_2->keycodes[VAR_9] = VAR_10;
  FUNC_5(VAR_10, VAR_4->keybit);
 }
 FUNC_4(VAR_0, VAR_4->keybit);
}
