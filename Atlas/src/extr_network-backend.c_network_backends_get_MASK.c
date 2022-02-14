
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* backends; } ;
typedef TYPE_2__ network_backends_t ;
typedef int network_backend_t ;
typedef size_t guint ;
struct TYPE_5__ {int ** pdata; } ;


 size_t FUNC_0 (TYPE_2__*) ;

network_backend_t *FUNC_1(network_backends_t *VAR_0, guint VAR_1) {
 if (VAR_1 >= FUNC_0(VAR_0)) return ((void*)0);


 return VAR_0->backends->pdata[VAR_1];
}
