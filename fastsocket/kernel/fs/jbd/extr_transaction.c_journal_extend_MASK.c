
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ t_state; int t_outstanding_credits; int t_handle_lock; TYPE_2__* t_journal; } ;
typedef TYPE_1__ transaction_t ;
struct TYPE_9__ {int j_max_transaction_buffers; int j_state_lock; } ;
typedef TYPE_2__ journal_t ;
struct TYPE_10__ {int h_buffer_credits; TYPE_1__* h_transaction; } ;
typedef TYPE_3__ handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int,char*,TYPE_3__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(handle_t *VAR_2, int VAR_3)
{
 transaction_t *VAR_4 = VAR_2->h_transaction;
 journal_t *VAR_5 = VAR_4->t_journal;
 int VAR_6;
 int VAR_7;

 VAR_6 = -VAR_0;
 if (FUNC_1(VAR_2))
  goto out;

 VAR_6 = 1;

 FUNC_3(&VAR_5->j_state_lock);


 if (VAR_2->h_transaction->t_state != VAR_1) {
  FUNC_2(3, "denied handle %p %d blocks: "
     "transaction not running\n", VAR_2, VAR_3);
  goto error_out;
 }

 FUNC_3(&VAR_4->t_handle_lock);
 VAR_7 = VAR_4->t_outstanding_credits + VAR_3;

 if (VAR_7 > VAR_5->j_max_transaction_buffers) {
  FUNC_2(3, "denied handle %p %d blocks: "
     "transaction too large\n", VAR_2, VAR_3);
  goto unlock;
 }

 if (VAR_7 > FUNC_0(VAR_5)) {
  FUNC_2(3, "denied handle %p %d blocks: "
     "insufficient log space\n", VAR_2, VAR_3);
  goto unlock;
 }

 VAR_2->h_buffer_credits += VAR_3;
 VAR_4->t_outstanding_credits += VAR_3;
 VAR_6 = 0;

 FUNC_2(3, "extended handle %p by %d\n", VAR_2, VAR_3);
unlock:
 FUNC_4(&VAR_4->t_handle_lock);
error_out:
 FUNC_4(&VAR_5->j_state_lock);
out:
 return VAR_6;
}
