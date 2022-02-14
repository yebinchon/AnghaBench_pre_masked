
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {TYPE_6__* response; TYPE_5__* challenge; int dst; int src; TYPE_4__* charset_results; TYPE_3__* charset_connection; TYPE_2__* charset_client; TYPE_1__* default_db; } ;
typedef TYPE_7__ network_socket ;
typedef int lua_State ;
typedef int gsize ;
struct TYPE_13__ {int response; int username; } ;
struct TYPE_12__ {int challenge; int thread_id; int server_version; } ;
struct TYPE_11__ {int len; int str; } ;
struct TYPE_10__ {int len; int str; } ;
struct TYPE_9__ {int len; int str; } ;
struct TYPE_8__ {int len; int str; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,void*,void*,char const*) ;
 char* FUNC_3 (int *,int,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_11(lua_State *VAR_1) {
 network_socket *VAR_2 = *(network_socket **)FUNC_4(VAR_1);
 gsize VAR_3 = 0;
 const char *VAR_4 = FUNC_3(VAR_1, 2, &VAR_3);





 if (FUNC_10(VAR_4, VAR_3, FUNC_0("default_db"))) {
  FUNC_7(VAR_1, VAR_2->default_db->str, VAR_2->default_db->len);
  return 1;
 }else if (FUNC_10(VAR_4, VAR_3, FUNC_0("charset_client"))) {
  FUNC_7(VAR_1, VAR_2->charset_client->str, VAR_2->charset_client->len);
  return 1;
 }else if (FUNC_10(VAR_4, VAR_3, FUNC_0("charset_connection"))) {
  FUNC_7(VAR_1, VAR_2->charset_connection->str, VAR_2->charset_connection->len);
  return 1;
 }else if (FUNC_10(VAR_4, VAR_3, FUNC_0("charset_results"))) {
  FUNC_7(VAR_1, VAR_2->charset_results->str, VAR_2->charset_results->len);
  return 1;
 }else if (FUNC_10(VAR_4, VAR_3, FUNC_0("address"))) {
  return FUNC_5(VAR_1, ".address is deprecated. Use .src.name or .dst.name instead");
 } else if (FUNC_10(VAR_4, VAR_3, FUNC_0("src"))) {
  return FUNC_9(VAR_1, VAR_2->src);
 } else if (FUNC_10(VAR_4, VAR_3, FUNC_0("dst"))) {
  return FUNC_9(VAR_1, VAR_2->dst);
 }

 if (VAR_2->response) {
  if (FUNC_10(VAR_4, VAR_3, FUNC_0("username"))) {
   FUNC_7(VAR_1, FUNC_1(VAR_2->response->username));
   return 1;
  } else if (FUNC_10(VAR_4, VAR_3, FUNC_0("scrambled_password"))) {
   FUNC_7(VAR_1, FUNC_1(VAR_2->response->response));
   return 1;
  }
 }

 if (VAR_2->challenge) {
  if (FUNC_10(VAR_4, VAR_3, FUNC_0("mysqld_version"))) {
   FUNC_6(VAR_1, VAR_2->challenge->server_version);
   return 1;
  } else if (FUNC_10(VAR_4, VAR_3, FUNC_0("thread_id"))) {
   FUNC_6(VAR_1, VAR_2->challenge->thread_id);
   return 1;
  } else if (FUNC_10(VAR_4, VAR_3, FUNC_0("scramble_buffer"))) {
   FUNC_7(VAR_1, FUNC_1(VAR_2->challenge->challenge));
   return 1;
  }
 }
 FUNC_2("%s: sock->challenge: %p, sock->response: %p (looking for %s)",
   VAR_0,
   (void *)VAR_2->challenge,
   (void *)VAR_2->response,
   VAR_4
   );

 FUNC_8(VAR_1);

 return 1;
}
