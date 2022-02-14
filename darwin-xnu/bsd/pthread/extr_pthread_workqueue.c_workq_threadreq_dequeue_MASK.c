
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* workq_threadreq_t ;
struct workqueue {TYPE_1__* wq_event_manager_threadreq; int wq_reqcount; } ;
struct TYPE_4__ {scalar_t__ tr_count; scalar_t__ tr_qos; int tr_flags; int tr_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct workqueue*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct workqueue*,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_4(struct workqueue *VAR_3, workq_threadreq_t VAR_4)
{
 VAR_3->wq_reqcount--;

 if (--VAR_4->tr_count == 0) {
  if (VAR_4->tr_qos == VAR_2) {
   FUNC_1(VAR_3->wq_event_manager_threadreq == VAR_4);
   FUNC_1(VAR_4->tr_count == 0);
   VAR_3->wq_event_manager_threadreq = ((void*)0);
   return 1;
  }
  if (FUNC_2(FUNC_3(VAR_3, VAR_4),
    &VAR_4->tr_entry, VAR_0)) {
   if ((VAR_4->tr_flags & VAR_1) == 0) {
    FUNC_0(VAR_3);
   }
   return 1;
  }
 }
 return 0;
}
