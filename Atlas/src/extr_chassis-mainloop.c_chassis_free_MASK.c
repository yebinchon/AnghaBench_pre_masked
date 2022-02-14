
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t guint ;
struct TYPE_9__ {int config; int (* destroy ) (int ) ;} ;
typedef TYPE_1__ chassis_plugin ;
struct TYPE_10__ {int backends; int sc; int shutdown_hooks; struct TYPE_10__* event_hdr_version; scalar_t__ event_base; struct TYPE_10__* instance_name; TYPE_3__* threads; scalar_t__ stats; struct TYPE_10__* user; struct TYPE_10__* log_path; struct TYPE_10__* base_dir; TYPE_3__* modules; } ;
typedef TYPE_2__ chassis ;
struct TYPE_11__ {size_t len; TYPE_1__** pdata; } ;
typedef TYPE_3__ GPtrArray ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 char* FUNC_7 () ;
 int FUNC_8 (int (*) (int )) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 int FUNC_14 (int ) ;

void FUNC_15(chassis *VAR_1) {
 guint VAR_2;




 if (!VAR_1) return;


 for (VAR_2 = 0; VAR_2 < VAR_1->modules->len; VAR_2++) {
  chassis_plugin *VAR_3 = VAR_1->modules->pdata[VAR_2];

  FUNC_8(VAR_3->destroy);
  VAR_3->destroy(VAR_3->config);
 }

 FUNC_2(VAR_1->shutdown_hooks);

 for (VAR_2 = 0; VAR_2 < VAR_1->modules->len; VAR_2++) {
  chassis_plugin *VAR_4 = VAR_1->modules->pdata[VAR_2];

  FUNC_1(VAR_4);
 }

 FUNC_10(VAR_1->modules, VAR_0);

 if (VAR_1->base_dir) FUNC_9(VAR_1->base_dir);
 if (VAR_1->log_path) FUNC_9(VAR_1->log_path);
 if (VAR_1->user) FUNC_9(VAR_1->user);

 if (VAR_1->stats) FUNC_4(VAR_1->stats);

 FUNC_5(((void*)0));

 GPtrArray *VAR_5 = VAR_1->threads;
 if (VAR_5) {
  for (VAR_2 = 0; VAR_2 < VAR_5->len; ++VAR_2) {
   FUNC_0(VAR_5->pdata[VAR_2]);
  }

  FUNC_10(VAR_5, VAR_0);
 }

 if (VAR_1->instance_name) FUNC_9(VAR_1->instance_name);
 FUNC_9(VAR_1->event_hdr_version);

 FUNC_3(VAR_1->shutdown_hooks);

 FUNC_11(VAR_1->sc);

 FUNC_12(VAR_1->backends);

 FUNC_9(VAR_1);
}
