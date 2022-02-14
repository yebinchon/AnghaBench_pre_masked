
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ sql_token_id ;
struct TYPE_6__ {scalar_t__ token_id; TYPE_1__* text; } ;
typedef TYPE_2__ sql_token ;
typedef int guint ;
typedef int gint ;
typedef int gchar ;
struct TYPE_7__ {int len; scalar_t__ pdata; } ;
struct TYPE_5__ {int * str; } ;
typedef TYPE_3__ GPtrArray ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (int *,char*) ;

guint FUNC_1(GPtrArray* VAR_13, gint* VAR_14, gint* VAR_15) {
 *VAR_14 = *VAR_15 = -1;

 sql_token** VAR_16 = (sql_token**)(VAR_13->pdata);
 guint VAR_17 = VAR_13->len;
 if (VAR_17 <= 1) { return 0; }

 guint VAR_18 = 1, VAR_19;
 while (VAR_16[VAR_18]->token_id == VAR_0 && ++VAR_18 < VAR_17);
 if (VAR_18 >= VAR_17) { return 0; }

 sql_token_id VAR_20 = VAR_16[VAR_18]->token_id;

 if (VAR_20 == VAR_9 || VAR_20 == VAR_5) {
  for (; VAR_18 < VAR_17; ++VAR_18) {
   if (VAR_16[VAR_18]->token_id == VAR_6) {
    for (VAR_19 = VAR_18+1; VAR_19 < VAR_17; ++VAR_19) {
     if (VAR_16[VAR_19]->token_id == VAR_12) break;

     if (VAR_16[VAR_19]->token_id == VAR_3) {
      if (VAR_19 + 2 < VAR_17 && VAR_16[VAR_19+1]->token_id == VAR_1) {
       *VAR_14 = VAR_19;
       *VAR_15 = VAR_19 + 2;
      } else {
       *VAR_15 = VAR_19;
      }

      break;
     }
    }

    break;
   }
  }

  return 1;
 } else if (VAR_20 == VAR_11) {
  for (; VAR_18 < VAR_17; ++VAR_18) {
   if (VAR_16[VAR_18]->token_id == VAR_10) break;

   if (VAR_16[VAR_18]->token_id == VAR_3) {
    if (VAR_18 + 2 < VAR_17 && VAR_16[VAR_18+1]->token_id == VAR_1) {
     *VAR_14 = VAR_18;
     *VAR_15 = VAR_18 + 2;
    } else {
     *VAR_15 = VAR_18;
    }

    break;
   }
  }

  return 2;
 } else if (VAR_20 == VAR_7 || VAR_20 == VAR_8) {
  for (; VAR_18 < VAR_17; ++VAR_18) {
   gchar* VAR_21 = VAR_16[VAR_18]->text->str;
   if (FUNC_0(VAR_21, "VALUES") == 0 || FUNC_0(VAR_21, "VALUE") == 0) break;

   sql_token_id VAR_22 = VAR_16[VAR_18]->token_id;
   if (VAR_22 == VAR_3 && VAR_18 + 2 < VAR_17 && VAR_16[VAR_18+1]->token_id == VAR_1) {
    *VAR_14 = VAR_18;
    *VAR_15 = VAR_18 + 2;
    break;
   } else if (VAR_22 == VAR_3 || VAR_22 == VAR_2) {
    if (VAR_18 == VAR_17 - 1) {
     *VAR_15 = VAR_18;
     break;
    } else {
     VAR_21 = VAR_16[VAR_18+1]->text->str;
     VAR_22 = VAR_16[VAR_18+1]->token_id;
     if (FUNC_0(VAR_21, "VALUES") == 0 || FUNC_0(VAR_21, "VALUE") == 0 || VAR_22 == VAR_4 || VAR_22 == VAR_10) {
      *VAR_15 = VAR_18;
      break;
     }
    }
   }
  }

  return 3;
 }

 return 0;
}
