
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ timer_active; scalar_t__ count; scalar_t__ all; int queue; scalar_t__ status; scalar_t__ lock; int cbarg; int (* cbfn ) (int ,scalar_t__) ;int timer; struct bfa_diag_qtest_result_s* result; } ;
struct bfa_fcdiag_s {TYPE_1__ qtest; } ;
struct bfa_diag_qtest_result_s {scalar_t__ status; int queue; scalar_t__ count; } ;
struct TYPE_5__ {int * data; } ;
typedef TYPE_2__ bfi_diag_qtest_rsp_t ;
typedef scalar_t__ bfa_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct bfa_fcdiag_s*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bfa_fcdiag_s*,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcdiag_s *VAR_6,
   bfi_diag_qtest_rsp_t *VAR_7)
{
 struct bfa_diag_qtest_result_s *VAR_8 = VAR_6->qtest.result;
 bfa_status_t VAR_9 = VAR_1;
 int VAR_10;


 if (!VAR_6->qtest.timer_active) {
  FUNC_2(VAR_6, VAR_6->qtest.timer_active);
  return;
 }


 VAR_6->qtest.count--;


 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (VAR_7->data[VAR_10] != ~(VAR_5)) {
   VAR_8->status = VAR_0;
   break;
  }
 }

 if (VAR_8->status == VAR_1) {
  if (VAR_6->qtest.count > 0) {
   VAR_9 = FUNC_0(VAR_6);
   if (VAR_9 == VAR_1)
    return;
   else
    VAR_8->status = VAR_9;
  } else if (VAR_6->qtest.all > 0 &&
   VAR_6->qtest.queue < (VAR_2 - 1)) {
   VAR_6->qtest.count = VAR_4;
   VAR_6->qtest.queue++;
   VAR_9 = FUNC_0(VAR_6);
   if (VAR_9 == VAR_1)
    return;
   else
    VAR_8->status = VAR_9;
  }
 }


 if (VAR_6->qtest.timer_active) {
  FUNC_1(&VAR_6->qtest.timer);
  VAR_6->qtest.timer_active = 0;
 }
 VAR_8->queue = VAR_6->qtest.queue;
 VAR_8->count = VAR_4 - VAR_6->qtest.count;
 FUNC_2(VAR_6, VAR_8->count);
 FUNC_2(VAR_6, VAR_8->status);
 VAR_6->qtest.status = VAR_8->status;
 VAR_6->qtest.cbfn(VAR_6->qtest.cbarg, VAR_6->qtest.status);
 VAR_6->qtest.lock = 0;
}
