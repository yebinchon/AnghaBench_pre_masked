
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* data; } ;
typedef TYPE_1__ network_mysqld_type_t ;
typedef float network_mysqld_type_float_t ;


 float* FUNC_0 () ;

__attribute__((used)) static int FUNC_1(network_mysqld_type_t *VAR_0, double VAR_1) {
 network_mysqld_type_float_t *VAR_2 = VAR_0->data;

 if (((void*)0) == VAR_0->data) {
  VAR_0->data = FUNC_0();
 }

 VAR_2 = VAR_0->data;
 *VAR_2 = (float)VAR_1;

 return 0;
}
