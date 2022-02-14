
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sql_token_id ;
struct TYPE_4__ {scalar_t__ token_id; } ;
typedef TYPE_1__ sql_token ;
typedef int guint ;
typedef int gboolean ;
struct TYPE_5__ {int len; scalar_t__ pdata; } ;
typedef TYPE_2__ GPtrArray ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

gboolean FUNC_0(GPtrArray *VAR_6) {
 sql_token **VAR_7 = (sql_token**)(VAR_6->pdata);
 guint VAR_8 = VAR_6->len;

 if (VAR_8 > 1) {
  guint VAR_9 = 1;
  sql_token_id VAR_10 = VAR_7[VAR_9]->token_id;

  while (VAR_10 == VAR_0 && ++VAR_9 < VAR_8) {
   VAR_10 = VAR_7[VAR_9]->token_id;
  }


  return (VAR_10 != VAR_3 && VAR_10 != VAR_4 && VAR_10 != VAR_1 && VAR_10 != VAR_2);
 }

 return VAR_5;
}
