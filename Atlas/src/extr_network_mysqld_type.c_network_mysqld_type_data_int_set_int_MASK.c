
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ network_mysqld_type_t ;
struct TYPE_6__ {int is_unsigned; int i; } ;
typedef TYPE_2__ network_mysqld_type_int_t ;
typedef int guint64 ;
typedef int gboolean ;


 TYPE_2__* FUNC_0 () ;

__attribute__((used)) static int FUNC_1(network_mysqld_type_t *VAR_0, guint64 VAR_1, gboolean VAR_2) {
 network_mysqld_type_int_t *VAR_3;

 if (((void*)0) == VAR_0->data) {
  VAR_0->data = FUNC_0();
 }
 VAR_3 = VAR_0->data;

 VAR_3->i = VAR_1;
 VAR_3->is_unsigned = VAR_2;

 return 0;
}
