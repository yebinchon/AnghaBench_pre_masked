
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void const uint8_t ;
typedef int uint32_t ;
typedef size_t u32 ;
typedef size_t ssize_t ;
struct TYPE_3__ {scalar_t__ data_pcm8; } ;
struct TYPE_4__ {int pos; TYPE_1__ dsp_buf; int channel; scalar_t__ nonblocking; } ;
typedef TYPE_2__ ctr_dsp_audio_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (scalar_t__,size_t) ;
 int FUNC_1 (scalar_t__,void const*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static ssize_t FUNC_4(void *VAR_3, const void *VAR_4, size_t VAR_5)
{
   u32 VAR_6;
   ctr_dsp_audio_t * VAR_7 = (ctr_dsp_audio_t*)VAR_3;
   uint32_t VAR_8 = FUNC_2(VAR_7->channel);

   if((((VAR_8 - VAR_7->pos) & VAR_1) < (VAR_0 >> 2)) ||
      (((VAR_7->pos - VAR_8 ) & VAR_1) < (VAR_0 >> 4)) ||
      (((VAR_8 - VAR_7->pos) & VAR_1) < (VAR_5 >> 2)))
   {
      if (VAR_7->nonblocking)
         VAR_7->pos = (VAR_8 + (VAR_0 >> 1)) & VAR_1;
      else
      {
         do{
            FUNC_3(100000);
            VAR_8 = FUNC_2(VAR_7->channel);
         }while (((VAR_8 - (VAR_7->pos + (VAR_5 >>2))) & VAR_1) > (VAR_0 >> 1)
                 || (((VAR_7->pos - (VAR_0 >> 4) - VAR_8) & VAR_1) > (VAR_0 >> 1)));
      }
   }

   VAR_6 = VAR_7->pos << 2;

   if((VAR_6 + VAR_5) > VAR_2)
   {
      FUNC_1(VAR_7->dsp_buf.data_pcm8 + VAR_6, VAR_4,
            (VAR_2 - VAR_6));
      FUNC_0(VAR_7->dsp_buf.data_pcm8 + VAR_6, (VAR_2 - VAR_6));

      FUNC_1(VAR_7->dsp_buf.data_pcm8, (uint8_t*) VAR_4 + (VAR_2 - VAR_6),
            (VAR_6 + VAR_5 - VAR_2));
      FUNC_0(VAR_7->dsp_buf.data_pcm8, (VAR_6 + VAR_5 - VAR_2));
   }
   else
   {
      FUNC_1(VAR_7->dsp_buf.data_pcm8 + VAR_6, VAR_4, VAR_5);
      FUNC_0(VAR_7->dsp_buf.data_pcm8 + VAR_6, VAR_5);
   }

   VAR_7->pos += VAR_5 >> 2;
   VAR_7->pos &= VAR_1;

   return VAR_5;
}
