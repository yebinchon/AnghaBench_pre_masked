
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct twl4030_keypad {int n_rows; int* kp_state; int n_cols; int * keymap; int dbg_dev; struct input_dev* input; } ;
struct input_dev {int dummy; } ;
typedef int new_state ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,int,char*) ;
 int FUNC_2 (struct input_dev*,int ,int ,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (int*,int ,int) ;
 scalar_t__ FUNC_6 (struct twl4030_keypad*,int*) ;
 int FUNC_7 (struct twl4030_keypad*,int*) ;

__attribute__((used)) static void FUNC_8(struct twl4030_keypad *VAR_4, bool VAR_5)
{
 struct input_dev *VAR_6 = VAR_4->input;
 u16 VAR_7[VAR_2];
 int VAR_8, VAR_9;

 if (VAR_5)
  FUNC_5(VAR_7, 0, sizeof(VAR_7));
 else {

  int VAR_10 = FUNC_7(VAR_4, VAR_7);

  if (VAR_10 < 0)
   return;

  if (FUNC_6(VAR_4, VAR_7))
   return;
 }


 for (VAR_9 = 0; VAR_9 < VAR_4->n_rows; VAR_9++) {
  int VAR_11 = VAR_7[VAR_9] ^ VAR_4->kp_state[VAR_9];

  if (!VAR_11)
   continue;

  for (VAR_8 = 0; VAR_8 < VAR_4->n_cols; VAR_8++) {
   int VAR_12;

   if (!(VAR_11 & (1 << VAR_8)))
    continue;

   FUNC_1(VAR_4->dbg_dev, "key [%d:%d] %s\n", VAR_9, VAR_8,
    (VAR_7[VAR_9] & (1 << VAR_8)) ?
    "press" : "release");

   VAR_12 = FUNC_0(VAR_9, VAR_8, VAR_3);
   FUNC_2(VAR_6, VAR_0, VAR_1, VAR_12);
   FUNC_3(VAR_6, VAR_4->keymap[VAR_12],
      VAR_7[VAR_9] & (1 << VAR_8));
  }
  VAR_4->kp_state[VAR_9] = VAR_7[VAR_9];
 }
 FUNC_4(VAR_6);
}
