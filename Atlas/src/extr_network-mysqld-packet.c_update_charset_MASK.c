
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* client; TYPE_1__* server; TYPE_4__* charset_connection; TYPE_4__* charset_results; TYPE_4__* charset_client; } ;
typedef TYPE_3__ network_mysqld_con ;
struct TYPE_10__ {scalar_t__ len; } ;
struct TYPE_8__ {int charset_connection; int charset_results; int charset_client; } ;
struct TYPE_7__ {int charset_connection; int charset_results; int charset_client; } ;
typedef TYPE_4__ GString ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(network_mysqld_con* VAR_0) {
 GString* VAR_1 = VAR_0->charset_client;
 GString* VAR_2 = VAR_0->charset_results;
 GString* VAR_3 = VAR_0->charset_connection;

 if (VAR_1->len > 0) {
  if (VAR_0->server) FUNC_1(VAR_0->server->charset_client, FUNC_0(VAR_1));
  FUNC_1(VAR_0->client->charset_client, FUNC_0(VAR_1));
 }

 if (VAR_2->len > 0) {
  if (VAR_0->server) FUNC_1(VAR_0->server->charset_results, FUNC_0(VAR_2));
  FUNC_1(VAR_0->client->charset_results, FUNC_0(VAR_2));
 }

 if (VAR_3->len > 0) {
  if (VAR_0->server) FUNC_1(VAR_0->server->charset_connection, FUNC_0(VAR_3));
  FUNC_1(VAR_0->client->charset_connection, FUNC_0(VAR_3));
 }
}
