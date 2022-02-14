
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ token_id; TYPE_1__* text; } ;
typedef TYPE_2__ sql_token ;
struct TYPE_9__ {int is_in_select_calc_found_rows; int locks; } ;
typedef TYPE_3__ network_mysqld_con ;
typedef int guint ;
typedef int gchar ;
struct TYPE_10__ {int len; scalar_t__ pdata; } ;
struct TYPE_7__ {int * str; } ;
typedef TYPE_4__ GPtrArray ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*) ;

void FUNC_4(GPtrArray* VAR_4, network_mysqld_con* VAR_5) {
 VAR_5->is_in_select_calc_found_rows = VAR_0;

 sql_token** VAR_6 = (sql_token**)(VAR_4->pdata);
 guint VAR_7 = VAR_4->len;

 if (VAR_7 > 2) {
  if (VAR_6[1]->token_id == VAR_1 && FUNC_3(VAR_6[2]->text->str, "GET_LOCK") == 0) {
   gchar* VAR_8 = VAR_6[4]->text->str;
   if (!FUNC_1(VAR_5->locks, VAR_8)) FUNC_0(VAR_5->locks, FUNC_2(VAR_8));
  }
 }

 guint VAR_9;
 for (VAR_9 = 1; VAR_9 < VAR_7; ++VAR_9) {
  sql_token* VAR_10 = VAR_6[VAR_9];
  if (VAR_6[VAR_9]->token_id == VAR_2) {
   VAR_5->is_in_select_calc_found_rows = VAR_3;
   break;
  }
 }
}
