
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int keybit; } ;
struct ep93xx_keypad_platform_data {int matrix_key_map_size; unsigned int* matrix_key_map; } ;
struct ep93xx_keypad {int* matrix_keycodes; struct input_dev* input_dev; struct ep93xx_keypad_platform_data* pdata; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct ep93xx_keypad *VAR_0)
{
 struct ep93xx_keypad_platform_data *VAR_1 = VAR_0->pdata;
 struct input_dev *VAR_2 = VAR_0->input_dev;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->matrix_key_map_size; VAR_3++) {
  unsigned int VAR_4 = VAR_1->matrix_key_map[VAR_3];
  int VAR_5 = (VAR_4 >> 28) & 0xf;
  int VAR_6 = (VAR_4 >> 24) & 0xf;
  int VAR_7 = VAR_4 & 0xffffff;

  VAR_0->matrix_keycodes[(VAR_5 << 3) + VAR_6] = VAR_7;
  FUNC_0(VAR_7, VAR_2->keybit);
 }
}
