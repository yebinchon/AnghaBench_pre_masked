
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* fields; } ;
typedef TYPE_1__ network_mysqld_screen ;
typedef size_t guint ;
struct TYPE_6__ {size_t len; int * pdata; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(network_mysqld_screen *VAR_1) {
 guint VAR_2;
 if (!VAR_1) return;

 for (VAR_2 = 0; VAR_2 < VAR_1->fields->len; VAR_2++) {
  FUNC_2(VAR_1->fields->pdata[VAR_2]);
 }
 FUNC_1(VAR_1->fields, VAR_0);

 FUNC_0(VAR_1);
}
