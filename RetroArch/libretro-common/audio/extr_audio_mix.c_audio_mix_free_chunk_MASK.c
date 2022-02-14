
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ resampler_data; TYPE_1__* resampler; scalar_t__ resample_buf; scalar_t__ float_resample_buf; scalar_t__ float_buf; scalar_t__ upsample_buf; struct TYPE_7__* buf; struct TYPE_7__* rwav; scalar_t__ samples; } ;
typedef TYPE_2__ audio_chunk_t ;
struct TYPE_6__ {int (* free ) (scalar_t__) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(audio_chunk_t *VAR_0)
{
   if (!VAR_0)
      return;

   if (VAR_0->rwav && VAR_0->rwav->samples)
   {

      FUNC_2(VAR_0->rwav);
      FUNC_0(VAR_0->rwav);
   }

   if (VAR_0->buf)
      FUNC_0(VAR_0->buf);

   if (VAR_0->upsample_buf)
      FUNC_1(VAR_0->upsample_buf);

   if (VAR_0->float_buf)
      FUNC_1(VAR_0->float_buf);

   if (VAR_0->float_resample_buf)
      FUNC_1(VAR_0->float_resample_buf);

   if (VAR_0->resample_buf)
      FUNC_1(VAR_0->resample_buf);

   if (VAR_0->resampler && VAR_0->resampler_data)
      VAR_0->resampler->free(VAR_0->resampler_data);

   FUNC_0(VAR_0);
}
