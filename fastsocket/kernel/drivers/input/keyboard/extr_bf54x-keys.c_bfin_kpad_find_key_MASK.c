
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct input_dev {size_t keycodemax; } ;
struct bf54x_kpad {size_t* keycode; } ;



__attribute__((used)) static inline int FUNC_0(struct bf54x_kpad *VAR_0,
   struct input_dev *VAR_1, u16 VAR_2)
{
 u16 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->keycodemax; VAR_3++)
  if (VAR_0->keycode[VAR_3 + VAR_1->keycodemax] == VAR_2)
   return VAR_0->keycode[VAR_3];
 return -1;
}
