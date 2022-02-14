
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrix_keypad_platform_data {int num_row_gpios; int * row_gpios; } ;
struct matrix_keypad {struct matrix_keypad_platform_data* pdata; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct matrix_keypad *VAR_0)
{
 const struct matrix_keypad_platform_data *VAR_1 = VAR_0->pdata;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_row_gpios; VAR_2++)
  FUNC_0(FUNC_1(VAR_1->row_gpios[VAR_2]));
}
