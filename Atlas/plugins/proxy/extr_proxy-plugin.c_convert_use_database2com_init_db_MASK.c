
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
struct TYPE_7__ {int len; scalar_t__ pdata; } ;
struct TYPE_5__ {int str; } ;
typedef int GString ;
typedef TYPE_3__ GPtrArray ;


 int VAR_0 ;
 char VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int ) ;

GString* FUNC_3(char VAR_5, GString *VAR_6, GPtrArray *VAR_7) {
    if (VAR_5 == VAR_1) {
        sql_token **VAR_8 = (sql_token**)(VAR_7->pdata);
        guint VAR_9 = VAR_7->len;
        if (VAR_9 > 1) {
            guint VAR_10 = 1;
            sql_token_id VAR_11 = VAR_8[VAR_10]->token_id;

            while (VAR_11 == VAR_2 && ++VAR_10 < VAR_9) {
                VAR_11 = VAR_8[VAR_10]->token_id;
            }

            if (VAR_11 == VAR_4 && (VAR_10+1) < VAR_9 && VAR_8[VAR_10+1]->token_id == VAR_3) {
                FUNC_2(VAR_6, 0);
                FUNC_0(VAR_6, VAR_0);
                FUNC_1(VAR_6, "%s", VAR_8[VAR_10+1]->text->str);
            }
        }
    }

    return VAR_6;
}
