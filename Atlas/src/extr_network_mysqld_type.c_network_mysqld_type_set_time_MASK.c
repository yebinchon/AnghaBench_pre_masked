
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int network_mysqld_type_time_t ;
struct TYPE_4__ {int (* set_time ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ network_mysqld_type_t ;


 int FUNC_0 (TYPE_1__*,int *) ;

int FUNC_1(network_mysqld_type_t *VAR_0, network_mysqld_type_time_t *VAR_1) {
 if (((void*)0) == VAR_0->set_time) return -1;

 return VAR_0->set_time(VAR_0, VAR_1);
}
