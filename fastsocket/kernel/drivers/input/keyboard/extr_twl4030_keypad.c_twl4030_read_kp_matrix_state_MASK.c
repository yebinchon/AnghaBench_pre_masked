
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct twl4030_keypad {int n_rows; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct twl4030_keypad*,int ) ;
 int FUNC_1 (struct twl4030_keypad*,int *,int ,int) ;

__attribute__((used)) static int FUNC_2(struct twl4030_keypad *VAR_2, u16 *VAR_3)
{
 u8 VAR_4[VAR_1];
 int VAR_5;
 int VAR_6 = FUNC_1(VAR_2, VAR_4,
     VAR_0, VAR_2->n_rows);
 if (VAR_6 >= 0)
  for (VAR_5 = 0; VAR_5 < VAR_2->n_rows; VAR_5++)
   VAR_3[VAR_5] = FUNC_0(VAR_2, VAR_4[VAR_5]);

 return VAR_6;
}
