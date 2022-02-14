
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int network_packet ;
struct TYPE_5__ {int is_null; } ;
typedef TYPE_1__ network_mysqld_proto_field ;
typedef size_t guint ;
struct TYPE_6__ {size_t len; TYPE_1__** pdata; } ;
typedef TYPE_2__ GPtrArray ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;

int FUNC_1(network_packet *VAR_0, GPtrArray *VAR_1) {
 guint VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->len; VAR_2++) {
  network_mysqld_proto_field *VAR_3 = VAR_1->pdata[VAR_2];

  if (!VAR_3->is_null) {
   if (FUNC_0(VAR_0, VAR_3)) return -1;
  }
 }

 return 0;
}
