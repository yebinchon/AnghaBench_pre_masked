
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* spx_word16_t ;
typedef size_t spx_uint32_t ;
typedef size_t spx_int32_t ;
struct TYPE_5__ {int oversample; size_t base_length; int downsample_bandwidth; int upsample_bandwidth; int window_func; } ;
struct TYPE_4__ {size_t filt_len; int oversample; size_t quality; int num_rate; int den_rate; int cutoff; int sinc_table_length; int int_advance; int frac_advance; int mem_alloc_size; int buffer_size; int nb_channels; int* magic_samples; size_t* last_sample; void** mem; int started; void* resampler_ptr; void** sinc_table; } ;
typedef TYPE_1__ SpeexResamplerState ;


 TYPE_3__* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* FUNC_0 (int,size_t,size_t,int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void**,int) ;

__attribute__((used)) static void FUNC_3(SpeexResamplerState *VAR_5)
{
   spx_uint32_t VAR_6;

   VAR_6 = VAR_5->filt_len;
   VAR_5->oversample = VAR_0[VAR_5->quality].oversample;
   VAR_5->filt_len = VAR_0[VAR_5->quality].base_length;

   if (VAR_5->num_rate > VAR_5->den_rate)
   {

      VAR_5->cutoff = VAR_0[VAR_5->quality].downsample_bandwidth * VAR_5->den_rate / VAR_5->num_rate;

      VAR_5->filt_len = VAR_5->filt_len*VAR_5->num_rate / VAR_5->den_rate;

      VAR_5->filt_len &= (~0x3);
      if (2*VAR_5->den_rate < VAR_5->num_rate)
         VAR_5->oversample >>= 1;
      if (4*VAR_5->den_rate < VAR_5->num_rate)
         VAR_5->oversample >>= 1;
      if (8*VAR_5->den_rate < VAR_5->num_rate)
         VAR_5->oversample >>= 1;
      if (16*VAR_5->den_rate < VAR_5->num_rate)
         VAR_5->oversample >>= 1;
      if (VAR_5->oversample < 1)
         VAR_5->oversample = 1;
   } else {

      VAR_5->cutoff = VAR_0[VAR_5->quality].upsample_bandwidth;
   }


   if (VAR_5->den_rate <= VAR_5->oversample)
   {
      spx_uint32_t VAR_7;
      if (!VAR_5->sinc_table)
         VAR_5->sinc_table = (spx_word16_t *)FUNC_1(VAR_5->filt_len*VAR_5->den_rate*sizeof(spx_word16_t));
      else if (VAR_5->sinc_table_length < VAR_5->filt_len*VAR_5->den_rate)
      {
         VAR_5->sinc_table = (spx_word16_t *)FUNC_2(VAR_5->sinc_table,VAR_5->filt_len*VAR_5->den_rate*sizeof(spx_word16_t));
         VAR_5->sinc_table_length = VAR_5->filt_len*VAR_5->den_rate;
      }
      for (VAR_7=0;VAR_7<VAR_5->den_rate;VAR_7++)
      {
         spx_int32_t VAR_8;
         for (VAR_8=0;VAR_8<VAR_5->filt_len;VAR_8++)
         {
            VAR_5->sinc_table[VAR_7*VAR_5->filt_len+VAR_8] = FUNC_0(VAR_5->cutoff,((VAR_8-(spx_int32_t)VAR_5->filt_len/2+1)-((float)VAR_7)/VAR_5->den_rate), VAR_5->filt_len, VAR_0[VAR_5->quality].window_func);
         }
      }



      if (VAR_5->quality>8)
         VAR_5->resampler_ptr = VAR_1;
      else
         VAR_5->resampler_ptr = VAR_2;


   } else {
      spx_int32_t VAR_9;
      if (!VAR_5->sinc_table)
         VAR_5->sinc_table = (spx_word16_t *)FUNC_1((VAR_5->filt_len*VAR_5->oversample+8)*sizeof(spx_word16_t));
      else if (VAR_5->sinc_table_length < VAR_5->filt_len*VAR_5->oversample+8)
      {
         VAR_5->sinc_table = (spx_word16_t *)FUNC_2(VAR_5->sinc_table,(VAR_5->filt_len*VAR_5->oversample+8)*sizeof(spx_word16_t));
         VAR_5->sinc_table_length = VAR_5->filt_len*VAR_5->oversample+8;
      }
      for (VAR_9=-4;VAR_9<(spx_int32_t)(VAR_5->oversample*VAR_5->filt_len+4);VAR_9++)
         VAR_5->sinc_table[VAR_9+4] = FUNC_0(VAR_5->cutoff,(VAR_9/(float)VAR_5->oversample - VAR_5->filt_len/2), VAR_5->filt_len, VAR_0[VAR_5->quality].window_func);



      if (VAR_5->quality>8)
         VAR_5->resampler_ptr = VAR_3;
      else
         VAR_5->resampler_ptr = VAR_4;


   }
   VAR_5->int_advance = VAR_5->num_rate/VAR_5->den_rate;
   VAR_5->frac_advance = VAR_5->num_rate%VAR_5->den_rate;





   if (!VAR_5->mem)
   {
      spx_uint32_t VAR_10;
      VAR_5->mem_alloc_size = VAR_5->filt_len-1 + VAR_5->buffer_size;
      VAR_5->mem = (spx_word16_t*)FUNC_1(VAR_5->nb_channels*VAR_5->mem_alloc_size * sizeof(spx_word16_t));
      for (VAR_10=0;VAR_10<VAR_5->nb_channels*VAR_5->mem_alloc_size;VAR_10++)
         VAR_5->mem[VAR_10] = 0;

   } else if (!VAR_5->started)
   {
      spx_uint32_t VAR_11;
      VAR_5->mem_alloc_size = VAR_5->filt_len-1 + VAR_5->buffer_size;
      VAR_5->mem = (spx_word16_t*)FUNC_2(VAR_5->mem, VAR_5->nb_channels*VAR_5->mem_alloc_size * sizeof(spx_word16_t));
      for (VAR_11=0;VAR_11<VAR_5->nb_channels*VAR_5->mem_alloc_size;VAR_11++)
         VAR_5->mem[VAR_11] = 0;

   } else if (VAR_5->filt_len > VAR_6)
   {
      spx_int32_t VAR_12;


      int VAR_13 = VAR_5->mem_alloc_size;
      if ((VAR_5->filt_len-1 + VAR_5->buffer_size) > VAR_5->mem_alloc_size)
      {
         VAR_5->mem_alloc_size = VAR_5->filt_len-1 + VAR_5->buffer_size;
         VAR_5->mem = (spx_word16_t*)FUNC_2(VAR_5->mem, VAR_5->nb_channels*VAR_5->mem_alloc_size * sizeof(spx_word16_t));
      }
      for (VAR_12=VAR_5->nb_channels-1;VAR_12>=0;VAR_12--)
      {
         spx_int32_t VAR_14;
         spx_uint32_t VAR_15 = VAR_6;

         {



            VAR_15 = VAR_6 + 2*VAR_5->magic_samples[VAR_12];
            for (VAR_14=VAR_6-2+VAR_5->magic_samples[VAR_12];VAR_14>=0;VAR_14--)
               VAR_5->mem[VAR_12*VAR_5->mem_alloc_size+VAR_14+VAR_5->magic_samples[VAR_12]] = VAR_5->mem[VAR_12*VAR_13+VAR_14];
            for (VAR_14=0;VAR_14<VAR_5->magic_samples[VAR_12];VAR_14++)
               VAR_5->mem[VAR_12*VAR_5->mem_alloc_size+VAR_14] = 0;
            VAR_5->magic_samples[VAR_12] = 0;
         }
         if (VAR_5->filt_len > VAR_15)
         {


            for (VAR_14=0;VAR_14<VAR_15-1;VAR_14++)
               VAR_5->mem[VAR_12*VAR_5->mem_alloc_size+(VAR_5->filt_len-2-VAR_14)] = VAR_5->mem[VAR_12*VAR_5->mem_alloc_size+(VAR_15-2-VAR_14)];

            for (;VAR_14<VAR_5->filt_len-1;VAR_14++)
               VAR_5->mem[VAR_12*VAR_5->mem_alloc_size+(VAR_5->filt_len-2-VAR_14)] = 0;

            VAR_5->last_sample[VAR_12] += (VAR_5->filt_len - VAR_15)/2;
         } else {

            VAR_5->magic_samples[VAR_12] = (VAR_15 - VAR_5->filt_len)/2;
            for (VAR_14=0;VAR_14<VAR_5->filt_len-1+VAR_5->magic_samples[VAR_12];VAR_14++)
               VAR_5->mem[VAR_12*VAR_5->mem_alloc_size+VAR_14] = VAR_5->mem[VAR_12*VAR_5->mem_alloc_size+VAR_14+VAR_5->magic_samples[VAR_12]];
         }
      }
   } else if (VAR_5->filt_len < VAR_6)
   {
      spx_uint32_t VAR_16;


      for (VAR_16=0;VAR_16<VAR_5->nb_channels;VAR_16++)
      {
         spx_uint32_t VAR_17;
         spx_uint32_t VAR_18 = VAR_5->magic_samples[VAR_16];
         VAR_5->magic_samples[VAR_16] = (VAR_6 - VAR_5->filt_len)/2;


         for (VAR_17=0;VAR_17<VAR_5->filt_len-1+VAR_5->magic_samples[VAR_16]+VAR_18;VAR_17++)
            VAR_5->mem[VAR_16*VAR_5->mem_alloc_size+VAR_17] = VAR_5->mem[VAR_16*VAR_5->mem_alloc_size+VAR_17+VAR_5->magic_samples[VAR_16]];
         VAR_5->magic_samples[VAR_16] += VAR_18;
      }
   }

}
