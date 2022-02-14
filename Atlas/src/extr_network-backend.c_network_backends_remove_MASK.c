
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int backends_mutex; TYPE_4__* backends; } ;
typedef TYPE_1__ network_backends_t ;
struct TYPE_6__ {scalar_t__ uuid; scalar_t__ addr; } ;
typedef TYPE_2__ network_backend_t ;
typedef size_t guint ;
struct TYPE_7__ {TYPE_2__** pdata; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,size_t) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;

int FUNC_5(network_backends_t *VAR_1, guint VAR_2) {
 network_backend_t* VAR_3 = VAR_1->backends->pdata[VAR_2];
 if (VAR_3 != ((void*)0)) {
  if (VAR_3->addr) FUNC_4(VAR_3->addr);
  if (VAR_3->uuid) FUNC_3(VAR_3->uuid, VAR_0);
  FUNC_0(VAR_1->backends_mutex);
  FUNC_2(VAR_1->backends, VAR_2);
  FUNC_1(VAR_1->backends_mutex);
 }
 return 0;
}
