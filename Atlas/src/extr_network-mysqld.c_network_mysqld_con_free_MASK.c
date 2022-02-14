
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* backend; } ;
typedef TYPE_3__ network_mysqld_con_lua_t ;
struct TYPE_11__ {scalar_t__ data; int (* data_free ) (scalar_t__) ;} ;
struct TYPE_14__ {scalar_t__ len; scalar_t__ challenge; struct TYPE_14__* merge_res; struct TYPE_14__* rows; int locks; scalar_t__ charset_connection; scalar_t__ charset_results; scalar_t__ charset_client; TYPE_3__* plugin_con_state; scalar_t__ client; scalar_t__ server; TYPE_1__ parse; } ;
typedef TYPE_4__ network_mysqld_con ;
typedef scalar_t__ guint ;
struct TYPE_12__ {int connected_clients; } ;
typedef TYPE_4__ GPtrArray ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_6 (TYPE_4__*,scalar_t__) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;

void FUNC_10(network_mysqld_con *VAR_1) {
 if (!VAR_1) return;

 if (VAR_1->parse.data && VAR_1->parse.data_free) {
  VAR_1->parse.data_free(VAR_1->parse.data);
 }

 if (VAR_1->server) FUNC_8(VAR_1->server);
 if (VAR_1->client) FUNC_8(VAR_1->client);

    network_mysqld_con_lua_t *VAR_2 = VAR_1->plugin_con_state;
    if (VAR_2 && VAR_2->backend) {
        if (!FUNC_0(&VAR_2->backend->connected_clients, 0, 0)) {
            FUNC_1(&VAR_2->backend->connected_clients);

        }
    }







 FUNC_7(VAR_1->charset_client, VAR_0);
 FUNC_7(VAR_1->charset_results, VAR_0);
 FUNC_7(VAR_1->charset_connection, VAR_0);

 FUNC_4(VAR_1->locks);
 FUNC_3(VAR_1->locks);

 if (VAR_1->merge_res) {
  GPtrArray* VAR_3 = VAR_1->merge_res->rows;
  if (VAR_3) {
   guint VAR_4;
   for (VAR_4 = 0; VAR_4 < VAR_3->len; ++VAR_4) {
    GPtrArray* VAR_5 = FUNC_6(VAR_3, VAR_4);
    guint VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_5->len; ++VAR_6) {
     FUNC_2(FUNC_6(VAR_5, VAR_6));
    }
    FUNC_5(VAR_5, VAR_0);
   }
   FUNC_5(VAR_3, VAR_0);
  }
  FUNC_2(VAR_1->merge_res);
 }

 if (VAR_1->challenge) FUNC_7(VAR_1->challenge, VAR_0);

 FUNC_2(VAR_1);
}
