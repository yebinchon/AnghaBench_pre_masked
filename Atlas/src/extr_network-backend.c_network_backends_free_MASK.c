
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* raw_pwds; TYPE_3__* raw_ips; struct TYPE_5__* default_file; int global_wrr; int backends_mutex; TYPE_3__* backends; } ;
typedef TYPE_1__ network_backends_t ;
typedef int network_backend_t ;
typedef size_t gsize ;
struct TYPE_6__ {size_t len; int ** pdata; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(network_backends_t *VAR_1) {
 gsize VAR_2;

 if (!VAR_1) return;

 FUNC_2(VAR_1->backends_mutex);
 for (VAR_2 = 0; VAR_2 < VAR_1->backends->len; VAR_2++) {
  network_backend_t *VAR_3 = VAR_1->backends->pdata[VAR_2];

  FUNC_6(VAR_3);
 }
 FUNC_3(VAR_1->backends_mutex);

 FUNC_4(VAR_1->backends, VAR_0);
 FUNC_1(VAR_1->backends_mutex);

 FUNC_5(VAR_1->global_wrr);
 FUNC_0(VAR_1->default_file);

 FUNC_4(VAR_1->raw_ips, VAR_0);
 FUNC_4(VAR_1->raw_pwds, VAR_0);

 FUNC_0(VAR_1);
}
