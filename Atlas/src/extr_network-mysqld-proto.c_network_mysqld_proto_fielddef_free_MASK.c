
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* org_table; struct TYPE_4__* table; struct TYPE_4__* org_name; struct TYPE_4__* name; struct TYPE_4__* db; struct TYPE_4__* catalog; } ;
typedef TYPE_1__ MYSQL_FIELD ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(MYSQL_FIELD *VAR_0) {
 if (VAR_0->catalog) FUNC_0(VAR_0->catalog);
 if (VAR_0->db) FUNC_0(VAR_0->db);
 if (VAR_0->name) FUNC_0(VAR_0->name);
 if (VAR_0->org_name) FUNC_0(VAR_0->org_name);
 if (VAR_0->table) FUNC_0(VAR_0->table);
 if (VAR_0->org_table) FUNC_0(VAR_0->org_table);

 FUNC_0(VAR_0);
}
