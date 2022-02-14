
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int spx_uint32_t ;
struct TYPE_3__ {int nb_channels; int filt_len; scalar_t__* mem; } ;
typedef TYPE_1__ SpeexResamplerState ;


 int VAR_0 ;

int FUNC_0(SpeexResamplerState *VAR_1)
{
   spx_uint32_t VAR_2;
   for (VAR_2=0;VAR_2<VAR_1->nb_channels*(VAR_1->filt_len-1);VAR_2++)
      VAR_1->mem[VAR_2] = 0;
   return VAR_0;
}
