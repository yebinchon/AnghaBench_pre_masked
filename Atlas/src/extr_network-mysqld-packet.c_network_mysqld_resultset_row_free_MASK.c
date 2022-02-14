
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int network_mysqld_type_t ;
struct TYPE_5__ {scalar_t__ len; } ;
typedef TYPE_1__ network_mysqld_resultset_row_t ;
typedef scalar_t__ guint ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int * FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int *) ;

void FUNC_3(network_mysqld_resultset_row_t *VAR_1) {
 guint VAR_2;

 if (((void*)0) == VAR_1) return;

 for (VAR_2 = 0; VAR_2 < VAR_1->len; VAR_2++) {
  network_mysqld_type_t *VAR_3 = FUNC_1(VAR_1, VAR_2);

  FUNC_2(VAR_3);
 }

 FUNC_0(VAR_1, VAR_0);
}
