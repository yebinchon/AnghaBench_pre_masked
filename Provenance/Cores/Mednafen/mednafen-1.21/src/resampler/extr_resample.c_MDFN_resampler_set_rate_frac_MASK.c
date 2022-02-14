
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ spx_uint32_t ;
struct TYPE_4__ {scalar_t__ in_rate; scalar_t__ out_rate; scalar_t__ num_rate; scalar_t__ den_rate; scalar_t__ nb_channels; scalar_t__* samp_frac_num; scalar_t__ initialised; } ;
typedef TYPE_1__ SpeexResamplerState ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(SpeexResamplerState *VAR_1, spx_uint32_t VAR_2, spx_uint32_t VAR_3, spx_uint32_t VAR_4, spx_uint32_t VAR_5)
{
   spx_uint32_t VAR_6;
   spx_uint32_t VAR_7;
   spx_uint32_t VAR_8;
   if (VAR_1->in_rate == VAR_4 && VAR_1->out_rate == VAR_5 && VAR_1->num_rate == VAR_2 && VAR_1->den_rate == VAR_3)
      return VAR_0;

   VAR_7 = VAR_1->den_rate;
   VAR_1->in_rate = VAR_4;
   VAR_1->out_rate = VAR_5;
   VAR_1->num_rate = VAR_2;
   VAR_1->den_rate = VAR_3;

   for (VAR_6=2;VAR_6<=FUNC_0(VAR_1->num_rate, VAR_1->den_rate);VAR_6++)
   {
      while ((VAR_1->num_rate % VAR_6 == 0) && (VAR_1->den_rate % VAR_6 == 0))
      {
         VAR_1->num_rate /= VAR_6;
         VAR_1->den_rate /= VAR_6;
      }
   }

   if (VAR_7 > 0)
   {
      for (VAR_8=0;VAR_8<VAR_1->nb_channels;VAR_8++)
      {
         VAR_1->samp_frac_num[VAR_8]=VAR_1->samp_frac_num[VAR_8]*VAR_1->den_rate/VAR_7;

         if (VAR_1->samp_frac_num[VAR_8] >= VAR_1->den_rate)
            VAR_1->samp_frac_num[VAR_8] = VAR_1->den_rate-1;
      }
   }

   if (VAR_1->initialised)
      FUNC_1(VAR_1);
   return VAR_0;
}
