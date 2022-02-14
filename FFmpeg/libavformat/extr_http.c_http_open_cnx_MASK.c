
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* priv_data; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_10__ {scalar_t__ auth_type; scalar_t__ stale; } ;
struct TYPE_7__ {scalar_t__ auth_type; scalar_t__ stale; } ;
struct TYPE_9__ {int http_code; scalar_t__ hd; TYPE_4__ auth_state; TYPE_1__ proxy_auth_state; int chained_options; } ;
typedef TYPE_3__ HTTPContext ;
typedef scalar_t__ HTTPAuthType ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,int ,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (TYPE_2__*,int **) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_3, AVDictionary **VAR_4)
{
    HTTPAuthType VAR_5, VAR_6;
    HTTPContext *VAR_7 = VAR_3->priv_data;
    int VAR_8, VAR_9 = 0, VAR_10 = 0;
redo:
    FUNC_1(VAR_4, VAR_7->chained_options, 0);

    VAR_5 = VAR_7->auth_state.auth_type;
    VAR_6 = VAR_7->auth_state.auth_type;

    VAR_8 = FUNC_4(VAR_3, VAR_4);
    if (VAR_8 < 0)
        goto fail;

    VAR_9++;
    if (VAR_7->http_code == 401) {
        if ((VAR_5 == VAR_1 || VAR_7->auth_state.stale) &&
            VAR_7->auth_state.auth_type != VAR_1 && VAR_9 < 4) {
            FUNC_3(&VAR_7->hd);
            goto redo;
        } else
            goto fail;
    }
    if (VAR_7->http_code == 407) {
        if ((VAR_6 == VAR_1 || VAR_7->proxy_auth_state.stale) &&
            VAR_7->proxy_auth_state.auth_type != VAR_1 && VAR_9 < 4) {
            FUNC_3(&VAR_7->hd);
            goto redo;
        } else
            goto fail;
    }
    if ((VAR_7->http_code == 301 || VAR_7->http_code == 302 ||
         VAR_7->http_code == 303 || VAR_7->http_code == 307) &&
        VAR_8 == 1) {

        FUNC_3(&VAR_7->hd);
        if (VAR_10++ >= VAR_2)
            return FUNC_0(VAR_0);


        FUNC_5(&VAR_7->auth_state, 0, sizeof(VAR_7->auth_state));
        VAR_9 = 0;
        VAR_8 = 0;
        goto redo;
    }
    return 0;

fail:
    if (VAR_7->hd)
        FUNC_3(&VAR_7->hd);
    if (VAR_8 < 0)
        return VAR_8;
    return FUNC_2(VAR_7->http_code, FUNC_0(VAR_0));
}
