
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int network_packet ;
struct TYPE_14__ {int is_null; } ;
typedef TYPE_1__ network_mysqld_type_t ;
typedef int network_mysqld_resultset_row_t ;
struct TYPE_15__ {int len; } ;
typedef TYPE_2__ network_mysqld_proto_fielddefs_t ;
struct TYPE_16__ {int type; } ;
typedef TYPE_3__ network_mysqld_proto_fielddef_t ;
typedef scalar_t__ guint8 ;
typedef int guint ;
struct TYPE_17__ {int* str; } ;
typedef TYPE_4__ GString ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,int,TYPE_4__*) ;
 scalar_t__ FUNC_7 (int *,scalar_t__*) ;
 TYPE_1__* FUNC_8 (int ) ;

int FUNC_9(network_packet *VAR_2, network_mysqld_proto_fielddefs_t *VAR_3, network_mysqld_resultset_row_t *VAR_4) {
 int VAR_5 = 0;
 guint VAR_6;
 guint VAR_7;
 GString *VAR_8;
 guint8 VAR_9;

 VAR_5 = VAR_5 || FUNC_7(VAR_2, &VAR_9);
 VAR_5 = VAR_5 || (VAR_9 != 0);

 VAR_7 = (VAR_3->len + 7 + 2) / 8;
 VAR_8 = FUNC_4(VAR_7);
 VAR_5 = VAR_5 || FUNC_6(VAR_2, VAR_7, VAR_8);

 for (VAR_6 = 0; 0 == VAR_5 && VAR_6 < VAR_3->len; VAR_6++) {
  network_mysqld_type_t *VAR_10;
  network_mysqld_proto_fielddef_t *VAR_11 = FUNC_2(VAR_3, VAR_6);

  VAR_10 = FUNC_8(VAR_11->type);
  if (((void*)0) == VAR_10) {
   FUNC_0("%s: coulnd't create type = %d",
     VAR_0, VAR_11->type);

   VAR_5 = -1;
   break;
  }

  if (VAR_8->str[(VAR_6 + 2) / 8] & (1 << ((VAR_6 + 2) % 8))) {
   VAR_10->is_null = VAR_1;
  } else {
   VAR_5 = VAR_5 || FUNC_5(VAR_2, VAR_10);
  }

  FUNC_1(VAR_4, VAR_10);
 }

 FUNC_3(VAR_8, VAR_1);

 return VAR_5 ? -1 : 0;
}
