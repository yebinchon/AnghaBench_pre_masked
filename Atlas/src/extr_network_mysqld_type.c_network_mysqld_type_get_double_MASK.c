
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* get_double ) (TYPE_1__*,double*) ;} ;
typedef TYPE_1__ network_mysqld_type_t ;


 int FUNC_0 (TYPE_1__*,double*) ;

int FUNC_1(network_mysqld_type_t *VAR_0, double *VAR_1) {
 if (((void*)0) == VAR_0->get_double) return -1;

 return VAR_0->get_double(VAR_0, VAR_1);
}
