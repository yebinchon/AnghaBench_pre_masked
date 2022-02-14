
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int backends_mutex; TYPE_7__* backends; int event_thread_count; } ;
typedef TYPE_1__ network_backends_t ;
struct TYPE_10__ {scalar_t__ type; size_t weight; TYPE_6__* addr; } ;
typedef TYPE_2__ network_backend_t ;
typedef size_t guint ;
typedef int gint ;
typedef char gchar ;
typedef scalar_t__ backend_type_t ;
struct TYPE_12__ {size_t len; TYPE_2__** pdata; } ;
struct TYPE_11__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_7__*,TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_6__*,char*) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 char* FUNC_11 (char*,char) ;

int FUNC_12(network_backends_t *VAR_2, gchar *VAR_3, backend_type_t VAR_4) {
 network_backend_t *VAR_5;
 guint VAR_6;

 VAR_5 = FUNC_9(VAR_2->event_thread_count);
 VAR_5->type = VAR_4;

 gchar *VAR_7 = ((void*)0);
 if (VAR_4 == VAR_0) {
  guint VAR_8 = 1;
  VAR_7 = FUNC_11(VAR_3, '@');
  if (VAR_7 != ((void*)0)) {
   *VAR_7 = '\0';
   VAR_8 = FUNC_1(VAR_7+1);
  }
  VAR_5->weight = VAR_8;
 }

 if (0 != FUNC_7(VAR_5->addr, VAR_3)) {
  FUNC_8(VAR_5);
  return -1;
 }


 FUNC_4(VAR_2->backends_mutex);
 gint VAR_9 = -1;
 for (VAR_6 = 0; VAR_6 < VAR_2->backends->len; VAR_6++) {
  network_backend_t *VAR_10 = VAR_2->backends->pdata[VAR_6];

  if (VAR_9 == -1 && VAR_10->type == VAR_0) VAR_9 = VAR_6;

  if (VAR_10->type == VAR_4 && FUNC_10(FUNC_0(VAR_10->addr->name), FUNC_0(VAR_5->addr->name))) {
   FUNC_8(VAR_5);

   FUNC_5(VAR_2->backends_mutex);
   FUNC_2("backend %s is already known!", VAR_3);
   return -1;
  }
 }

 FUNC_6(VAR_2->backends, VAR_5);
 if (VAR_9 != -1 && VAR_4 == VAR_1) {
  network_backend_t *VAR_11 = VAR_2->backends->pdata[VAR_9];
  VAR_2->backends->pdata[VAR_9] = VAR_2->backends->pdata[VAR_2->backends->len - 1];
  VAR_2->backends->pdata[VAR_2->backends->len - 1] = VAR_11;
 }
 FUNC_5(VAR_2->backends_mutex);

 FUNC_3("added %s backend: %s", (VAR_4 == VAR_1) ? "read/write" : "read-only", VAR_3);

 if (VAR_7 != ((void*)0)) *VAR_7 = '@';

 return 0;
}
