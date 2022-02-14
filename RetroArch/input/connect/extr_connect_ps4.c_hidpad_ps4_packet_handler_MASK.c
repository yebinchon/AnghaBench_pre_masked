
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ps4 {int dummy; } ;
struct hidpad_ps4_data {int have_led; int data; } ;


 int FUNC_0 (struct hidpad_ps4_data*) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
      uint8_t *VAR_1, uint16_t VAR_2)
{
   struct hidpad_ps4_data *VAR_3 = (struct hidpad_ps4_data*)VAR_0;

   if (!VAR_3)
      return;
   FUNC_1(&VAR_3->data, &VAR_1[2], sizeof(struct ps4));
}
