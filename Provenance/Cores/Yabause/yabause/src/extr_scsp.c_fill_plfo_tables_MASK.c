
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* saw_table; int* square_table; int* tri_table; int* noise_table; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;

void FUNC_1()
{
   int VAR_1;


   for (VAR_1 = 0; VAR_1 < 256; VAR_1++)
   {
      if (VAR_1 < 128)
         VAR_0.saw_table[VAR_1] = VAR_1;
      else
         VAR_0.saw_table[VAR_1] = -256 + VAR_1;
   }


   for (VAR_1 = 0; VAR_1 < 256; VAR_1++)
   {
      if (VAR_1 < 128)
         VAR_0.square_table[VAR_1] = 127;
      else
         VAR_0.square_table[VAR_1] = -128;
   }


   for (VAR_1 = 0; VAR_1 < 256; VAR_1++)
   {
      if (VAR_1 < 64)
         VAR_0.tri_table[VAR_1] = VAR_1 * 2;
      else if (VAR_1 < 192)
         VAR_0.tri_table[VAR_1] = 255 - (VAR_1 * 2);
      else
         VAR_0.tri_table[VAR_1] = (VAR_1 * 2) - 512;
   }


   for (VAR_1 = 0; VAR_1 < 256; VAR_1++)
   {
      VAR_0.noise_table[VAR_1] = FUNC_0() & 0xff;
   }
}
