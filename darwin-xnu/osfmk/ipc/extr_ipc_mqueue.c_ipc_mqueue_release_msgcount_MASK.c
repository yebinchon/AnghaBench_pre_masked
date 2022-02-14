
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct turnstile {int ts_waitq; } ;
typedef TYPE_1__* ipc_mqueue_t ;
struct TYPE_7__ {int imq_msgcount; int imq_wait_queue; int imq_messages; scalar_t__ imq_fullwaiters; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct turnstile* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *) ;
 struct turnstile* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ,int ,int ) ;

void
FUNC_8(ipc_mqueue_t VAR_6, ipc_mqueue_t VAR_7)
{
 struct turnstile *VAR_8 = FUNC_5(FUNC_3(VAR_6));
 (void)VAR_7;
 FUNC_0(FUNC_2(VAR_6));
 FUNC_0(VAR_6->imq_msgcount > 1 || FUNC_4(&VAR_6->imq_messages));

 VAR_6->imq_msgcount--;

 if (!FUNC_1(VAR_6) && VAR_6->imq_fullwaiters &&
  VAR_8 != VAR_4) {
  if (FUNC_7(&VAR_8->ts_waitq,
           VAR_1,
           VAR_3,
           VAR_5) != VAR_2) {
   VAR_6->imq_fullwaiters = VAR_0;
  } else {

   VAR_6->imq_msgcount++;
  }
 }

 if (FUNC_4(&VAR_6->imq_messages)) {

  FUNC_6(&VAR_6->imq_wait_queue);
 }
}
