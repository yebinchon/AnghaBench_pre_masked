
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t spx_uint32_t ;
struct TYPE_3__ {size_t nb_channels; int* last_sample; int filt_len; } ;
typedef TYPE_1__ SpeexResamplerState ;


 int VAR_0 ;

int FUNC_0(SpeexResamplerState *VAR_1)
{
   spx_uint32_t VAR_2;
   for (VAR_2=0;VAR_2<VAR_1->nb_channels;VAR_2++)
      VAR_1->last_sample[VAR_2] = VAR_1->filt_len/2;
   return VAR_0;
}
