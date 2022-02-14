
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int con_cleanup; int con_read_query; int con_read_auth; int con_init; } ;
struct TYPE_5__ {TYPE_1__ plugins; } ;
typedef TYPE_2__ network_mysqld_con ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(network_mysqld_con *VAR_4) {
 VAR_4->plugins.con_init = VAR_1;

 VAR_4->plugins.con_read_auth = VAR_2;

 VAR_4->plugins.con_read_query = VAR_3;

 VAR_4->plugins.con_cleanup = VAR_0;

 return 0;
}
