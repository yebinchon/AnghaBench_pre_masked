
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* workq_threadreq_t ;
struct workqueue {int wq_reqcount; TYPE_1__* wq_event_manager_threadreq; } ;
struct TYPE_5__ {scalar_t__ tr_state; int tr_count; scalar_t__ tr_qos; int tr_flags; int tr_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct workqueue*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct workqueue*,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_5(struct workqueue *VAR_6, workq_threadreq_t VAR_7)
{
 FUNC_1(VAR_7->tr_state == VAR_3);

 VAR_7->tr_state = VAR_4;
 VAR_6->wq_reqcount += VAR_7->tr_count;

 if (VAR_7->tr_qos == VAR_5) {
  FUNC_1(VAR_6->wq_event_manager_threadreq == ((void*)0));
  FUNC_1(VAR_7->tr_flags & VAR_1);
  FUNC_1(VAR_7->tr_count == 1);
  VAR_6->wq_event_manager_threadreq = VAR_7;
  return 1;
 }
 if (FUNC_2(FUNC_4(VAR_6, VAR_7),
   &VAR_7->tr_entry, FUNC_3(VAR_7),
   VAR_0)) {
  if ((VAR_7->tr_flags & VAR_2) == 0) {
   FUNC_0(VAR_6);
  }
  return 1;
 }
 return 0;
}
