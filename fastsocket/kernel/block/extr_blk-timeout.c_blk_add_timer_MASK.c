
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expires; } ;
struct request_queue {TYPE_1__ timeout; int timeout_list; scalar_t__ rq_timeout; int rq_timed_out_fn; } ;
struct request {scalar_t__ deadline; int timeout_list; scalar_t__ timeout; int atomic_flags; struct request_queue* q; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,unsigned long) ;
 unsigned long FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (unsigned long,int ) ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(struct request *VAR_2)
{
 struct request_queue *VAR_3 = VAR_2->q;
 unsigned long VAR_4;

 if (!VAR_3->rq_timed_out_fn)
  return;

 FUNC_0(!FUNC_2(&VAR_2->timeout_list));
 FUNC_0(FUNC_5(VAR_0, &VAR_2->atomic_flags));





 if (!VAR_2->timeout)
  VAR_2->timeout = VAR_3->rq_timeout;

 VAR_2->deadline = VAR_1 + VAR_2->timeout;
 FUNC_1(&VAR_2->timeout_list, &VAR_3->timeout_list);






 VAR_4 = FUNC_4(VAR_2->deadline);

 if (!FUNC_7(&VAR_3->timeout) ||
     FUNC_6(VAR_4, VAR_3->timeout.expires))
  FUNC_3(&VAR_3->timeout, VAR_4);
}
