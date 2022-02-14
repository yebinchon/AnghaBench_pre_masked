
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* srv; } ;
typedef TYPE_2__ network_mysqld_con ;
typedef int network_backends_t ;
struct TYPE_9__ {scalar_t__ type; scalar_t__ state; } ;
typedef TYPE_3__ network_backend_t ;
typedef int guint ;
struct TYPE_7__ {int * backends; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *,int) ;

int FUNC_3(network_mysqld_con* VAR_2) {
 int VAR_3 = -1;
 guint VAR_4;

 network_backends_t* VAR_5 = VAR_2->srv->backends;

 guint VAR_6 = FUNC_1(VAR_5);
 for (VAR_4 = 0; VAR_4 < VAR_6; ++VAR_4) {
  network_backend_t* VAR_7 = FUNC_2(VAR_5, VAR_4);
  if (VAR_7 == ((void*)0)) continue;

  if (FUNC_0(VAR_7) == ((void*)0)) continue;

  if (VAR_7->type == VAR_1 && VAR_7->state == VAR_0) {
   VAR_3 = VAR_4;
   break;
  }
 }

 return VAR_3;
}
