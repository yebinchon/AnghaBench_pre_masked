
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float spx_word32_t ;
typedef float spx_word16_t ;
typedef size_t spx_uint32_t ;
typedef int spx_int32_t ;
struct TYPE_3__ {int filt_len; int* last_sample; size_t* samp_frac_num; float* sinc_table; int out_stride; int int_advance; int frac_advance; size_t den_rate; } ;
typedef TYPE_1__ SpeexResamplerState ;


 float FUNC_0 (float,int) ;
 float FUNC_1 (float const*,float const*,int const) ;

__attribute__((used)) static int FUNC_2(SpeexResamplerState *VAR_0, spx_uint32_t VAR_1, const spx_word16_t *VAR_2, spx_uint32_t *VAR_3, spx_word16_t *VAR_4, spx_uint32_t *VAR_5)
{
   const int VAR_6 = VAR_0->filt_len;
   int VAR_7 = 0;
   int VAR_8 = VAR_0->last_sample[VAR_1];
   spx_uint32_t VAR_9 = VAR_0->samp_frac_num[VAR_1];
   const spx_word16_t *VAR_10 = VAR_0->sinc_table;
   const int VAR_11 = VAR_0->out_stride;
   const int VAR_12 = VAR_0->int_advance;
   const int VAR_13 = VAR_0->frac_advance;
   const spx_uint32_t VAR_14 = VAR_0->den_rate;
   spx_word32_t VAR_15;
   int VAR_16;

   while (!(VAR_8 >= (spx_int32_t)*VAR_3 || VAR_7 >= (spx_int32_t)*VAR_5))
   {
      const spx_word16_t *VAR_17 = & VAR_10[VAR_9*VAR_6];
      const spx_word16_t *VAR_18 = & VAR_2[VAR_8];


      float VAR_19[4] = {0,0,0,0};

      for(VAR_16=0;VAR_16<VAR_6;VAR_16+=4) {
        VAR_19[0] += VAR_17[VAR_16]*VAR_18[VAR_16];
        VAR_19[1] += VAR_17[VAR_16+1]*VAR_18[VAR_16+1];
        VAR_19[2] += VAR_17[VAR_16+2]*VAR_18[VAR_16+2];
        VAR_19[3] += VAR_17[VAR_16+3]*VAR_18[VAR_16+3];
      }
      VAR_15 = VAR_19[0] + VAR_19[1] + VAR_19[2] + VAR_19[3];




      VAR_4[VAR_11 * VAR_7++] = FUNC_0(VAR_15, 15);
      VAR_8 += VAR_12;
      VAR_9 += VAR_13;
      if (VAR_9 >= VAR_14)
      {
         VAR_9 -= VAR_14;
         VAR_8++;
      }
   }

   VAR_0->last_sample[VAR_1] = VAR_8;
   VAR_0->samp_frac_num[VAR_1] = VAR_9;
   return VAR_7;
}
