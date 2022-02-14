
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_band; int channels; scalar_t__ sample_freq; } ;
typedef TYPE_1__ mpc_streaminfo ;
typedef int mpc_status ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static mpc_status FUNC_0(mpc_streaminfo * VAR_2)
{
 if (VAR_2->max_band == 0 || VAR_2->max_band >= 32
     || VAR_2->channels > 2 || VAR_2->channels == 0 || VAR_2->sample_freq == 0)
  return VAR_0;
 return VAR_1;
}
