
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filt_len; int den_rate; int num_rate; } ;
typedef TYPE_1__ SpeexResamplerState ;



int FUNC_0(SpeexResamplerState *VAR_0)
{
  return ((VAR_0->filt_len / 2) * VAR_0->den_rate + (VAR_0->num_rate >> 1)) / VAR_0->num_rate;
}
