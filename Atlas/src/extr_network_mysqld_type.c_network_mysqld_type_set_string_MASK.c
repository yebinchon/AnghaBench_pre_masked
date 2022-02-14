
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* set_string ) (TYPE_1__*,char const*,int ) ;} ;
typedef TYPE_1__ network_mysqld_type_t ;
typedef int gsize ;


 int FUNC_0 (TYPE_1__*,char const*,int ) ;

int FUNC_1(network_mysqld_type_t *VAR_0, const char *VAR_1, gsize VAR_2) {
 if (((void*)0) == VAR_0->set_string) return -1;

 return VAR_0->set_string(VAR_0, VAR_1, VAR_2);
}
