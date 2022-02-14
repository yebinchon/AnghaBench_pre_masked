
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; } ;
typedef TYPE_1__ x11_input_t ;
struct retro_keybind {int key; scalar_t__ valid; } ;
typedef int int16_t ;
typedef enum retro_key { ____Placeholder_retro_key } retro_key ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned int* VAR_1 ;

__attribute__((used)) static int16_t FUNC_1(x11_input_t *VAR_2,
      const struct retro_keybind *VAR_3, unsigned VAR_4, unsigned VAR_5)
{
   int16_t VAR_6 = 0;
   int16_t VAR_7 = 0;
   unsigned VAR_8 = 0;
   unsigned VAR_9 = 0;
   int VAR_10 = 0;
   int VAR_11 = 0;
   unsigned VAR_12 = 0;

   FUNC_0(VAR_4, VAR_5, VAR_8, VAR_9);

   VAR_10 = VAR_3[VAR_8].key;
   VAR_11 = VAR_3[VAR_9].key;

   VAR_12 = VAR_1[(enum retro_key)VAR_10];
   if ( VAR_3[VAR_8].valid
         && (VAR_10 < VAR_0)
         && (VAR_2->state[VAR_12 >> 3] & (1 << (VAR_12 & 7))))
      VAR_6 = -0x7fff;

   VAR_12 = VAR_1[(enum retro_key)VAR_11];
   if ( VAR_3[VAR_9].valid
         && (VAR_11 < VAR_0)
         && (VAR_2->state[VAR_12 >> 3] & (1 << (VAR_12 & 7))))
      VAR_7 = 0x7fff;

   return VAR_7 + VAR_6;
}
