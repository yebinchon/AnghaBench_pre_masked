
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int spx_uint32_t ;
struct TYPE_3__ {int den_rate; int num_rate; } ;
typedef TYPE_1__ SpeexResamplerState ;



void FUNC_0(SpeexResamplerState *VAR_0, spx_uint32_t *VAR_1, spx_uint32_t *VAR_2)
{
   *VAR_1 = VAR_0->num_rate;
   *VAR_2 = VAR_0->den_rate;
}
