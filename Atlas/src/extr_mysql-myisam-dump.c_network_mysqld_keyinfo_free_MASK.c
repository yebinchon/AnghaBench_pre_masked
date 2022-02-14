
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; TYPE_3__* parts; } ;
typedef TYPE_1__ network_mysqld_keyinfo ;
typedef size_t guint ;
struct TYPE_6__ {size_t len; int * pdata; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(network_mysqld_keyinfo *VAR_1) {
 guint VAR_2;

 if (!VAR_1) return;

 for (VAR_2 = 0; VAR_2 < VAR_1->parts->len; VAR_2++) {
  FUNC_3(VAR_1->parts->pdata[VAR_2]);
 }
 FUNC_1(VAR_1->parts, VAR_0);
 FUNC_2(VAR_1->name, VAR_0);

 FUNC_0(VAR_1);
}
