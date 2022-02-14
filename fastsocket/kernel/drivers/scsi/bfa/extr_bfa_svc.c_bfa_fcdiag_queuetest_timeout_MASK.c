
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* all; void* count; scalar_t__ lock; void* status; int cbarg; int (* cbfn ) (int ,void*) ;scalar_t__ timer_active; struct bfa_diag_qtest_result_s* result; } ;
struct bfa_fcdiag_s {TYPE_1__ qtest; } ;
struct bfa_diag_qtest_result_s {void* count; void* queue; void* status; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct bfa_fcdiag_s*,void*) ;
 int FUNC_1 (int ,void*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 struct bfa_fcdiag_s *VAR_3 = VAR_2;
 struct bfa_diag_qtest_result_s *VAR_4 = VAR_3->qtest.result;

 FUNC_0(VAR_3, VAR_3->qtest.all);
 FUNC_0(VAR_3, VAR_3->qtest.count);

 VAR_3->qtest.timer_active = 0;

 VAR_4->status = VAR_0;
 VAR_4->count = VAR_1 - VAR_3->qtest.count;
 if (VAR_3->qtest.all)
  VAR_4->queue = VAR_3->qtest.all;

 FUNC_0(VAR_3, VAR_0);
 VAR_3->qtest.status = VAR_0;
 VAR_3->qtest.cbfn(VAR_3->qtest.cbarg, VAR_3->qtest.status);
 VAR_3->qtest.lock = 0;
}
