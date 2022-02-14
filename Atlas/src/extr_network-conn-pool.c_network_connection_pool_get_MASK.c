
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int event; } ;
typedef TYPE_1__ network_socket ;
struct TYPE_10__ {TYPE_1__* sock; } ;
typedef TYPE_2__ network_connection_pool_entry ;
struct TYPE_11__ {scalar_t__ length; } ;
typedef TYPE_3__ network_connection_pool ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;

network_socket *FUNC_3(network_connection_pool *VAR_1) {
 network_connection_pool_entry *VAR_2 = ((void*)0);

 if (VAR_1->length > 0) {

  VAR_2 = FUNC_1(VAR_1);
 }





 if (!VAR_2) return ((void*)0);

 network_socket *VAR_3 = VAR_2->sock;

 FUNC_2(VAR_2, VAR_0);


 FUNC_0(&(VAR_3->event));

 return VAR_3;
}
