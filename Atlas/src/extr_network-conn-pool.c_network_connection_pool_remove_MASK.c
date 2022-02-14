
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


struct TYPE_14__ {TYPE_4__* dst; TYPE_2__* src; int * response; } ;
typedef TYPE_5__ network_socket ;
struct TYPE_15__ {TYPE_5__* sock; } ;
typedef TYPE_6__ network_connection_pool_entry ;
typedef int network_connection_pool ;
struct TYPE_13__ {TYPE_3__* name; } ;
struct TYPE_12__ {int str; } ;
struct TYPE_11__ {TYPE_1__* name; } ;
struct TYPE_10__ {int str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int *,TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,int ) ;

void FUNC_3(network_connection_pool *VAR_2, network_connection_pool_entry *VAR_3) {
 network_socket *VAR_4 = VAR_3->sock;

 if (VAR_4->response == ((void*)0)) {
  FUNC_0("%s: (remove) remove socket from pool, response is NULL, src is %s, dst is %s", VAR_0, VAR_4->src->name->str, VAR_4->dst->name->str);
 }

 FUNC_2(VAR_3, VAR_1);

 FUNC_1(VAR_2, VAR_3);
}
