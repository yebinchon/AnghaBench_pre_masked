
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ beg_silence; scalar_t__ samples; } ;
typedef TYPE_1__ mpc_streaminfo ;
typedef scalar_t__ mpc_int64_t ;



mpc_int64_t FUNC_0(mpc_streaminfo *VAR_0)
{
 return VAR_0->samples - VAR_0->beg_silence;
}
