
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_20__ {TYPE_2__* recv_queue; } ;
typedef TYPE_5__ network_socket ;
typedef int network_mysqld_lua_stmt_ret ;
struct TYPE_19__ {TYPE_13__* queries; } ;
struct TYPE_21__ {TYPE_4__ injected; int * L; } ;
typedef TYPE_6__ network_mysqld_con_lua_t ;
struct TYPE_22__ {TYPE_5__* client; TYPE_3__* config; void* state; TYPE_6__* plugin_con_state; } ;
typedef TYPE_7__ network_mysqld_con ;
typedef int lua_State ;
struct TYPE_24__ {TYPE_8__* data; } ;
struct TYPE_23__ {int len; char* str; } ;
struct TYPE_18__ {int lua_script; } ;
struct TYPE_17__ {TYPE_1__* chunks; } ;
struct TYPE_16__ {TYPE_9__* head; } ;
struct TYPE_15__ {int length; } ;
typedef TYPE_8__ GString ;
typedef TYPE_9__ GList ;


 int FUNC_0 (char*) ;
 char VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;





 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *,int,int ) ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int,int,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,char*,int) ;
 int FUNC_14 (int *,int,char*) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (TYPE_13__*) ;
 int FUNC_18 (TYPE_7__*,int ) ;
 int FUNC_19 (TYPE_7__*,int ) ;
 int FUNC_20 (TYPE_5__*,int ) ;

__attribute__((used)) static network_mysqld_lua_stmt_ret FUNC_21(network_mysqld_con *VAR_4) {
 network_mysqld_con_lua_t *VAR_5 = VAR_4->plugin_con_state;
 char VAR_6 = -1;
 network_socket *VAR_7 = VAR_4->client;
 GList *VAR_8 = VAR_7->recv_queue->chunks->head;
 GString *VAR_9 = VAR_8->data;

 if (VAR_9->len < VAR_2) return 132;

 VAR_6 = VAR_9->str[VAR_2 + 0];

 if (VAR_0 == VAR_6) {

  if (VAR_9->len < VAR_2 + 2) return 132;


  if (VAR_9->len - VAR_2 - 1 >= sizeof("LOAD ") - 1 &&
      0 == FUNC_1(VAR_9->str + VAR_2 + 1, FUNC_0("LOAD "))) return 132;
 }

 FUNC_17(VAR_5->injected.queries);
 return 133;
}
