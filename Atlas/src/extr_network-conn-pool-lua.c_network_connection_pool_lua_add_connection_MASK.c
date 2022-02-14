
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_16__ {int backend_ndx; TYPE_10__* backend; } ;
typedef TYPE_5__ network_mysqld_con_lua_t ;
struct TYPE_17__ {TYPE_9__* server; int srv; TYPE_5__* plugin_con_state; } ;
typedef TYPE_6__ network_mysqld_con ;
typedef int network_connection_pool_entry ;
typedef int network_connection_pool ;
struct TYPE_19__ {int is_authed; int event; int fd; TYPE_7__* response; TYPE_4__* dst; TYPE_2__* src; } ;
struct TYPE_18__ {int username; } ;
struct TYPE_15__ {TYPE_3__* name; } ;
struct TYPE_14__ {int str; } ;
struct TYPE_13__ {TYPE_1__* name; } ;
struct TYPE_12__ {int str; } ;
struct TYPE_11__ {int connected_clients; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (int *,int ,int ,int ,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ,int ,int ) ;
 int * FUNC_8 (int *,TYPE_9__*) ;
 TYPE_7__* FUNC_9 () ;
 int VAR_2 ;

int FUNC_10(network_mysqld_con *VAR_3) {
 network_connection_pool_entry *VAR_4 = ((void*)0);
 network_mysqld_con_lua_t *VAR_5 = VAR_3->plugin_con_state;


 if (!VAR_3->server) return 0;





    if(!VAR_3->server->response)
    {
        FUNC_7("%s: (remove) remove socket from pool, response is NULL, src is %s, dst is %s",
            VAR_1, VAR_3->server->src->name->str, VAR_3->server->dst->name->str);

        VAR_3->server->response = FUNC_9();
        FUNC_6(VAR_3->server->response->username, FUNC_0("mysql_proxy_invalid_user"));
    }


 VAR_3->server->is_authed = 1;


 network_connection_pool* VAR_6 = FUNC_2(VAR_5->backend);
 VAR_4 = FUNC_8(VAR_6, VAR_3->server);

 if (VAR_4) {
  FUNC_3(&(VAR_3->server->event), VAR_3->server->fd, VAR_0, VAR_2, VAR_4);
  FUNC_1(VAR_3->srv, &(VAR_3->server->event));
 }

    if (!FUNC_4(&VAR_5->backend->connected_clients, 0, 0)) {
        FUNC_5(&VAR_5->backend->connected_clients);

    }


 VAR_5->backend = ((void*)0);
 VAR_5->backend_ndx = -1;

 VAR_3->server = ((void*)0);

 return 0;
}
