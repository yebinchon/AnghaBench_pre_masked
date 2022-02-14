
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct retro_keybind {size_t key; scalar_t__ valid; } ;
typedef int int16_t ;
struct TYPE_3__ {int key_state; } ;
typedef TYPE_1__ input_ctx_wayland_data_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 int * VAR_1 ;

__attribute__((used)) static int16_t FUNC_2(input_ctx_wayland_data_t *VAR_2,
      const struct retro_keybind *VAR_3,
      unsigned VAR_4, unsigned VAR_5)
{
   unsigned VAR_6 = 0;
   unsigned VAR_7 = 0;
   int16_t VAR_8 = 0;
   int16_t VAR_9 = 0;

   FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);

   if (VAR_3
         && VAR_3[VAR_6].valid
         && (VAR_6 < VAR_0)
         && FUNC_0(VAR_2->key_state, VAR_1[VAR_3[VAR_6].key])
      )
      VAR_8 = -0x7fff;
   if (VAR_3
         && VAR_3[VAR_7].valid
         && (VAR_7 < VAR_0)
         && FUNC_0(VAR_2->key_state, VAR_1[VAR_3[VAR_7].key])
      )
      VAR_9 = 0x7fff;

   return VAR_9 + VAR_8;
}
