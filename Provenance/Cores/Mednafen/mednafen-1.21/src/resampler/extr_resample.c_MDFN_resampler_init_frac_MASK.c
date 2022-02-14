
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int spx_uint32_t ;
typedef scalar_t__ spx_int32_t ;
struct TYPE_6__ {int initialised; int quality; float cutoff; int nb_channels; int in_stride; int out_stride; int buffer_size; int* magic_samples; int* samp_frac_num; scalar_t__* last_sample; scalar_t__ resampler_ptr; scalar_t__ mem; scalar_t__ filt_len; scalar_t__ mem_alloc_size; scalar_t__ sinc_table_length; scalar_t__ den_rate; scalar_t__ num_rate; scalar_t__ out_rate; scalar_t__ in_rate; scalar_t__ started; } ;
typedef TYPE_1__ SpeexResamplerState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int,int) ;
 int FUNC_3 (TYPE_1__*) ;

SpeexResamplerState *FUNC_4(spx_uint32_t VAR_2, spx_uint32_t VAR_3, spx_uint32_t VAR_4, spx_uint32_t VAR_5, spx_uint32_t VAR_6, int VAR_7, int *VAR_8)
{
   spx_uint32_t VAR_9;
   SpeexResamplerState *VAR_10;
   if (VAR_7 > 10 || VAR_7 < 0)
   {
      if (VAR_8)
         *VAR_8 = VAR_0;
      return ((void*)0);
   }
   VAR_10 = (SpeexResamplerState *)FUNC_0(sizeof(SpeexResamplerState));
   VAR_10->initialised = 0;
   VAR_10->started = 0;
   VAR_10->in_rate = 0;
   VAR_10->out_rate = 0;
   VAR_10->num_rate = 0;
   VAR_10->den_rate = 0;
   VAR_10->quality = -1;
   VAR_10->sinc_table_length = 0;
   VAR_10->mem_alloc_size = 0;
   VAR_10->filt_len = 0;
   VAR_10->mem = 0;
   VAR_10->resampler_ptr = 0;

   VAR_10->cutoff = 1.f;
   VAR_10->nb_channels = VAR_2;
   VAR_10->in_stride = 1;
   VAR_10->out_stride = 1;




   VAR_10->buffer_size = 160;



   VAR_10->last_sample = (spx_int32_t*)FUNC_0(VAR_2*sizeof(int));
   VAR_10->magic_samples = (spx_uint32_t*)FUNC_0(VAR_2*sizeof(int));
   VAR_10->samp_frac_num = (spx_uint32_t*)FUNC_0(VAR_2*sizeof(int));
   for (VAR_9=0;VAR_9<VAR_2;VAR_9++)
   {
      VAR_10->last_sample[VAR_9] = 0;
      VAR_10->magic_samples[VAR_9] = 0;
      VAR_10->samp_frac_num[VAR_9] = 0;
   }

   FUNC_1(VAR_10, VAR_7);
   FUNC_2(VAR_10, VAR_3, VAR_4, VAR_5, VAR_6);


   FUNC_3(VAR_10);

   VAR_10->initialised = 1;
   if (VAR_8)
      *VAR_8 = VAR_1;

   return VAR_10;
}
