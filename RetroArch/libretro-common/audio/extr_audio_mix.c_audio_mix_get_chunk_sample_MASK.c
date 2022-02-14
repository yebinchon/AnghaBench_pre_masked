
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ int16_t ;
struct TYPE_5__ {TYPE_1__* rwav; scalar_t__ upsample_buf; scalar_t__ resample_buf; scalar_t__ resample; } ;
typedef TYPE_2__ audio_chunk_t ;
struct TYPE_4__ {int bitspersample; int numchannels; } ;



int16_t FUNC_0(audio_chunk_t *VAR_0, unsigned VAR_1, size_t VAR_2)
{
   if (!VAR_0)
      return 0;

   if (VAR_0->rwav)
   {
      int VAR_3 = VAR_0->rwav->bitspersample / 8;
      int16_t VAR_4 = 0;


      uint8_t *VAR_5 = ((void*)0);

      if (VAR_0->resample)
         VAR_5 = (uint8_t*)VAR_0->resample_buf +
            (VAR_3 * VAR_2 * VAR_0->rwav->numchannels) + (VAR_1 * VAR_3);
      else
         VAR_5 = (uint8_t*)VAR_0->upsample_buf +
            (VAR_3 * VAR_2 * VAR_0->rwav->numchannels) + (VAR_1 * VAR_3);

      VAR_4 = (int16_t)*VAR_5;

      return VAR_4;
   }


   return 0;
}
