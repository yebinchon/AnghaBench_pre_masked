
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct turnstile {int ts_waitq; } ;
typedef TYPE_1__* ipc_mqueue_t ;
typedef TYPE_2__* ipc_kmsg_t ;
typedef int * ipc_kmsg_queue_t ;
typedef void* boolean_t ;
struct TYPE_11__ {int ikm_node; } ;
struct TYPE_10__ {scalar_t__ imq_preposts; scalar_t__ imq_in_pset; int imq_wait_queue; scalar_t__ imq_msgcount; int imq_fport; int imq_messages; void* imq_fullwaiters; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct turnstile* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 void* FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int *) ;
 struct turnstile* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ,int ) ;

boolean_t
FUNC_12(ipc_mqueue_t VAR_7)
{
 ipc_kmsg_queue_t VAR_8;
 ipc_kmsg_t VAR_9;
 boolean_t VAR_10 = VAR_0;
 struct turnstile *VAR_11 = FUNC_8(FUNC_5(VAR_7));

 FUNC_2(!FUNC_4(VAR_7));






 VAR_7->imq_fullwaiters = VAR_0;

 if (VAR_11 != VAR_5) {
  FUNC_11(&VAR_11->ts_waitq,
       VAR_2,
       VAR_3,
       VAR_6);
 }





 VAR_8 = &VAR_7->imq_messages;
 while ((VAR_9 = FUNC_7(VAR_8)) != VAR_1) {




  boolean_t VAR_12;
  VAR_12 = FUNC_6(VAR_9);
  if (VAR_12)
   VAR_10 = VAR_12;
 }







 VAR_7->imq_msgcount = 0;


 FUNC_10(&VAR_7->imq_wait_queue);


 FUNC_9(&VAR_7->imq_wait_queue);





 FUNC_2(VAR_7->imq_preposts == 0);
 FUNC_2(VAR_7->imq_in_pset == 0);

 return VAR_10;
}
