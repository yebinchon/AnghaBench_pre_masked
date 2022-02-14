
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* data; } ;
typedef TYPE_1__ network_mysqld_type_t ;
typedef double network_mysqld_type_double_t ;



__attribute__((used)) static int FUNC_0(network_mysqld_type_t *VAR_0, double *VAR_1) {
 network_mysqld_type_double_t *VAR_2 = VAR_0->data;

 if (((void*)0) == VAR_2) return -1;

 *VAR_1 = *VAR_2;

 return 0;
}
