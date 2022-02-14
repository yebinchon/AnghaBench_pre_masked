
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int network_socket ;
struct TYPE_17__ {int backend_ndx; TYPE_7__* backend; } ;
typedef TYPE_5__ network_mysqld_con_lua_t ;
struct TYPE_18__ {TYPE_4__* client; TYPE_1__* srv; TYPE_5__* plugin_con_state; } ;
typedef TYPE_6__ network_mysqld_con ;
typedef int network_connection_pool ;
struct TYPE_19__ {int connected_clients; } ;
typedef TYPE_7__ network_backend_t ;
struct TYPE_16__ {TYPE_3__* response; } ;
struct TYPE_15__ {TYPE_2__* username; } ;
struct TYPE_14__ {char* str; } ;
struct TYPE_13__ {int backends; } ;
typedef int GHashTable ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,...) ;
 TYPE_7__* FUNC_4 (int ,int) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_6__*,TYPE_7__*,int *) ;

network_socket *FUNC_7(network_mysqld_con *VAR_1, int VAR_2, GHashTable *VAR_3) {
 network_backend_t *VAR_4 = ((void*)0);
 network_socket *VAR_5;
 network_mysqld_con_lua_t *VAR_6 = VAR_1->plugin_con_state;







 VAR_4 = FUNC_4(VAR_1->srv->backends, VAR_2);
 if (!VAR_4) return ((void*)0);
       int VAR_7 = 0;
 network_connection_pool* VAR_8 = FUNC_0(VAR_4);
 if (((void*)0) == (VAR_5 = FUNC_5(VAR_8))) {



        VAR_7 = 1;
  if (((void*)0) == (VAR_5 = FUNC_6(VAR_1, VAR_4, VAR_3))) {
   VAR_6->backend_ndx = -1;
   return ((void*)0);
  }
 }
 VAR_6->backend = VAR_4;

 VAR_6->backend_ndx = VAR_2;

        if (VAR_7 == 0 && !FUNC_1(&VAR_6->backend->connected_clients, 0, 0)) {
            FUNC_2(&VAR_6->backend->connected_clients);

        }

 return VAR_5;
}
