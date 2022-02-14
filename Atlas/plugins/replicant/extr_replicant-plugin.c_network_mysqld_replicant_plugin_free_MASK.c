
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ read_binlogs; struct TYPE_7__* mysqld_password; struct TYPE_7__* mysqld_username; struct TYPE_7__* master_address; TYPE_4__* listen_con; } ;
typedef TYPE_2__ chassis_plugin_config ;
struct TYPE_8__ {TYPE_1__* server; } ;
struct TYPE_6__ {int event; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_4__*) ;

void FUNC_4(chassis_plugin_config *VAR_0) {
 if (VAR_0->listen_con) {







 }

 if (VAR_0->master_address) {

  FUNC_1(VAR_0->master_address);
 }

 if (VAR_0->mysqld_username) FUNC_1(VAR_0->mysqld_username);
 if (VAR_0->mysqld_password) FUNC_1(VAR_0->mysqld_password);
 if (VAR_0->read_binlogs) FUNC_2(VAR_0->read_binlogs);

 FUNC_1(VAR_0);
}
