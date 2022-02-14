
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* comment; TYPE_2__* connect_string; TYPE_2__* se_name; TYPE_2__* col_values; TYPE_2__* screens; TYPE_2__* columns; TYPE_2__* keyinfo; } ;
typedef TYPE_1__ network_mysqld_frm ;
typedef size_t guint ;
struct TYPE_11__ {size_t len; struct TYPE_11__** pdata; } ;
typedef TYPE_2__ GPtrArray ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6(network_mysqld_frm *VAR_1) {
 guint VAR_2;

 if (!VAR_1) return;

 for (VAR_2 = 0; VAR_2 < VAR_1->keyinfo->len; VAR_2++) {
  FUNC_4(VAR_1->keyinfo->pdata[VAR_2]);
 }
 FUNC_1(VAR_1->keyinfo, VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_1->columns->len; VAR_2++) {
  FUNC_3(VAR_1->columns->pdata[VAR_2]);
 }
 FUNC_1(VAR_1->columns, VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_1->screens->len; VAR_2++) {
  FUNC_5(VAR_1->screens->pdata[VAR_2]);
 }
 FUNC_1(VAR_1->screens, VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_1->col_values->len; VAR_2++) {
  guint VAR_3;
  GPtrArray *VAR_4 = VAR_1->col_values->pdata[VAR_2];

  for (VAR_3 = 0; VAR_3 < VAR_4->len; VAR_3++) {
   FUNC_2(VAR_4->pdata[VAR_2], VAR_0);
  }
  FUNC_1(VAR_4, VAR_0);
 }
 FUNC_1(VAR_1->col_values, VAR_0);

 FUNC_2(VAR_1->se_name, VAR_0);
 FUNC_2(VAR_1->connect_string, VAR_0);
 FUNC_2(VAR_1->comment, VAR_0);

 FUNC_0(VAR_1);
}
