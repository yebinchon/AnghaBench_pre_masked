
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int network_socket ;
struct TYPE_3__ {scalar_t__ backend_ndx; } ;
typedef TYPE_1__ network_mysqld_con_lua_t ;
struct TYPE_4__ {int * client; int * server; TYPE_1__* plugin_con_state; } ;
typedef TYPE_2__ network_mysqld_con ;
typedef int lua_State ;
typedef int gsize ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int ** FUNC_4 (int *,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_10(lua_State *VAR_0) {
 network_mysqld_con *VAR_1 = *(network_mysqld_con **)FUNC_2(VAR_0);
 network_mysqld_con_lua_t *VAR_2;
 gsize VAR_3 = 0;
 const char *VAR_4 = FUNC_1(VAR_0, 2, &VAR_3);

 VAR_2 = VAR_1->plugin_con_state;





 if (FUNC_9(VAR_4, VAR_3, FUNC_0("default_db"))) {
  return FUNC_3(VAR_0, "proxy.connection.default_db is deprecated, use proxy.connection.client.default_db or proxy.connection.server.default_db instead");
 } else if (FUNC_9(VAR_4, VAR_3, FUNC_0("thread_id"))) {
  return FUNC_3(VAR_0, "proxy.connection.thread_id is deprecated, use proxy.connection.server.thread_id instead");
 } else if (FUNC_9(VAR_4, VAR_3, FUNC_0("mysqld_version"))) {
  return FUNC_3(VAR_0, "proxy.connection.mysqld_version is deprecated, use proxy.connection.server.mysqld_version instead");
 } else if (FUNC_9(VAR_4, VAR_3, FUNC_0("backend_ndx"))) {
  FUNC_5(VAR_0, VAR_2->backend_ndx + 1);
 } else if ((VAR_1->server && (FUNC_9(VAR_4, VAR_3, FUNC_0("server")))) ||
            (VAR_1->client && (FUNC_9(VAR_4, VAR_3, FUNC_0("client"))))) {
  network_socket **VAR_5;

  VAR_5 = FUNC_4(VAR_0, sizeof(network_socket));

  if (VAR_4[0] == 's') {
   *VAR_5 = VAR_1->server;
  } else {
   *VAR_5 = VAR_1->client;
  }

  FUNC_8(VAR_0);
  FUNC_7(VAR_0, -2);
 } else {
  FUNC_6(VAR_0);
 }

 return 1;
}
