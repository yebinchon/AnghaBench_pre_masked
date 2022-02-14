
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
typedef size_t gint ;
typedef char gchar ;
struct TYPE_7__ {int len; scalar_t__ pdata; } ;
struct TYPE_5__ {char* str; } ;
typedef TYPE_3__ GPtrArray ;
typedef int GArray ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;

GArray* FUNC_3(GPtrArray* VAR_8, gchar* VAR_9, gchar* VAR_10, guint VAR_11, gint VAR_12) {
 GArray* VAR_13 = FUNC_1(VAR_0, VAR_0, sizeof(guint));

 sql_token** VAR_14 = (sql_token**)(VAR_8->pdata);
 guint VAR_15 = VAR_8->len;
 guint VAR_16, VAR_17, VAR_18;

 if (VAR_11 == 1) {
  for (VAR_16 = VAR_12; VAR_16 < VAR_15; ++VAR_16) {
   if (VAR_14[VAR_16]->token_id == VAR_7) {
    for (VAR_17 = VAR_16+1; VAR_17 < VAR_15-2; ++VAR_17) {
     if (VAR_14[VAR_17]->token_id == VAR_4 && FUNC_2(VAR_14[VAR_17]->text->str, VAR_10) == 0) {
      if (VAR_14[VAR_17+1]->token_id == VAR_3) {
       if (VAR_14[VAR_17-1]->token_id != VAR_2 || FUNC_2(VAR_14[VAR_17-2]->text->str, VAR_9) == 0) {
        VAR_18 = VAR_17 + 2;
        FUNC_0(VAR_13, VAR_18);
        break;
       }
      } else if (VAR_17 + 3 < VAR_15 && FUNC_2(VAR_14[VAR_17+1]->text->str, "IN") == 0 && VAR_14[VAR_17+2]->token_id == VAR_5) {
       VAR_18 = VAR_17 + 3;
       FUNC_0(VAR_13, VAR_18);
       while ((VAR_18 += 2) < VAR_15 && VAR_14[VAR_18-1]->token_id != VAR_1) {
        FUNC_0(VAR_13, VAR_18);
       }
       break;
      }
     }
    }
    break;
   }
  }
 } else if (VAR_11 == 2) {
  for (VAR_16 = VAR_12; VAR_16 < VAR_15; ++VAR_16) {
   if (VAR_14[VAR_16]->token_id == VAR_7) {
    for (VAR_17 = VAR_16+1; VAR_17 < VAR_15-2; ++VAR_17) {
     if (VAR_14[VAR_17]->token_id == VAR_4 && FUNC_2(VAR_14[VAR_17]->text->str, VAR_10) == 0) {
      if (VAR_14[VAR_17+1]->token_id == VAR_3) {
       if (VAR_14[VAR_17-1]->token_id != VAR_2 || FUNC_2(VAR_14[VAR_17-2]->text->str, VAR_9) == 0) {
        VAR_18 = VAR_17 + 2;
        FUNC_0(VAR_13, VAR_18);
        break;
       }
      } else if (VAR_17 + 3 < VAR_15 && FUNC_2(VAR_14[VAR_17+1]->text->str, "IN") == 0 && VAR_14[VAR_17+2]->token_id == VAR_5) {
       VAR_18 = VAR_17 + 3;
       FUNC_0(VAR_13, VAR_18);
       while ((VAR_18 += 2) < VAR_15 && VAR_14[VAR_18-1]->token_id != VAR_1) {
        FUNC_0(VAR_13, VAR_18);
       }
       break;
      }
     }
    }
    break;
   }
  }
 } else if (VAR_11 == 3) {
  sql_token_id VAR_19 = VAR_14[VAR_12]->token_id;

  if (VAR_19 == VAR_6) {
   for (VAR_16 = VAR_12+1; VAR_16 < VAR_15-2; ++VAR_16) {
    if (VAR_14[VAR_16]->token_id == VAR_4 && FUNC_2(VAR_14[VAR_16]->text->str, VAR_10) == 0) {
     VAR_18 = VAR_16 + 2;
     FUNC_0(VAR_13, VAR_18);
     break;
    }
   }
  } else {
   VAR_18 = 2;
   if (VAR_19 == VAR_5) {
    gint VAR_20 = -1;
    for (VAR_17 = VAR_12+1; VAR_17 < VAR_15; ++VAR_17) {
     VAR_19 = VAR_14[VAR_17]->token_id;
     if (VAR_19 == VAR_1) break;
     if (VAR_19 == VAR_4 && FUNC_2(VAR_14[VAR_17]->text->str, VAR_10) == 0) {
      if (VAR_14[VAR_17-1]->token_id != VAR_2 || FUNC_2(VAR_14[VAR_17-2]->text->str, VAR_9) == 0) {
       VAR_20 = VAR_17;
       break;
      }
     }
    }
    VAR_18 = VAR_20 - VAR_12 + 1;
   }

   for (VAR_16 = VAR_12; VAR_16 < VAR_15-1; ++VAR_16) {
    gchar* VAR_21 = VAR_14[VAR_16]->text->str;
    if ((FUNC_2(VAR_21, "VALUES") == 0 || FUNC_2(VAR_21, "VALUE") == 0) && VAR_14[VAR_16+1]->token_id == VAR_5) {
     VAR_18 += VAR_16;
     if (VAR_18 < VAR_15) FUNC_0(VAR_13, VAR_18);
     break;
    }
   }
  }
 }

 return VAR_13;
}
