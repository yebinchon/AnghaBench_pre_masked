
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int network_connection_pool ;
struct TYPE_6__ {scalar_t__ uuid; scalar_t__ addr; TYPE_3__* pools; } ;
typedef TYPE_1__ network_backend_t ;
typedef scalar_t__ guint ;
struct TYPE_7__ {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int * FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

void FUNC_6(network_backend_t *VAR_1) {
 if (!VAR_1) return;

 guint VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->pools->len; ++VAR_2) {
  network_connection_pool* VAR_3 = FUNC_2(VAR_1->pools, VAR_2);
  FUNC_5(VAR_3);
 }
 FUNC_1(VAR_1->pools, VAR_0);

 if (VAR_1->addr) FUNC_4(VAR_1->addr);
 if (VAR_1->uuid) FUNC_3(VAR_1->uuid, VAR_0);

 FUNC_0(VAR_1);
}
