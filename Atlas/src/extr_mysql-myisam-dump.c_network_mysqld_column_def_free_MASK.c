
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int comment; int name; } ;
typedef TYPE_1__ network_mysqld_column_def ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(network_mysqld_column_def *VAR_1) {
 if (!VAR_1) return;

 FUNC_1(VAR_1->name, VAR_0);
 FUNC_1(VAR_1->comment, VAR_0);

 FUNC_0(VAR_1);
}
