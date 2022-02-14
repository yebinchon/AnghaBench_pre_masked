
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int network_connection_pool ;
struct TYPE_3__ {int pools; } ;
typedef TYPE_1__ network_backend_t ;
typedef int guint ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int VAR_0 ;

network_connection_pool* FUNC_3(network_backend_t* VAR_1) {
 guint VAR_2 = FUNC_0(FUNC_1(&VAR_0));
 return FUNC_2(VAR_1->pools, VAR_2);
}
