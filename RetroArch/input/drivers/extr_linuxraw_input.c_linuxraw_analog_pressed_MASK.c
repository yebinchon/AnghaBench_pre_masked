
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct retro_keybind {scalar_t__ key; int valid; } ;
struct TYPE_3__ {int* state; } ;
typedef TYPE_1__ linuxraw_input_t ;
typedef int int16_t ;
typedef enum retro_key { ____Placeholder_retro_key } retro_key ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned int* VAR_1 ;

__attribute__((used)) static int16_t FUNC_1(linuxraw_input_t *VAR_2,
      const struct retro_keybind *VAR_3, unsigned VAR_4, unsigned VAR_5)
{
   const struct retro_keybind *VAR_6, *VAR_7;
   int16_t VAR_8 = 0, VAR_9 = 0;
   unsigned VAR_10 = 0;
   unsigned VAR_11 = 0;

   FUNC_0(VAR_4, VAR_5, VAR_10, VAR_11);

   VAR_6 = &VAR_3[VAR_10];
   VAR_7 = &VAR_3[VAR_11];

   if (!VAR_6->valid || !VAR_7->valid)
      return 0;

   if (VAR_6->key < VAR_0)
   {
      unsigned VAR_12 = VAR_1[(enum retro_key)VAR_6->key];
      if (VAR_2->state[VAR_12] & 0x80)
         VAR_8 = -0x7fff;
   }
   if (VAR_7->key < VAR_0)
   {
      unsigned VAR_13 = VAR_1[(enum retro_key)VAR_6->key];
      if (VAR_2->state[VAR_13] & 0x80)
         VAR_9 = 0x7fff;
   }

   return VAR_9 + VAR_8;
}
