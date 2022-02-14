
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int mpc_reader ;
struct TYPE_9__ {int chap_nb; struct TYPE_9__* seek_table; int si; int d; int * r; } ;
typedef TYPE_1__ mpc_demux ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

mpc_demux * FUNC_7(mpc_reader * VAR_1)
{
 mpc_demux* VAR_2 = FUNC_1(sizeof(mpc_demux));

 if (VAR_2 != 0) {
  FUNC_2(VAR_2, 0, sizeof(mpc_demux));
  VAR_2->r = VAR_1;
  VAR_2->chap_nb = -1;
  FUNC_4(VAR_2);
  if (FUNC_5(VAR_2) == VAR_0 &&
      FUNC_6(VAR_2) == VAR_0) {
   VAR_2->d = FUNC_3(&VAR_2->si);
  } else {
   if (VAR_2->seek_table)
    FUNC_0(VAR_2->seek_table);
   FUNC_0(VAR_2);
   VAR_2 = 0;
  }
 }

 return VAR_2;
}
