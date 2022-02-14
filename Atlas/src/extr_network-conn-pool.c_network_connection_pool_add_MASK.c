
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int network_socket ;
struct TYPE_5__ {int * pool; int * sock; } ;
typedef TYPE_1__ network_connection_pool_entry ;
typedef int network_connection_pool ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int *) ;

network_connection_pool_entry *FUNC_3(network_connection_pool *VAR_0, network_socket *VAR_1) {
 if (VAR_0) {
  network_connection_pool_entry *VAR_2 = FUNC_1();
  if (VAR_2) {
   VAR_2->sock = VAR_1;
   VAR_2->pool = VAR_0;
   FUNC_0(VAR_0, VAR_2);

   return VAR_2;
  }
 }

 FUNC_2(VAR_1);
 return ((void*)0);
}
