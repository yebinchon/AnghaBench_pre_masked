
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ network_mysqld_type_t ;
typedef int gsize ;
struct TYPE_5__ {char* str; int len; } ;
typedef TYPE_2__ GString ;



__attribute__((used)) static int FUNC_0(network_mysqld_type_t *VAR_0, const char **VAR_1, gsize *VAR_2) {
 GString *VAR_3 = VAR_0->data;

 if (((void*)0) == VAR_0->data) return -1;

 *VAR_1 = VAR_3->str;
 *VAR_2 = VAR_3->len;

 return 0;
}
