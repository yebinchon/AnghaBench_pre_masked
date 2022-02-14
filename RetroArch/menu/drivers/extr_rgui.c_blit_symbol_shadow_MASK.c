
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int shadow_color_buf ;
typedef enum rgui_symbol_type { ____Placeholder_rgui_symbol_type } rgui_symbol_type ;
typedef int color_buf ;
struct TYPE_2__ {int * data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 TYPE_1__ VAR_2 ;
 int * FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(unsigned VAR_3, int VAR_4, int VAR_5,
      enum rgui_symbol_type VAR_6, uint16_t VAR_7, uint16_t VAR_8)
{
   unsigned VAR_9, VAR_10;
   uint16_t *VAR_11 = VAR_2.data;
   const uint8_t *VAR_12 = FUNC_1(VAR_6);
   uint16_t VAR_13[2];
   uint16_t VAR_14[2];

   VAR_13[0] = VAR_7;
   VAR_13[1] = VAR_8;

   VAR_14[0] = VAR_8;
   VAR_14[1] = VAR_8;

   if (!VAR_12)
      return;

   for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
   {
      unsigned VAR_15 = ((VAR_5 + VAR_10) * VAR_3) + VAR_4;

      for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
      {
         if (*VAR_12++ == 1)
         {
            uint16_t *VAR_16 = VAR_11 + VAR_15 + VAR_9;


            FUNC_0(VAR_16, VAR_13, sizeof(VAR_13));


            VAR_16 += VAR_3;
            FUNC_0(VAR_16, VAR_14, sizeof(VAR_14));
         }
      }
   }
}
