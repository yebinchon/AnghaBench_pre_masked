
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_8__ {int j_state_lock; TYPE_1__* j_committing_transaction; TYPE_2__* j_running_transaction; } ;
typedef TYPE_3__ journal_t ;
struct TYPE_7__ {int t_tid; } ;
struct TYPE_6__ {int t_tid; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(journal_t *VAR_0, tid_t *VAR_1)
{
 int VAR_2 = 0;

 FUNC_1(&VAR_0->j_state_lock);
 if (VAR_0->j_running_transaction) {
  tid_t VAR_3 = VAR_0->j_running_transaction->t_tid;

  FUNC_0(VAR_0, VAR_3);


  if (VAR_1)
   *VAR_1 = VAR_3;
  VAR_2 = 1;
 } else if (VAR_0->j_committing_transaction) {




  if (VAR_1)
   *VAR_1 = VAR_0->j_committing_transaction->t_tid;
  VAR_2 = 1;
 }
 FUNC_2(&VAR_0->j_state_lock);
 return VAR_2;
}
