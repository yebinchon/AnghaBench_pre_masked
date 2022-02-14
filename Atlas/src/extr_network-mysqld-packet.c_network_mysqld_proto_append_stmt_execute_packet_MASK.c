
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


struct TYPE_17__ {scalar_t__ is_null; scalar_t__ type; } ;
typedef TYPE_1__ network_mysqld_type_t ;
struct TYPE_18__ {TYPE_14__* params; scalar_t__ new_params_bound; int iteration_count; scalar_t__ flags; int stmt_id; } ;
typedef TYPE_2__ network_mysqld_stmt_execute_packet_t ;
typedef int guint16 ;
typedef int guint ;
typedef int gsize ;
struct TYPE_19__ {int* str; int len; } ;
struct TYPE_16__ {int len; } ;
typedef TYPE_3__ GString ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_1__* FUNC_1 (TYPE_14__*,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (int*,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_3__*,TYPE_1__*) ;

int FUNC_9(GString *VAR_1,
  network_mysqld_stmt_execute_packet_t *VAR_2,
  guint VAR_3) {
 gsize VAR_4;
 GString *VAR_5;
 guint VAR_6;
 int VAR_7 = 0;

 VAR_4 = (VAR_3 + 7) / 8;
 VAR_5 = FUNC_3(VAR_4);
 FUNC_4(VAR_5->str, 0, VAR_5->len);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  network_mysqld_type_t *VAR_8 = FUNC_1(VAR_2->params, VAR_6);

  if (VAR_8->is_null) {
   VAR_5->str[VAR_6 / 8] |= 1 << (VAR_6 % 8);
  }
 }

 FUNC_7(VAR_1, VAR_0);
 FUNC_6(VAR_1, VAR_2->stmt_id);
 FUNC_7(VAR_1, VAR_2->flags);
 FUNC_6(VAR_1, VAR_2->iteration_count);
 FUNC_2(VAR_1, FUNC_0(VAR_5));
 FUNC_7(VAR_1, VAR_2->new_params_bound);

 if (VAR_2->new_params_bound) {
  for (VAR_6 = 0; VAR_6 < VAR_2->params->len; VAR_6++) {
   network_mysqld_type_t *VAR_9 = FUNC_1(VAR_2->params, VAR_6);

   FUNC_5(VAR_1, (guint16)VAR_9->type);
  }
  for (VAR_6 = 0; 0 == VAR_7 && VAR_6 < VAR_2->params->len; VAR_6++) {
   network_mysqld_type_t *VAR_10 = FUNC_1(VAR_2->params, VAR_6);

   if (!VAR_10->is_null) {
    VAR_7 = VAR_7 || FUNC_8(VAR_1, VAR_10);
   }
  }
 }

 return VAR_7 ? -1 : 0;
}
