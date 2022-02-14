
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int gchar ;
struct TYPE_4__ {int event_thread_count; int backends; TYPE_3__* sc; } ;
typedef TYPE_1__ chassis ;
struct TYPE_5__ {int * L; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void*) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(chassis *VAR_2, gchar *VAR_3) {

 VAR_2->sc = FUNC_1();
 lua_State *VAR_4 = VAR_2->sc->L;
 FUNC_0(VAR_4, (void*)VAR_2);
 FUNC_2(VAR_4, VAR_1, VAR_0);

 VAR_2->backends = FUNC_3(VAR_2->event_thread_count, VAR_3);

 return 0;
}
