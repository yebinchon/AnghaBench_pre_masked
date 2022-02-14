
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int network_socket_retval_t ;
struct TYPE_6__ {int (* con_cleanup ) (int *,TYPE_2__*) ;} ;
struct TYPE_7__ {TYPE_1__ plugins; } ;
typedef TYPE_2__ network_mysqld_con ;
typedef int chassis ;
typedef int (* NETWORK_MYSQLD_PLUGIN_FUNC ) (int *,TYPE_2__*) ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;

network_socket_retval_t FUNC_1(chassis *VAR_1, network_mysqld_con *VAR_2) {
 NETWORK_MYSQLD_PLUGIN_FUNC(VAR_3) = ((void*)0);
 network_socket_retval_t VAR_4 = VAR_0;

 VAR_3 = VAR_2->plugins.con_cleanup;

 if (!VAR_3) return VAR_4;


 VAR_4 = (*VAR_3)(VAR_1, VAR_2);


 return VAR_4;
}
