
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int * upsample_buf; int * resample_buf; scalar_t__ resample; scalar_t__ rwav; } ;
typedef TYPE_1__ audio_chunk_t ;



int16_t* FUNC_0(audio_chunk_t *VAR_0)
{
   if (!VAR_0)
      return 0;

   if (VAR_0->rwav)
   {
      int16_t *VAR_1;

      if (VAR_0->resample)
         VAR_1 = VAR_0->resample_buf;
      else
         VAR_1 = VAR_0->upsample_buf;

      return VAR_1;
   }

   return ((void*)0);
}
