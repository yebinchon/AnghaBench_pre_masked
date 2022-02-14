
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pxa27x_keypad_platform_data {int direct_key_num; scalar_t__ enable_rotary1; scalar_t__ enable_rotary0; } ;
struct pxa27x_keypad {unsigned int direct_key_mask; unsigned int direct_key_state; int * keycodes; struct input_dev* input_dev; struct pxa27x_keypad_platform_data* pdata; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct input_dev*,int ,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,unsigned int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pxa27x_keypad*) ;

__attribute__((used)) static void FUNC_6(struct pxa27x_keypad *VAR_4)
{
 struct pxa27x_keypad_platform_data *VAR_5 = VAR_4->pdata;
 struct input_dev *VAR_6 = VAR_4->input_dev;
 unsigned int VAR_7;
 uint32_t VAR_8, VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4(VAR_1);

 if (VAR_5->enable_rotary0 || VAR_5->enable_rotary1)
  FUNC_5(VAR_4);

 VAR_7 = FUNC_0(VAR_8) & VAR_4->direct_key_mask;
 VAR_9 = VAR_4->direct_key_state ^ VAR_7;

 if (VAR_9 == 0)
  return;

 for (VAR_10 = 0; VAR_10 < VAR_5->direct_key_num; VAR_10++) {
  if (VAR_9 & (1 << VAR_10)) {
   int VAR_11 = VAR_2 + VAR_10;

   FUNC_1(VAR_6, VAR_0, VAR_3, VAR_11);
   FUNC_2(VAR_6, VAR_4->keycodes[VAR_11],
      VAR_7 & (1 << VAR_10));
  }
 }
 FUNC_3(VAR_6);
 VAR_4->direct_key_state = VAR_7;
}
