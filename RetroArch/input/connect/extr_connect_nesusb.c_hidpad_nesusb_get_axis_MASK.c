
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidpad_nesusb_data {int* data; } ;
typedef int int16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int16_t FUNC_1(void *VAR_0, unsigned VAR_1)
{
   int VAR_2;
   struct hidpad_nesusb_data *VAR_3 = (struct hidpad_nesusb_data*)VAR_0;

   if (!VAR_3 || VAR_1 >= 2)
      return 0;

   VAR_2 = VAR_3->data[4 + VAR_1];
   VAR_2 = (VAR_2 << 8) - 0x8000;

   return (FUNC_0(VAR_2) > 0x1000) ? VAR_2 : 0;
}
