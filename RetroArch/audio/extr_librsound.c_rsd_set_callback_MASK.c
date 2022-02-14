
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t cb_max_size; int error_callback; scalar_t__ audio_callback; void* cb_data; } ;
typedef TYPE_1__ rsound_t ;
typedef int rsd_error_callback_t ;
typedef scalar_t__ rsd_audio_callback_t ;


 int FUNC_0 (int ) ;

void FUNC_1(rsound_t *VAR_0, rsd_audio_callback_t VAR_1, rsd_error_callback_t VAR_2, size_t VAR_3, void *VAR_4)
{
   FUNC_0(VAR_0 != ((void*)0));

   VAR_0->audio_callback = VAR_1;
   VAR_0->error_callback = VAR_2;
   VAR_0->cb_max_size = VAR_3;
   VAR_0->cb_data = VAR_4;

   if (VAR_0->audio_callback)
   {
      FUNC_0(VAR_0->error_callback);
   }
}
