
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int queries; } ;
struct TYPE_13__ {TYPE_1__ injected; } ;
typedef TYPE_4__ network_mysqld_con_lua_t ;
struct TYPE_14__ {TYPE_4__* plugin_con_state; TYPE_3__* client; } ;
typedef TYPE_5__ network_mysqld_con ;
struct TYPE_15__ {int resultset_is_needed; } ;
typedef TYPE_6__ injection ;
struct TYPE_12__ {TYPE_2__* default_db; } ;
struct TYPE_11__ {char* str; } ;
typedef int GString ;


 char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_6__*) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (char*,int) ;
 TYPE_6__* FUNC_3 (int,int *) ;
 scalar_t__ FUNC_4 (char*,char*) ;

void FUNC_5(network_mysqld_con* VAR_2) {
 char* VAR_3 = VAR_2->client->default_db->str;

 if (VAR_3 != ((void*)0) && FUNC_4(VAR_3, "") != 0) {
  char VAR_4 = VAR_0;
  GString* VAR_5 = FUNC_2(&VAR_4, 1);
  FUNC_1(VAR_5, VAR_3);
  injection* VAR_6 = FUNC_3(2, VAR_5);
  VAR_6->resultset_is_needed = VAR_1;
  network_mysqld_con_lua_t* VAR_7 = VAR_2->plugin_con_state;
  FUNC_0(VAR_7->injected.queries, VAR_6);
 }
}
