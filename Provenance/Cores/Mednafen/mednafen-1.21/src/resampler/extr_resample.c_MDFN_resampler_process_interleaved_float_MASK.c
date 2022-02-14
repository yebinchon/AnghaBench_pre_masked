
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ spx_uint32_t ;
struct TYPE_4__ {int in_stride; int out_stride; int nb_channels; } ;
typedef TYPE_1__ SpeexResamplerState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,float const*,scalar_t__*,float*,scalar_t__*) ;

int FUNC_1(SpeexResamplerState *VAR_1, const float *VAR_2, spx_uint32_t *VAR_3, float *VAR_4, spx_uint32_t *VAR_5)
{
   spx_uint32_t VAR_6;
   int VAR_7, VAR_8;
   spx_uint32_t VAR_9 = *VAR_5;
   VAR_7 = VAR_1->in_stride;
   VAR_8 = VAR_1->out_stride;
   VAR_1->in_stride = VAR_1->out_stride = VAR_1->nb_channels;
   for (VAR_6=0;VAR_6<VAR_1->nb_channels;VAR_6++)
   {
      *VAR_5 = VAR_9;
      if (VAR_2 != ((void*)0))
         FUNC_0(VAR_1, VAR_6, VAR_2+VAR_6, VAR_3, VAR_4+VAR_6, VAR_5);
      else
         FUNC_0(VAR_1, VAR_6, ((void*)0), VAR_3, VAR_4+VAR_6, VAR_5);
   }
   VAR_1->in_stride = VAR_7;
   VAR_1->out_stride = VAR_8;
   return VAR_0;
}
