
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int event; } ;
typedef TYPE_1__ network_socket ;
struct TYPE_7__ {TYPE_1__* sock; } ;
typedef TYPE_2__ network_connection_pool_entry ;
typedef scalar_t__ gboolean ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(network_connection_pool_entry *VAR_0, gboolean VAR_1) {
 if (!VAR_0) return;

 if (VAR_0->sock && VAR_1) {
  network_socket *VAR_2 = VAR_0->sock;

  FUNC_0(&(VAR_2->event));
  FUNC_2(VAR_2);
 }

 FUNC_1(VAR_0);
}
