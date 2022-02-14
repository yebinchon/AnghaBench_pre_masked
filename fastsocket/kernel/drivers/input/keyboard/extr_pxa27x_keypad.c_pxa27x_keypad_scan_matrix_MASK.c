
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pxa27x_keypad_platform_data {int matrix_key_cols; int matrix_key_rows; } ;
struct pxa27x_keypad {int* matrix_key_state; int * keycodes; struct input_dev* input_dev; struct pxa27x_keypad_platform_data* pdata; } ;
struct input_dev {int dummy; } ;
typedef int new_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct input_dev*,int ,int ,int) ;
 int FUNC_5 (struct input_dev*,int ,int) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int*,int*,int) ;
 int FUNC_9 (int*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct pxa27x_keypad *VAR_10)
{
 struct pxa27x_keypad_platform_data *VAR_11 = VAR_10->pdata;
 struct input_dev *VAR_12 = VAR_10->input_dev;
 int VAR_13, VAR_14, VAR_15 = 0;
 uint32_t VAR_16[VAR_8];
 uint32_t VAR_17 = FUNC_7(VAR_1);

 VAR_15 = FUNC_1(VAR_17);

 FUNC_9(VAR_16, 0, sizeof(VAR_16));

 if (VAR_15 == 0)
  goto scan;

 if (VAR_15 == 1) {
  VAR_14 = FUNC_0(VAR_17);
  VAR_13 = FUNC_2(VAR_17);


  if (VAR_14 >= VAR_11->matrix_key_cols ||
      VAR_13 >= VAR_11->matrix_key_rows)
   goto scan;

  VAR_16[VAR_14] = (1 << VAR_13);
  goto scan;
 }

 if (VAR_15 > 1) {
  uint32_t VAR_18 = FUNC_7(VAR_2);
  uint32_t VAR_19 = FUNC_7(VAR_3);
  uint32_t VAR_20 = FUNC_7(VAR_4);
  uint32_t VAR_21 = FUNC_7(VAR_5);

  VAR_16[0] = VAR_18 & VAR_6;
  VAR_16[1] = (VAR_18 >> 16) & VAR_6;
  VAR_16[2] = VAR_19 & VAR_6;
  VAR_16[3] = (VAR_19 >> 16) & VAR_6;
  VAR_16[4] = VAR_20 & VAR_6;
  VAR_16[5] = (VAR_20 >> 16) & VAR_6;
  VAR_16[6] = VAR_21 & VAR_6;
  VAR_16[7] = (VAR_21 >> 16) & VAR_6;
 }
scan:
 for (VAR_14 = 0; VAR_14 < VAR_11->matrix_key_cols; VAR_14++) {
  uint32_t VAR_22;
  int VAR_23;

  VAR_22 = VAR_10->matrix_key_state[VAR_14] ^ VAR_16[VAR_14];
  if (VAR_22 == 0)
   continue;

  for (VAR_13 = 0; VAR_13 < VAR_11->matrix_key_rows; VAR_13++) {
   if ((VAR_22 & (1 << VAR_13)) == 0)
    continue;

   VAR_23 = FUNC_3(VAR_13, VAR_14, VAR_7);
   FUNC_4(VAR_12, VAR_0, VAR_9, VAR_23);
   FUNC_5(VAR_12, VAR_10->keycodes[VAR_23],
      VAR_16[VAR_14] & (1 << VAR_13));
  }
 }
 FUNC_6(VAR_12);
 FUNC_8(VAR_10->matrix_key_state, VAR_16, sizeof(VAR_16));
}
