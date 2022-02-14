
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_24__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct TYPE_31__ {int queries; } ;
struct TYPE_34__ {TYPE_4__ injected; } ;
typedef TYPE_7__ network_mysqld_con_lua_t ;
struct TYPE_35__ {TYPE_6__* client; TYPE_7__* plugin_con_state; TYPE_3__* server; } ;
typedef TYPE_8__ network_mysqld_con ;
struct TYPE_36__ {int resultset_is_needed; } ;
typedef TYPE_9__ injection ;
struct TYPE_33__ {TYPE_5__* response; } ;
struct TYPE_32__ {int response; TYPE_10__* username; } ;
struct TYPE_30__ {TYPE_2__* challenge; TYPE_1__* response; } ;
struct TYPE_29__ {TYPE_10__* challenge; } ;
struct TYPE_28__ {size_t pwd_table_index; int * pwd_table; } ;
struct TYPE_27__ {TYPE_10__* username; } ;
struct TYPE_26__ {int len; int str; } ;
typedef TYPE_10__ GString ;


 int VAR_0 ;
 int FUNC_0 (TYPE_10__*) ;
 int VAR_1 ;
 TYPE_24__* VAR_2 ;
 TYPE_10__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_9__*) ;
 int FUNC_3 (TYPE_10__*,int) ;
 int FUNC_4 (TYPE_10__*,int ,...) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_10__*,TYPE_10__*) ;
 int FUNC_7 (TYPE_10__*,int ) ;
 TYPE_10__* FUNC_8 (int *) ;
 TYPE_10__* FUNC_9 (int) ;
 int FUNC_10 (int ,int ) ;
 TYPE_9__* FUNC_11 (int,TYPE_10__*) ;
 int FUNC_12 (TYPE_10__*,int ,int ) ;

void FUNC_13(network_mysqld_con* VAR_3) {
 if (VAR_3->server == ((void*)0)) return;

 GString* VAR_4 = VAR_3->client->response->username;
 GString* VAR_5 = VAR_3->server->response->username;

 if (!FUNC_6(VAR_4, VAR_5)) {
  GString* VAR_6 = FUNC_8(((void*)0));

  FUNC_3(VAR_6, VAR_0);
  FUNC_4(VAR_6, VAR_4->str, VAR_4->len + 1);

  GString* VAR_7 = FUNC_1(VAR_2->pwd_table[VAR_2->pwd_table_index], VAR_4->str);
  if (!VAR_7) return;

  GString* VAR_8 = FUNC_9(20);
  FUNC_12(VAR_8, FUNC_0(VAR_3->server->challenge->challenge), FUNC_0(VAR_7));

  FUNC_3(VAR_6, (VAR_8->len & 0xff));
  FUNC_4(VAR_6, FUNC_0(VAR_8));
  FUNC_3(VAR_6, 0);

  injection* VAR_9 = FUNC_11(6, VAR_6);
  VAR_9->resultset_is_needed = VAR_1;
  network_mysqld_con_lua_t* VAR_10 = VAR_3->plugin_con_state;
  FUNC_2(VAR_10->injected.queries, VAR_9);

  FUNC_10(VAR_3->client->response->response, 0);
  FUNC_5(VAR_3->client->response->response, VAR_8->str);
  FUNC_7(VAR_8, VAR_1);
 }
}
