
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t guint ;
struct TYPE_8__ {int thr; } ;
typedef TYPE_1__ chassis_event_thread_t ;
struct TYPE_10__ {int message; } ;
struct TYPE_9__ {int len; TYPE_1__** pdata; } ;
typedef int GThreadFunc ;
typedef TYPE_2__ GPtrArray ;
typedef TYPE_3__ GError ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,TYPE_1__*,int ,TYPE_3__**) ;

void FUNC_4(GPtrArray *VAR_3) {
 guint VAR_4;

 FUNC_2("%s: starting %d threads", VAR_0, VAR_3->len - 1);

 for (VAR_4 = 1; VAR_4 < VAR_3->len; VAR_4++) {
  chassis_event_thread_t *VAR_5 = VAR_3->pdata[VAR_4];
  GError *VAR_6 = ((void*)0);

  VAR_5->thr = FUNC_3((GThreadFunc)VAR_2, VAR_5, VAR_1, &VAR_6);

  if (VAR_6) {
   FUNC_0("%s: %s", VAR_0, VAR_6->message);
   FUNC_1(VAR_6);
   VAR_6 = ((void*)0);
  }
 }
}
