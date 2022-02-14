
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mpc_status ;
typedef int mpc_int64_t ;
struct TYPE_5__ {scalar_t__ sample_freq; } ;
struct TYPE_6__ {TYPE_1__ si; } ;
typedef TYPE_2__ mpc_demux ;


 int FUNC_0 (TYPE_2__*,int ) ;

mpc_status FUNC_1(mpc_demux * VAR_0, double VAR_1)
{
 return FUNC_0(VAR_0, (mpc_int64_t)(VAR_1 * (double)VAR_0->si.sample_freq + 0.5));
}
