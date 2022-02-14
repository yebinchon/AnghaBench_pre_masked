
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ network_mysqld_type_t ;
struct TYPE_5__ {int is_unsigned; int i; } ;
typedef TYPE_2__ network_mysqld_type_int_t ;
typedef int guint64 ;
typedef int gboolean ;



__attribute__((used)) static int FUNC_0(network_mysqld_type_t *VAR_0, guint64 *VAR_1, gboolean *VAR_2) {
 network_mysqld_type_int_t *VAR_3;

 if (((void*)0) == VAR_0->data) return -1;

 VAR_3 = VAR_0->data;

 *VAR_1 = VAR_3->i;
 *VAR_2 = VAR_3->is_unsigned;

 return 0;
}
