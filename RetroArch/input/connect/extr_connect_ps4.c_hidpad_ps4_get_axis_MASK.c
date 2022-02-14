
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps4 {int* hatvalue; } ;
struct hidpad_ps4_data {int data; } ;
typedef int int16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int16_t FUNC_1(void *VAR_0, unsigned VAR_1)
{
   struct hidpad_ps4_data *VAR_2 = (struct hidpad_ps4_data*)VAR_0;
   struct ps4 *VAR_3 = VAR_2 ? (struct ps4*)&VAR_2->data : ((void*)0);

   if (VAR_2 && (VAR_1 < 4))
   {
      int VAR_4 = VAR_3 ? VAR_3->hatvalue[VAR_1] : 0;
      VAR_4 = (VAR_4 << 8) - 0x8000;
      return (FUNC_0(VAR_4) > 0x1000) ? VAR_4 : 0;
   }

   return 0;
}
