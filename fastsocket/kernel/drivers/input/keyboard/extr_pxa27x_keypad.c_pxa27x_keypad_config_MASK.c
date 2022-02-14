
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa27x_keypad_platform_data {unsigned int direct_key_num; unsigned long debounce_interval; scalar_t__ enable_rotary1; scalar_t__ enable_rotary0; scalar_t__ matrix_key_cols; scalar_t__ matrix_key_rows; } ;
struct pxa27x_keypad {int direct_key_mask; struct pxa27x_keypad_platform_data* pdata; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (unsigned int) ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_1 (scalar_t__) ;
 unsigned long FUNC_2 (scalar_t__) ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct pxa27x_keypad *VAR_13)
{
 struct pxa27x_keypad_platform_data *VAR_14 = VAR_13->pdata;
 unsigned int VAR_15 = 0, VAR_16 = 0;
 unsigned long VAR_17 = 0;


 if (VAR_14->matrix_key_rows && VAR_14->matrix_key_cols) {
  VAR_17 |= VAR_2 | VAR_6 | VAR_5 | VAR_7;
  VAR_17 |= FUNC_2(VAR_14->matrix_key_rows) |
         FUNC_1(VAR_14->matrix_key_cols);
 }


 if (VAR_14->enable_rotary0) {
  VAR_15 |= 0x03;
  VAR_16 = 2;
  VAR_17 |= VAR_8;
 }

 if (VAR_14->enable_rotary1) {
  VAR_15 |= 0x0c;
  VAR_16 = 4;
  VAR_17 |= VAR_9;
 }

 if (VAR_14->direct_key_num > VAR_16)
  VAR_16 = VAR_14->direct_key_num;

 VAR_13->direct_key_mask = ((2 << VAR_16) - 1) & ~VAR_15;


 if (VAR_16)
  VAR_17 |= VAR_3 | VAR_4 | FUNC_0(VAR_16);

 FUNC_3(VAR_1, VAR_17 | VAR_10);
 FUNC_3(VAR_12, VAR_0);
 FUNC_3(VAR_11, VAR_14->debounce_interval);
}
