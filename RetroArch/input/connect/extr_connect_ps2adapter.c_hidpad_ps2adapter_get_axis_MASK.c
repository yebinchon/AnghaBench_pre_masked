
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidpad_ps2adapter_data {int* data; } ;
typedef int int16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int16_t FUNC_1(void *VAR_0, unsigned VAR_1)
{
   int VAR_2 = 0;
   struct hidpad_ps2adapter_data *VAR_3 = (struct hidpad_ps2adapter_data*)VAR_0;

   if (!VAR_3 || VAR_1 >= 4)
      return 0;

   switch (VAR_1)
   {
      case 0:
         VAR_2 = VAR_3->data[4];
         break;
      case 1:
         VAR_2 = VAR_3->data[5];
         break;
      case 2:
         VAR_2 = VAR_3->data[3];
         break;
      case 3:
         VAR_2 = VAR_3->data[2];
         break;
   }

   VAR_2 = (VAR_2 << 8) - 0x8000;

   return (FUNC_0(VAR_2) > 0x1000) ? VAR_2 : 0;
}
