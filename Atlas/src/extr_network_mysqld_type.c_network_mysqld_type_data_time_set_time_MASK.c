
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int network_mysqld_type_time_t ;
struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ network_mysqld_type_t ;
typedef int network_mysqld_type_date_t ;


 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 () ;

__attribute__((used)) static int FUNC_2(network_mysqld_type_t *VAR_0, network_mysqld_type_time_t *VAR_1) {
 network_mysqld_type_date_t *VAR_2;

 if (((void*)0) == VAR_0->data) {
  VAR_0->data = FUNC_1();
 }
 VAR_2 = VAR_0->data;

 FUNC_0(VAR_2, VAR_1, sizeof(*VAR_1));

 return 0;
}
