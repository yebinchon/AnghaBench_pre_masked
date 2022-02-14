
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa27x_keypad_platform_data {int matrix_key_map_size; unsigned int* matrix_key_map; int direct_key_num; unsigned short* direct_key_map; unsigned short rotary0_up_key; unsigned short rotary0_down_key; int rotary0_rel_code; unsigned short rotary1_up_key; unsigned short rotary1_down_key; int rotary1_rel_code; scalar_t__ enable_rotary1; scalar_t__ enable_rotary0; } ;
struct pxa27x_keypad {unsigned short* keycodes; int* rotary_rel_code; struct input_dev* input_dev; struct pxa27x_keypad_platform_data* pdata; } ;
struct input_dev {int keybit; int relbit; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned short FUNC_2 (unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_3 (unsigned int,unsigned int,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned short,int ) ;

__attribute__((used)) static void FUNC_6(struct pxa27x_keypad *VAR_3)
{
 struct pxa27x_keypad_platform_data *VAR_4 = VAR_3->pdata;
 struct input_dev *VAR_5 = VAR_3->input_dev;
 unsigned short VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->matrix_key_map_size; VAR_7++) {
  unsigned int VAR_8 = VAR_4->matrix_key_map[VAR_7];
  unsigned int VAR_9 = FUNC_1(VAR_8);
  unsigned int VAR_10 = FUNC_0(VAR_8);
  unsigned int VAR_11 = FUNC_3(VAR_9, VAR_10,
        VAR_1);

  VAR_6 = FUNC_2(VAR_8);
  VAR_3->keycodes[VAR_11] = VAR_6;
  FUNC_5(VAR_6, VAR_5->keybit);
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->direct_key_num; VAR_7++) {
  VAR_6 = VAR_4->direct_key_map[VAR_7];
  VAR_3->keycodes[VAR_2 + VAR_7] = VAR_6;
  FUNC_5(VAR_6, VAR_5->keybit);
 }

 if (VAR_4->enable_rotary0) {
  if (VAR_4->rotary0_up_key && VAR_4->rotary0_down_key) {
   VAR_6 = VAR_4->rotary0_up_key;
   VAR_3->keycodes[VAR_2 + 0] = VAR_6;
   FUNC_5(VAR_6, VAR_5->keybit);

   VAR_6 = VAR_4->rotary0_down_key;
   VAR_3->keycodes[VAR_2 + 1] = VAR_6;
   FUNC_5(VAR_6, VAR_5->keybit);

   VAR_3->rotary_rel_code[0] = -1;
  } else {
   VAR_3->rotary_rel_code[0] = VAR_4->rotary0_rel_code;
   FUNC_5(VAR_4->rotary0_rel_code, VAR_5->relbit);
  }
 }

 if (VAR_4->enable_rotary1) {
  if (VAR_4->rotary1_up_key && VAR_4->rotary1_down_key) {
   VAR_6 = VAR_4->rotary1_up_key;
   VAR_3->keycodes[VAR_2 + 2] = VAR_6;
   FUNC_5(VAR_6, VAR_5->keybit);

   VAR_6 = VAR_4->rotary1_down_key;
   VAR_3->keycodes[VAR_2 + 3] = VAR_6;
   FUNC_5(VAR_6, VAR_5->keybit);

   VAR_3->rotary_rel_code[1] = -1;
  } else {
   VAR_3->rotary_rel_code[1] = VAR_4->rotary1_rel_code;
   FUNC_5(VAR_4->rotary1_rel_code, VAR_5->relbit);
  }
 }

 FUNC_4(VAR_0, VAR_5->keybit);
}
