
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chap_nb; int const* chap; } ;
typedef TYPE_1__ mpc_demux ;
typedef int mpc_chap_info ;


 int FUNC_0 (TYPE_1__*) ;

mpc_chap_info const * FUNC_1(mpc_demux * VAR_0, int VAR_1)
{
 if (VAR_0->chap_nb == -1)
  FUNC_0(VAR_0);
 if (VAR_1 >= VAR_0->chap_nb || VAR_1 < 0)
  return 0;
 return &VAR_0->chap[VAR_1];
}
