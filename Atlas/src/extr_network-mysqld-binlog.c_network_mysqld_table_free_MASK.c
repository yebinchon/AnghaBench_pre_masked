
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fields; int table_name; int db_name; } ;
typedef TYPE_1__ network_mysqld_table ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(network_mysqld_table *VAR_1) {
 if (!VAR_1) return;

 FUNC_1(VAR_1->db_name, VAR_0);
 FUNC_1(VAR_1->table_name, VAR_0);

 FUNC_2(VAR_1->fields);

 FUNC_0(VAR_1);
}
