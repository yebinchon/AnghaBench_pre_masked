
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int network_packet ;
struct TYPE_12__ {int is_null; int is_unsigned; } ;
typedef TYPE_1__ network_mysqld_type_t ;
struct TYPE_13__ {int params; scalar_t__ new_params_bound; int iteration_count; scalar_t__ flags; int stmt_id; } ;
typedef TYPE_2__ network_mysqld_stmt_execute_packet_t ;
typedef int guint16 ;
typedef int guint ;
typedef int gsize ;
struct TYPE_14__ {int* str; } ;
typedef TYPE_3__ GString ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,int,TYPE_3__*) ;
 scalar_t__ FUNC_7 (int *,int*) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,scalar_t__*) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 TYPE_1__* FUNC_11 (int) ;

int FUNC_12(network_packet *VAR_2,
  network_mysqld_stmt_execute_packet_t *VAR_3,
  guint VAR_4) {
 int VAR_5 = 0;
 GString *VAR_6;
 gsize VAR_7;

 VAR_5 = VAR_5 || FUNC_10(VAR_2, &VAR_3->stmt_id);
 VAR_5 = VAR_5 || FUNC_9(VAR_2, &VAR_3->flags);
 VAR_5 = VAR_5 || FUNC_8(VAR_2, &VAR_3->iteration_count);

 if (0 == VAR_4) {
  return VAR_5 ? -1 : 0;
 }

 VAR_7 = (VAR_4 + 7) / 8;
 VAR_6 = FUNC_4(VAR_7);
 VAR_5 = VAR_5 || FUNC_6(VAR_2, VAR_7, VAR_6);
 VAR_5 = VAR_5 || FUNC_9(VAR_2, &VAR_3->new_params_bound);

 if (0 != VAR_5) {
  FUNC_3(VAR_6, VAR_1);

  return -1;
 }

 if (VAR_3->new_params_bound) {
  guint VAR_8;

  for (VAR_8 = 0; 0 == VAR_5 && VAR_8 < VAR_4; VAR_8++) {
   guint16 VAR_9;

   VAR_5 = VAR_5 || FUNC_7(VAR_2, &VAR_9);

   if (0 == VAR_5) {
    network_mysqld_type_t *VAR_10;

    VAR_10 = FUNC_11(VAR_9 & 0xff);
    if (((void*)0) == VAR_10) {
     FUNC_0("%s: couldn't create type = %d", VAR_0, VAR_9 & 0xff);

     VAR_5 = -1;
     break;
    }
    VAR_10->is_null = (VAR_6->str[VAR_8 / 8] & (1 << (VAR_8 % 8))) != 0;
    VAR_10->is_unsigned = (VAR_9 & 0x8000) != 0;

    FUNC_1(VAR_3->params, VAR_10);
   }
  }

  for (VAR_8 = 0; 0 == VAR_5 && VAR_8 < VAR_4; VAR_8++) {
   network_mysqld_type_t *VAR_11 = FUNC_2(VAR_3->params, VAR_8);

   if (!VAR_11->is_null) {
    VAR_5 = VAR_5 || FUNC_5(VAR_2, VAR_11);
   }
  }
 }

 FUNC_3(VAR_6, VAR_1);

 return VAR_5 ? -1 : 0;
}
