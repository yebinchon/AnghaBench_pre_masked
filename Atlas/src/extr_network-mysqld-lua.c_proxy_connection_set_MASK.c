
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int network_socket ;
struct TYPE_7__ {int backend_ndx; int connection_close; TYPE_1__* backend; } ;
typedef TYPE_2__ network_mysqld_con_lua_t ;
struct TYPE_8__ {int * server; TYPE_2__* plugin_con_state; } ;
typedef TYPE_3__ network_mysqld_con ;
typedef int lua_State ;
typedef int gsize ;
struct TYPE_6__ {int connected_clients; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,char*,char const*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int * FUNC_8 (TYPE_3__*,int,int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 scalar_t__ FUNC_11 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_12(lua_State *VAR_1) {
 network_mysqld_con *VAR_2 = *(network_mysqld_con **)FUNC_3(VAR_1);
 network_mysqld_con_lua_t *VAR_3;
 gsize VAR_4 = 0;
 const char *VAR_5 = FUNC_2(VAR_1, 2, &VAR_4);

 VAR_3 = VAR_2->plugin_con_state;

 if (FUNC_11(VAR_5, VAR_4, FUNC_0("backend_ndx"))) {


  int VAR_6 = FUNC_1(VAR_1, 3) - 1;
  network_socket *VAR_7;

  if (VAR_6 == -1) {


   FUNC_7(VAR_2);
  } else if (((void*)0) != (VAR_7 = FUNC_8(VAR_2, VAR_6, ((void*)0)))) {
   VAR_2->server = VAR_7;
  } else if (VAR_6 == -2) {
   if (VAR_3->backend != ((void*)0)) {
    VAR_3->backend->connected_clients--;
    VAR_3->backend = ((void*)0);
   }
   VAR_3->backend_ndx = -1;
   FUNC_9(VAR_2->server);
   VAR_2->server = ((void*)0);
  } else {
   VAR_3->backend_ndx = VAR_6;
  }
 } else if (0 == FUNC_10(VAR_5, "connection_close")) {
  FUNC_4(VAR_1, 3, VAR_0);

  VAR_3->connection_close = FUNC_6(VAR_1, 3);
 } else {
  return FUNC_5(VAR_1, "proxy.connection.%s is not writable", VAR_5);
 }

 return 0;
}
