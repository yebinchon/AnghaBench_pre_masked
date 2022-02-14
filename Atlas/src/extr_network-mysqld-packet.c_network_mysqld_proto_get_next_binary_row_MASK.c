
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ offset; int data; } ;
typedef TYPE_1__ network_packet ;
typedef int network_mysqld_resultset_row_t ;
typedef int network_mysqld_proto_fielddefs_t ;
typedef scalar_t__ network_mysqld_lenenc_type ;
struct TYPE_9__ {struct TYPE_9__* next; int data; } ;
typedef TYPE_2__ GList ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

GList *FUNC_3(GList *VAR_1, network_mysqld_proto_fielddefs_t *VAR_2, network_mysqld_resultset_row_t *VAR_3) {
 network_packet VAR_4;
 int VAR_5 = 0;
 network_mysqld_lenenc_type VAR_6;

 VAR_4.data = VAR_1->data;
 VAR_4.offset = 0;

 VAR_5 = VAR_5 || FUNC_2(&VAR_4);

 VAR_5 = VAR_5 || FUNC_1(&VAR_4, &VAR_6);
 if (0 != VAR_5) return ((void*)0);

 if (VAR_0 == VAR_6) {

  return ((void*)0);
 }

 VAR_5 = VAR_5 || FUNC_0(&VAR_4, VAR_2, VAR_3);

 return VAR_5 ? ((void*)0) : VAR_1->next;
}
