
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double sample_freq; scalar_t__ beg_silence; scalar_t__ samples; } ;
typedef TYPE_1__ mpc_streaminfo ;



double
FUNC_0(mpc_streaminfo * VAR_0)
{
 return (double) (VAR_0->samples - VAR_0->beg_silence) / VAR_0->sample_freq;
}
