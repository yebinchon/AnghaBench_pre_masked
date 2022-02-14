
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef enum rgui_symbol_type { ____Placeholder_rgui_symbol_type } rgui_symbol_type ;
struct TYPE_2__ {int * data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int * FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(unsigned VAR_3, int VAR_4, int VAR_5,
      enum rgui_symbol_type VAR_6, uint16_t VAR_7, uint16_t VAR_8)
{
   unsigned VAR_9, VAR_10;
   uint16_t *VAR_11 = VAR_2.data;
   const uint8_t *VAR_12 = FUNC_0(VAR_6);

   if (!VAR_12)
      return;

   for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
   {
      unsigned VAR_13 = ((VAR_5 + VAR_10) * VAR_3) + VAR_4;

      for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
      {
         if (*VAR_12++ == 1)
            *(VAR_11 + VAR_13 + VAR_9) = VAR_7;
      }
   }
}
