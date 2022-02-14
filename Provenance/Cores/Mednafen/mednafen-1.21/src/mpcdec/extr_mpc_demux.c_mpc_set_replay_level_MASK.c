
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ gain_album; scalar_t__ gain_title; scalar_t__ peak_album; scalar_t__ peak_title; } ;
struct TYPE_5__ {int d; TYPE_1__ si; } ;
typedef TYPE_2__ mpc_demux ;
typedef scalar_t__ mpc_bool_t ;


 int FUNC_0 (int ,float) ;
 int FUNC_1 (int,float) ;

void FUNC_2(mpc_demux * VAR_0, float VAR_1, mpc_bool_t VAR_2,
        mpc_bool_t VAR_3, mpc_bool_t VAR_4)
{
 float VAR_5 = (float) ( VAR_3 ? VAR_0->si.peak_title : VAR_0->si.peak_album );
 float VAR_6 = (float) ( VAR_3 ? VAR_0->si.gain_title : VAR_0->si.gain_album );

 if(!VAR_2 && !VAR_4)
  return;

 if(!VAR_5)
  VAR_5 = 1.;
 else
  VAR_5 = (float) ( (1 << 15) / FUNC_1(10, VAR_5 / (20 * 256)) );

 if(!VAR_6)
  VAR_6 = 1.;
 else
  VAR_6 = (float) FUNC_1(10, (VAR_1 - VAR_6 / 256) / 20);

 if(VAR_4 && (VAR_5 < VAR_6 || !VAR_2))
  VAR_6 = VAR_5;

 FUNC_0(VAR_0->d, VAR_6);
}
